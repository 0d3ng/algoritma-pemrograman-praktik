#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Modul1.o \
	${OBJECTDIR}/Modul10/Modul10.o \
	${OBJECTDIR}/Modul11/Modul11.o \
	${OBJECTDIR}/Modul3/Modul3.o \
	${OBJECTDIR}/Modul4/Modul4.o \
	${OBJECTDIR}/Modul5/Modul5.o \
	${OBJECTDIR}/Modul6/Modul6.o \
	${OBJECTDIR}/Modul7/Modul7.o \
	${OBJECTDIR}/Modul8/Modul8.o \
	${OBJECTDIR}/Modul9/Modul9.o \
	${OBJECTDIR}/Tugas.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritma-pemrograman-praktik

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritma-pemrograman-praktik: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritma-pemrograman-praktik ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Modul1.o: Modul1.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul1.o Modul1.cpp

${OBJECTDIR}/Modul10/Modul10.o: Modul10/Modul10.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul10
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul10/Modul10.o Modul10/Modul10.cpp

${OBJECTDIR}/Modul11/Modul11.o: Modul11/Modul11.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul11
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul11/Modul11.o Modul11/Modul11.cpp

${OBJECTDIR}/Modul3/Modul3.o: Modul3/Modul3.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul3
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul3/Modul3.o Modul3/Modul3.cpp

${OBJECTDIR}/Modul4/Modul4.o: Modul4/Modul4.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul4
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul4/Modul4.o Modul4/Modul4.cpp

${OBJECTDIR}/Modul5/Modul5.o: Modul5/Modul5.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul5
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul5/Modul5.o Modul5/Modul5.cpp

${OBJECTDIR}/Modul6/Modul6.o: Modul6/Modul6.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul6
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul6/Modul6.o Modul6/Modul6.cpp

${OBJECTDIR}/Modul7/Modul7.o: Modul7/Modul7.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul7
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul7/Modul7.o Modul7/Modul7.cpp

${OBJECTDIR}/Modul8/Modul8.o: Modul8/Modul8.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul8
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul8/Modul8.o Modul8/Modul8.cpp

${OBJECTDIR}/Modul9/Modul9.o: Modul9/Modul9.cpp
	${MKDIR} -p ${OBJECTDIR}/Modul9
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modul9/Modul9.o Modul9/Modul9.cpp

${OBJECTDIR}/Tugas.o: Tugas.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tugas.o Tugas.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
