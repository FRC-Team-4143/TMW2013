# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/TMW2013/TMW2013



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -IC:/WindRiver/workspace/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = C:/WindRiver/workspace/WPILib/PPC603gnu/WPILib/Debug/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -IC:/WindRiver/workspace/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = C:/WindRiver/workspace/WPILib/PPC603gnu/WPILib/Debug/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoFire.o : $(PRJ_ROOT_DIR)/Commands/AutoFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoPickup.o : $(PRJ_ROOT_DIR)/Commands/AutoPickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoShooter.o : $(PRJ_ROOT_DIR)/Commands/AutoShooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoStop.o : $(PRJ_ROOT_DIR)/Commands/AutoStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/CrabDrive.o : $(PRJ_ROOT_DIR)/Commands/CrabDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DecreaseShooterAngle.o : $(PRJ_ROOT_DIR)/Commands/DecreaseShooterAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Drive.o : $(PRJ_ROOT_DIR)/Commands/Drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveBack.o : $(PRJ_ROOT_DIR)/Commands/DriveBack.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToDiscs.o : $(PRJ_ROOT_DIR)/Commands/DriveToDiscs.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToPyramid.o : $(PRJ_ROOT_DIR)/Commands/DriveToPyramid.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DropPickup.o : $(PRJ_ROOT_DIR)/Commands/DropPickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Fire.o : $(PRJ_ROOT_DIR)/Commands/Fire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/FollowLine.o : $(PRJ_ROOT_DIR)/Commands/FollowLine.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/NoneAuto.o : $(PRJ_ROOT_DIR)/Commands/NoneAuto.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/PivotDrive.o : $(PRJ_ROOT_DIR)/Commands/PivotDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/PyramidAim.o : $(PRJ_ROOT_DIR)/Commands/PyramidAim.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ResetGyro.o : $(PRJ_ROOT_DIR)/Commands/ResetGyro.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ResetWheelCounter.o : $(PRJ_ROOT_DIR)/Commands/ResetWheelCounter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/RunPickup.o : $(PRJ_ROOT_DIR)/Commands/RunPickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SMDB.o : $(PRJ_ROOT_DIR)/Commands/SMDB.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SetWheelOffsets.o : $(PRJ_ROOT_DIR)/Commands/SetWheelOffsets.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CenterPickup4.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CenterPickup4.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CornerPickup2.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2pt.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CornerPickup2pt.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup3pt.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CornerPickup3pt.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3FromCorner.o : $(PRJ_ROOT_DIR)/Commands/Shoot3FromCorner.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterClimb.o : $(PRJ_ROOT_DIR)/Commands/ShooterClimb.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterDrop.o : $(PRJ_ROOT_DIR)/Commands/ShooterDrop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInBack.o : $(PRJ_ROOT_DIR)/Commands/ShooterInBack.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInFront.o : $(PRJ_ROOT_DIR)/Commands/ShooterInFront.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInMiddle.o : $(PRJ_ROOT_DIR)/Commands/ShooterInMiddle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterIncreaseAngle.o : $(PRJ_ROOT_DIR)/Commands/ShooterIncreaseAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterPyramidGoal.o : $(PRJ_ROOT_DIR)/Commands/ShooterPyramidGoal.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterRun.o : $(PRJ_ROOT_DIR)/Commands/ShooterRun.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterStop.o : $(PRJ_ROOT_DIR)/Commands/ShooterStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SteerDrive.o : $(PRJ_ROOT_DIR)/Commands/SteerDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TargetDrive.o : $(PRJ_ROOT_DIR)/Commands/TargetDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ToggleRobotFront.o : $(PRJ_ROOT_DIR)/Commands/ToggleRobotFront.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TurnRobot.o : $(PRJ_ROOT_DIR)/Commands/TurnRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TurnWheels.o : $(PRJ_ROOT_DIR)/Commands/TurnWheels.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/DriveToLineTask.o : $(PRJ_ROOT_DIR)/DriveToLineTask.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/FollowLineTask.o : $(PRJ_ROOT_DIR)/FollowLineTask.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/RAWCConstants.o : $(PRJ_ROOT_DIR)/RAWCConstants.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Blocker.o : $(PRJ_ROOT_DIR)/Subsystems/Blocker.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Climber.o : $(PRJ_ROOT_DIR)/Subsystems/Climber.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/DriveTrain.o : $(PRJ_ROOT_DIR)/Subsystems/DriveTrain.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Pickup.o : $(PRJ_ROOT_DIR)/Subsystems/Pickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/TriggerMonitor.o : $(PRJ_ROOT_DIR)/TriggerMonitor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/jankyTask.o : $(PRJ_ROOT_DIR)/jankyTask.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoFire.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoPickup.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoShooter.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoStop.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutonomousCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/CrabDrive.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DecreaseShooterAngle.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Drive.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveBack.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToDiscs.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToPyramid.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DropPickup.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Fire.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/FollowLine.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/NoneAuto.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/PivotDrive.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/PyramidAim.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ResetGyro.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ResetWheelCounter.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/RunPickup.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SMDB.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SetWheelOffsets.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CenterPickup4.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2pt.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup3pt.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3FromCorner.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterClimb.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterDrop.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInBack.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInFront.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInMiddle.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterIncreaseAngle.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterPyramidGoal.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterRun.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterStop.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SteerDrive.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TargetDrive.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ToggleRobotFront.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TurnRobot.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TurnWheels.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/DriveToLineTask.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/FollowLineTask.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/OI.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/RAWCConstants.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Robot.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/RobotMap.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Blocker.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Climber.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/DriveTrain.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Pickup.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Shooter.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/TriggerMonitor.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/jankyTask.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBassedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -IC:/WindRiver/workspace/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = C:/WindRiver/workspace/WPILib/PPC603gnu/WPILib/Debug/WPILib.a 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBassedRobotTemplate_partialImage/$(MODE_DIR)

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoFire.o : $(PRJ_ROOT_DIR)/Commands/AutoFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoPickup.o : $(PRJ_ROOT_DIR)/Commands/AutoPickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoShooter.o : $(PRJ_ROOT_DIR)/Commands/AutoShooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoStop.o : $(PRJ_ROOT_DIR)/Commands/AutoStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/CrabDrive.o : $(PRJ_ROOT_DIR)/Commands/CrabDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DecreaseShooterAngle.o : $(PRJ_ROOT_DIR)/Commands/DecreaseShooterAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Drive.o : $(PRJ_ROOT_DIR)/Commands/Drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveBack.o : $(PRJ_ROOT_DIR)/Commands/DriveBack.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToDiscs.o : $(PRJ_ROOT_DIR)/Commands/DriveToDiscs.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToPyramid.o : $(PRJ_ROOT_DIR)/Commands/DriveToPyramid.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DropPickup.o : $(PRJ_ROOT_DIR)/Commands/DropPickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Fire.o : $(PRJ_ROOT_DIR)/Commands/Fire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/FollowLine.o : $(PRJ_ROOT_DIR)/Commands/FollowLine.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/NoneAuto.o : $(PRJ_ROOT_DIR)/Commands/NoneAuto.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/PivotDrive.o : $(PRJ_ROOT_DIR)/Commands/PivotDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/PyramidAim.o : $(PRJ_ROOT_DIR)/Commands/PyramidAim.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ResetGyro.o : $(PRJ_ROOT_DIR)/Commands/ResetGyro.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ResetWheelCounter.o : $(PRJ_ROOT_DIR)/Commands/ResetWheelCounter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/RunPickup.o : $(PRJ_ROOT_DIR)/Commands/RunPickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SMDB.o : $(PRJ_ROOT_DIR)/Commands/SMDB.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SetWheelOffsets.o : $(PRJ_ROOT_DIR)/Commands/SetWheelOffsets.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CenterPickup4.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CenterPickup4.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CornerPickup2.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2pt.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CornerPickup2pt.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup3pt.o : $(PRJ_ROOT_DIR)/Commands/Shoot3CornerPickup3pt.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3FromCorner.o : $(PRJ_ROOT_DIR)/Commands/Shoot3FromCorner.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterClimb.o : $(PRJ_ROOT_DIR)/Commands/ShooterClimb.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterDrop.o : $(PRJ_ROOT_DIR)/Commands/ShooterDrop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInBack.o : $(PRJ_ROOT_DIR)/Commands/ShooterInBack.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInFront.o : $(PRJ_ROOT_DIR)/Commands/ShooterInFront.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInMiddle.o : $(PRJ_ROOT_DIR)/Commands/ShooterInMiddle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterIncreaseAngle.o : $(PRJ_ROOT_DIR)/Commands/ShooterIncreaseAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterPyramidGoal.o : $(PRJ_ROOT_DIR)/Commands/ShooterPyramidGoal.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterRun.o : $(PRJ_ROOT_DIR)/Commands/ShooterRun.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterStop.o : $(PRJ_ROOT_DIR)/Commands/ShooterStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SteerDrive.o : $(PRJ_ROOT_DIR)/Commands/SteerDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TargetDrive.o : $(PRJ_ROOT_DIR)/Commands/TargetDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ToggleRobotFront.o : $(PRJ_ROOT_DIR)/Commands/ToggleRobotFront.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TurnRobot.o : $(PRJ_ROOT_DIR)/Commands/TurnRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TurnWheels.o : $(PRJ_ROOT_DIR)/Commands/TurnWheels.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/DriveToLineTask.o : $(PRJ_ROOT_DIR)/DriveToLineTask.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/FollowLineTask.o : $(PRJ_ROOT_DIR)/FollowLineTask.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/RAWCConstants.o : $(PRJ_ROOT_DIR)/RAWCConstants.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Blocker.o : $(PRJ_ROOT_DIR)/Subsystems/Blocker.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Climber.o : $(PRJ_ROOT_DIR)/Subsystems/Climber.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/DriveTrain.o : $(PRJ_ROOT_DIR)/Subsystems/DriveTrain.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Pickup.o : $(PRJ_ROOT_DIR)/Subsystems/Pickup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/TriggerMonitor.o : $(PRJ_ROOT_DIR)/TriggerMonitor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/jankyTask.o : $(PRJ_ROOT_DIR)/jankyTask.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBassedRobotTemplate_partialImage = CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoFire.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoPickup.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoShooter.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoStop.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutonomousCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/CrabDrive.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DecreaseShooterAngle.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Drive.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveBack.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToDiscs.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToPyramid.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DropPickup.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Fire.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/FollowLine.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/NoneAuto.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/PivotDrive.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/PyramidAim.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ResetGyro.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ResetWheelCounter.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/RunPickup.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SMDB.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SetWheelOffsets.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CenterPickup4.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2pt.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup3pt.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3FromCorner.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterClimb.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterDrop.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInBack.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInFront.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInMiddle.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterIncreaseAngle.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterPyramidGoal.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterRun.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterStop.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SteerDrive.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TargetDrive.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ToggleRobotFront.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TurnRobot.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TurnWheels.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/DriveToLineTask.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/FollowLineTask.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/OI.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/RAWCConstants.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Robot.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/RobotMap.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Blocker.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Climber.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/DriveTrain.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Pickup.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Shooter.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/TriggerMonitor.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/jankyTask.o

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o : $(OBJECTS_CommandBassedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBassedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBassedRobotTemplate_partialImage" ]; then cd "CommandBassedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoFire.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoPickup.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoShooter.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutoStop.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/AutonomousCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/CrabDrive.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DecreaseShooterAngle.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Drive.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveBack.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToDiscs.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToPyramid.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/DropPickup.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Fire.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/FollowLine.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/NoneAuto.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/PivotDrive.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/PyramidAim.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ResetGyro.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ResetWheelCounter.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/RunPickup.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SMDB.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SetWheelOffsets.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CenterPickup4.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2pt.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup3pt.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3FromCorner.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterClimb.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterDrop.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInBack.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInFront.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInMiddle.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterIncreaseAngle.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterPyramidGoal.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterRun.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterStop.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/SteerDrive.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TargetDrive.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/ToggleRobotFront.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TurnRobot.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Commands/TurnWheels.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/DriveToLineTask.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/FollowLineTask.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/OI.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/RAWCConstants.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Robot.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/RobotMap.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Blocker.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Climber.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/DriveTrain.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Pickup.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/Subsystems/Shooter.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/TriggerMonitor.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/TMW2013/jankyTask.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoFire.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoPickup.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoShooter.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutoStop.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/AutonomousCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/CrabDrive.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DecreaseShooterAngle.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Drive.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveBack.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToDiscs.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DriveToPyramid.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/DropPickup.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Fire.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/FollowLine.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/NoneAuto.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/PivotDrive.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/PyramidAim.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ResetGyro.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ResetWheelCounter.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/RunPickup.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SMDB.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SetWheelOffsets.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CenterPickup4.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup2pt.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3CornerPickup3pt.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/Shoot3FromCorner.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterClimb.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterDrop.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInBack.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInFront.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterInMiddle.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterIncreaseAngle.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterPyramidGoal.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterRun.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ShooterStop.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/SteerDrive.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TargetDrive.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/ToggleRobotFront.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TurnRobot.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Commands/TurnWheels.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/DriveToLineTask.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/FollowLineTask.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/OI.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/RAWCConstants.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Robot.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/RobotMap.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Blocker.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Climber.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/DriveTrain.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Pickup.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/Subsystems/Shooter.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/TriggerMonitor.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/TMW2013/jankyTask.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
