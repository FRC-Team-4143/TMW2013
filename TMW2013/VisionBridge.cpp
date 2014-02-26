#include "vxWorks.h" 
#include "sockLib.h" 
#include "inetLib.h" 
#include "stdioLib.h" 
#include "strLib.h" 
#include "Robot.h"

/* defines */
#define PORT         1130   /* server's port number for bind() */ 
 
/**************************************************************************** 
* 
* udpServer - accept and process requests over a UDP socket 
* 
* This routine creates a UDP socket, and accepts connections over the socket 
* from clients.  Each client connection is handled by spawning a separate 
* task to handle client requests. 
* 
* This routine may be invoked as follows: 
*       -> sp udpServer 
*       task spawned: id = 0x3a6f1c, name = t1 
*       value = 3829532 = 0x3a6f1c 
*       -> MESSAGE FROM CLIENT (Internet Address 150.12.0.10, port 1027): 
*       Hello out there 
* 
* RETURNS: Never, or ERROR if a resources could not be allocated. 
*/

STATUS udpServer (void) 
    { 
    struct sockaddr_in  serverAddr;    /* server's socket address */ 
    struct sockaddr_in  clientAddr;    /* client's socket address */ 
    int                 sockAddrSize;  /* size of socket address structure */ 
    int                 sFd;           /* socket file descriptor */ 
    int			recvlen;
    char buf[2048];

    /* set up the local address */

    sockAddrSize = sizeof (struct sockaddr_in); 
    bzero ((char *) &serverAddr, sockAddrSize); 
    serverAddr.sin_family = AF_INET; 
    serverAddr.sin_len = (u_char) sockAddrSize; 
    serverAddr.sin_port = htons (PORT); 
    serverAddr.sin_addr.s_addr = htonl (INADDR_ANY);

    printf("Starting udp task\n");
    
    /* create a UDP-based socket */

    if ((sFd = socket (AF_INET, SOCK_DGRAM, 0)) == ERROR) 
        { 
        perror ("socket"); 
        return (ERROR); 
        }
    printf("Created socket\n");
    /* bind socket to local address */

    if (bind (sFd, (struct sockaddr *) &serverAddr, sockAddrSize) == ERROR) 
        { 
        perror ("bind"); 
        close (sFd); 
        return (ERROR); 
        }

    printf("Bound\n");
    
    for(;;) {
	        printf("waiting on port %d\n", PORT);
                recvlen = recvfrom(sFd, buf, BUFSIZE, 0, (struct sockaddr *)&clientAddr, &sockAddrSize);
                printf("received %d bytes\n", recvlen);
                if (recvlen > 0) {
			Robot::visionpacket = buf[0];
                        buf[recvlen] = 0;
                        printf("received message: %s\n", buf);
                }
    }
}
