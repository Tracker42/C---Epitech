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
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/D02A/ex03/generic_list.o \
	${OBJECTDIR}/D10/ex01/Character.o \
	${OBJECTDIR}/D10/ex02/Squad.o \
	${OBJECTDIR}/D10/ex03/MateriaSource.o \
	${OBJECTDIR}/D09/ex00/Character.o \
	${OBJECTDIR}/D01/ex04/menger.o \
	${OBJECTDIR}/D10/ex03/AMateria.o \
	${OBJECTDIR}/D01/ex01/main.o \
	${OBJECTDIR}/D07M/ex00/Borg.o \
	${OBJECTDIR}/D02A/ex03/stack.o \
	${OBJECTDIR}/Rush3/src/module/MonitorModuleCpu.o \
	${OBJECTDIR}/Rush3/src/common/CpuCore.o \
	${OBJECTDIR}/Rush2/src/Sender/SendManager.o \
	${OBJECTDIR}/D08/ex01/droidmemory.o \
	${OBJECTDIR}/D07M/ex03/Admiral.o \
	${OBJECTDIR}/D08/ex03/carrier.o \
	${OBJECTDIR}/Rush1/ex_02/ex_02.o \
	${OBJECTDIR}/D07A/ex00/Skat.o \
	${OBJECTDIR}/Rush1/ex_05/new.o \
	${OBJECTDIR}/Rush2/src/FunctionnalTest.o \
	${OBJECTDIR}/Rush2/src/Chaine/AbstractTable.o \
	${OBJECTDIR}/D15/ex04/ex04.o \
	${OBJECTDIR}/D02M/ex05/ptr_tricks.o \
	${OBJECTDIR}/D07M/ex03/Federation.o \
	${OBJECTDIR}/Rush1/ex_03/vertex.o \
	${OBJECTDIR}/D06/ex02/koaladoctor.o \
	${OBJECTDIR}/D01/ex04/bitmap_header.o \
	${OBJECTDIR}/D14M/ex00/Banana.o \
	${OBJECTDIR}/Rush1/ex_02/point.o \
	${OBJECTDIR}/D13/ex00/Buzz.o \
	${OBJECTDIR}/D10/ex03/Character.o \
	${OBJECTDIR}/Rush1/ex_03/point.o \
	${OBJECTDIR}/D07M/ex00/Warpsystem.o \
	${OBJECTDIR}/Rush1/ex_05/float.o \
	${OBJECTDIR}/D02M/ex04/castmania.o \
	${OBJECTDIR}/D01/ex03/drawing.o \
	${OBJECTDIR}/D06/ex01/main.o \
	${OBJECTDIR}/Rush1/ex_04/float.o \
	${OBJECTDIR}/D10/ex03/Ice.o \
	${OBJECTDIR}/D07M/ex03/Warpsystem.o \
	${OBJECTDIR}/D09/ex00/Paladin.o \
	${OBJECTDIR}/D03/main.o \
	${OBJECTDIR}/Rush2/src/Chaine/ATapisRoulant.o \
	${OBJECTDIR}/D17/ex02/Cesar.o \
	${OBJECTDIR}/D02A/ex00/simple_list.o \
	${OBJECTDIR}/D06/ex02/sickkoala.o \
	${OBJECTDIR}/Rush1/ex_07/File.o \
	${OBJECTDIR}/Rush2/src/Xml/Xml.o \
	${OBJECTDIR}/D10/ex01/AWeapon.o \
	${OBJECTDIR}/D16/ex04/main.o \
	${OBJECTDIR}/D02A/ex02/generic_list.o \
	${OBJECTDIR}/Rush1/ex_06/ex_06.o \
	${OBJECTDIR}/Rush2/src/Factory/XmlObjetFactory.o \
	${OBJECTDIR}/D06/ex02/koalanurse.o \
	${OBJECTDIR}/D06/ex02/koalanurselist.o \
	${OBJECTDIR}/Rush3/src/module/MonitorModuleUser.o \
	${OBJECTDIR}/D14A/ex00/ex00.o \
	${OBJECTDIR}/D02A/ex06/generic_list.o \
	${OBJECTDIR}/D10/ex01/PlasmaRifle.o \
	${OBJECTDIR}/D10/ex01/RadScorpion.o \
	${OBJECTDIR}/D06/ex02/koaladoctorlist.o \
	${OBJECTDIR}/Rush1/ex_06/ex_05.o \
	${OBJECTDIR}/D14M/ex00/Fruit.o \
	${OBJECTDIR}/Rush1/ex_04/char.o \
	${OBJECTDIR}/D02A/ex05/map.o \
	${OBJECTDIR}/D07A/ex00/KreogCom.o \
	${OBJECTDIR}/D01/ex04/drawing.o \
	${OBJECTDIR}/Rush2/src/main.o \
	${OBJECTDIR}/Rush1/ex_07/new.o \
	${OBJECTDIR}/D10/ex02/TacticalMarine.o \
	${OBJECTDIR}/D02A/ex06/stack.o \
	${OBJECTDIR}/D09/ex00/Warrior.o \
	${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayUser.o \
	${OBJECTDIR}/Rush2/src/Sender/SendTerm.o \
	${OBJECTDIR}/D01/ex04/main.o \
	${OBJECTDIR}/D13/ex00/Toy.o \
	${OBJECTDIR}/D10/main.o \
	${OBJECTDIR}/Rush2/src/Objet/Objet.o \
	${OBJECTDIR}/D02M/ex03/func_ptr.o \
	${OBJECTDIR}/Rush3/src/module/MonitorModuleRam.o \
	${OBJECTDIR}/D13/ex00/ToyStory.o \
	${OBJECTDIR}/D13/ex00/Woody.o \
	${OBJECTDIR}/Rush1/ex_01/ex_01.o \
	${OBJECTDIR}/D17/ex04/main.o \
	${OBJECTDIR}/Rush1/ex_04/int.o \
	${OBJECTDIR}/D16/ex03/BF_Translator.o \
	${OBJECTDIR}/D10/ex00/Sorcerer.o \
	${OBJECTDIR}/D17/ex02/OneTime.o \
	${OBJECTDIR}/Rush3/src/common/ExecCommand.o \
	${OBJECTDIR}/D02M/ex00/mul_div.o \
	${OBJECTDIR}/D13/ex00/Picture.o \
	${OBJECTDIR}/D01/ex01/menger.o \
	${OBJECTDIR}/D06/ex02/sickkoalalist.o \
	${OBJECTDIR}/Rush3/src/main.o \
	${OBJECTDIR}/D03/ex00/String.o \
	${OBJECTDIR}/Rush1/ex_06/new.o \
	${OBJECTDIR}/Rush1/ex_05/ex_05.o \
	${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayNetwork.o \
	${OBJECTDIR}/Rush1/ex_06/float.o \
	${OBJECTDIR}/D01/ex00/white_rabbit.o \
	${OBJECTDIR}/D14M/ex00/LittleHand.o \
	${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplayCpu.o \
	${OBJECTDIR}/D02M/ex04/div.o \
	${OBJECTDIR}/D01/ex02/bitmap_header.o \
	${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayCpu.o \
	${OBJECTDIR}/Rush2/src/Objet/Nounours.o \
	${OBJECTDIR}/Rush2/src/Chaine/TablePePeNoel.o \
	${OBJECTDIR}/D10/ex04/AsteroKreog.o \
	${OBJECTDIR}/Rush2/src/Objet/Jouet.o \
	${OBJECTDIR}/D10/ex04/KoalaSteroid.o \
	${OBJECTDIR}/Rush2/src/maintest.o \
	${OBJECTDIR}/D08/ex03/droidmemory.o \
	${OBJECTDIR}/D16/ex03/main.o \
	${OBJECTDIR}/D07M/ex03/Borg.o \
	${OBJECTDIR}/Rush1/ex_01/point.o \
	${OBJECTDIR}/D10/ex04/DeepCoreMiner.o \
	${OBJECTDIR}/D08/ex02/droidmemory.o \
	${OBJECTDIR}/D10/ex01/SuperMutant.o \
	${OBJECTDIR}/D02A/ex04/generic_list.o \
	${OBJECTDIR}/D07A/ex00/KoalaBot.o \
	${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayRam.o \
	${OBJECTDIR}/D14M/ex00/Coconut.o \
	${OBJECTDIR}/Rush3/src/Qt/AQMonitorDisplay.o \
	${OBJECTDIR}/Rush1/ex_06/list.o \
	${OBJECTDIR}/D09/ex00/Priest.o \
	${OBJECTDIR}/Rush2/src/Objet/Carton.o \
	${OBJECTDIR}/D02A/ex06/tree_traversal.o \
	${OBJECTDIR}/D16/ex04/Ratatouille.o \
	${OBJECTDIR}/D10/ex00/Peon.o \
	${OBJECTDIR}/Rush2/src/Objet/PetitPoney.o \
	${OBJECTDIR}/Rush2/src/Chaine/TapisRoulantAleat.o \
	${OBJECTDIR}/D09/main.o \
	${OBJECTDIR}/Rush2/src/Objet/PapierCadeau.o \
	${OBJECTDIR}/Rush1/ex_03/new.o \
	${OBJECTDIR}/D10/ex04/MiningBarge.o \
	${OBJECTDIR}/D14M/ex00/Cagette.o \
	${OBJECTDIR}/D09/ex-1/Exo-1.o \
	${OBJECTDIR}/Rush1/ex_04/ex_04.o \
	${OBJECTDIR}/Rush1/ex_01/new.o \
	${OBJECTDIR}/Rush1/ex_07/main.o \
	${OBJECTDIR}/Rush3/src/common/ModuleFactory.o \
	${OBJECTDIR}/D08/ex00/droid.o \
	${OBJECTDIR}/D10/ex01/AEnemy.o \
	${OBJECTDIR}/Rush1/ex_07/Int.o \
	${OBJECTDIR}/Rush1/ex_05/char.o \
	${OBJECTDIR}/D17/ex02/Encryption.o \
	${OBJECTDIR}/Rush2/src/Logger/Logger.o \
	${OBJECTDIR}/D07A/ex00/Parts.o \
	${OBJECTDIR}/D10/ex02/AssaultTerminator.o \
	${OBJECTDIR}/Rush1/ex_06/int.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplay.o \
	${OBJECTDIR}/D02M/ex01/mem_ptr.o \
	${OBJECTDIR}/Rush2/src/Sender/SendFile.o \
	${OBJECTDIR}/D01/ex05/pyramid.o \
	${OBJECTDIR}/D10/ex04/StripMiner.o \
	${OBJECTDIR}/D02M/ex02/tab_to_2dtab.o \
	${OBJECTDIR}/D02M/ex04/add.o \
	${OBJECTDIR}/D02A/ex01/simple_btree.o \
	${OBJECTDIR}/Rush2/src/Objet/Emballage.o \
	${OBJECTDIR}/D02A/ex05/generic_list.o \
	${OBJECTDIR}/Rush3/src/NCurses/ANCursesDisplay.o \
	${OBJECTDIR}/Rush2/src/Elf/Elf.o \
	${OBJECTDIR}/D07M/ex03/BorgQueen.o \
	${OBJECTDIR}/D17/ex02/main.o \
	${OBJECTDIR}/Rush3/src/main_qt.o \
	${OBJECTDIR}/D10/ex01/PowerFist.o \
	${OBJECTDIR}/D06/ex00/main.o \
	${OBJECTDIR}/Rush1/ex_06/char.o \
	${OBJECTDIR}/D14M/ex00/Citron.o \
	${OBJECTDIR}/D02A/ex04/queue.o \
	${OBJECTDIR}/Rush1/ex_05/array.o \
	${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplayUser.o \
	${OBJECTDIR}/D16/ex00/Parser.o \
	${OBJECTDIR}/D06/ex02/hopital.o \
	${OBJECTDIR}/D08/main.o \
	${OBJECTDIR}/D13/ex00/main.o \
	${OBJECTDIR}/D09/ex00/Hunter.o \
	${OBJECTDIR}/D08/ex02/droid.o \
	${OBJECTDIR}/D10/ex03/Cure.o \
	${OBJECTDIR}/D17/ex01/main.o \
	${OBJECTDIR}/D07M/ex00/Federation.o \
	${OBJECTDIR}/D08/ex03/droid.o \
	${OBJECTDIR}/D02A/ex06/queue.o \
	${OBJECTDIR}/D06/main.o \
	${OBJECTDIR}/Rush1/ex_02/new.o \
	${OBJECTDIR}/D08/ex01/droid.o \
	${OBJECTDIR}/Rush2/src/Sender/SendFileStrategyUnique.o \
	${OBJECTDIR}/Rush1/ex_03/ex_03.o \
	${OBJECTDIR}/D09/ex00/Mage.o \
	${OBJECTDIR}/Rush3/src/module/MonitorModuleNetwork.o \
	${OBJECTDIR}/Rush2/src/Chaine/TapisRoulantPePeNoel.o \
	${OBJECTDIR}/D14M/ex00/CitronVert.o \
	${OBJECTDIR}/D10/ex00/Victim.o \
	${OBJECTDIR}/Rush1/ex_05/int.o \
	${OBJECTDIR}/D14M/ex00/Mixer.o \
	${OBJECTDIR}/Rush1/ex_02/vertex.o \
	${OBJECTDIR}/Rush2/src/Chaine/TableAleat.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/piscine

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/piscine: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/piscine ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/D02A/ex03/generic_list.o: D02A/ex03/generic_list.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex03/generic_list.o D02A/ex03/generic_list.c

${OBJECTDIR}/D10/ex01/Character.o: D10/ex01/Character.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex01/Character.o D10/ex01/Character.cpp

${OBJECTDIR}/D10/ex02/Squad.o: D10/ex02/Squad.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex02/Squad.o D10/ex02/Squad.cpp

${OBJECTDIR}/D10/ex03/MateriaSource.o: D10/ex03/MateriaSource.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex03/MateriaSource.o D10/ex03/MateriaSource.cpp

${OBJECTDIR}/D09/ex00/Character.o: D09/ex00/Character.cpp 
	${MKDIR} -p ${OBJECTDIR}/D09/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/ex00/Character.o D09/ex00/Character.cpp

${OBJECTDIR}/D01/ex04/menger.o: D01/ex04/menger.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex04/menger.o D01/ex04/menger.c

${OBJECTDIR}/D10/ex03/AMateria.o: D10/ex03/AMateria.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex03/AMateria.o D10/ex03/AMateria.cpp

${OBJECTDIR}/D01/ex01/main.o: D01/ex01/main.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex01
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex01/main.o D01/ex01/main.c

${OBJECTDIR}/D07M/ex00/Borg.o: D07M/ex00/Borg.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex00/Borg.o D07M/ex00/Borg.cpp

${OBJECTDIR}/D02A/ex03/stack.o: D02A/ex03/stack.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex03/stack.o D02A/ex03/stack.c

${OBJECTDIR}/Rush3/src/module/MonitorModuleCpu.o: Rush3/src/module/MonitorModuleCpu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/module
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/module/MonitorModuleCpu.o Rush3/src/module/MonitorModuleCpu.cpp

${OBJECTDIR}/Rush3/src/common/CpuCore.o: Rush3/src/common/CpuCore.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/common
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/common/CpuCore.o Rush3/src/common/CpuCore.cpp

${OBJECTDIR}/Rush2/src/Sender/SendManager.o: Rush2/src/Sender/SendManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Sender
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Sender/SendManager.o Rush2/src/Sender/SendManager.cpp

${OBJECTDIR}/D08/ex01/droidmemory.o: D08/ex01/droidmemory.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex01/droidmemory.o D08/ex01/droidmemory.cpp

${OBJECTDIR}/D07M/ex03/Admiral.o: D07M/ex03/Admiral.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex03/Admiral.o D07M/ex03/Admiral.cpp

${OBJECTDIR}/D08/ex03/carrier.o: D08/ex03/carrier.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex03/carrier.o D08/ex03/carrier.cpp

${OBJECTDIR}/Rush1/ex_02/ex_02.o: Rush1/ex_02/ex_02.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_02
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_02/ex_02.o Rush1/ex_02/ex_02.c

${OBJECTDIR}/D07A/ex00/Skat.o: D07A/ex00/Skat.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07A/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07A/ex00/Skat.o D07A/ex00/Skat.cpp

${OBJECTDIR}/Rush1/ex_05/new.o: Rush1/ex_05/new.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_05/new.o Rush1/ex_05/new.c

${OBJECTDIR}/Rush2/src/FunctionnalTest.o: Rush2/src/FunctionnalTest.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/FunctionnalTest.o Rush2/src/FunctionnalTest.cpp

${OBJECTDIR}/Rush2/src/Chaine/AbstractTable.o: Rush2/src/Chaine/AbstractTable.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Chaine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Chaine/AbstractTable.o Rush2/src/Chaine/AbstractTable.cpp

${OBJECTDIR}/D15/ex04/ex04.o: D15/ex04/ex04.cpp 
	${MKDIR} -p ${OBJECTDIR}/D15/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D15/ex04/ex04.o D15/ex04/ex04.cpp

${OBJECTDIR}/D02M/ex05/ptr_tricks.o: D02M/ex05/ptr_tricks.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex05/ptr_tricks.o D02M/ex05/ptr_tricks.c

${OBJECTDIR}/D07M/ex03/Federation.o: D07M/ex03/Federation.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex03/Federation.o D07M/ex03/Federation.cpp

${OBJECTDIR}/Rush1/ex_03/vertex.o: Rush1/ex_03/vertex.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_03/vertex.o Rush1/ex_03/vertex.c

${OBJECTDIR}/D06/ex02/koaladoctor.o: D06/ex02/koaladoctor.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex02/koaladoctor.o D06/ex02/koaladoctor.cpp

${OBJECTDIR}/D01/ex04/bitmap_header.o: D01/ex04/bitmap_header.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex04/bitmap_header.o D01/ex04/bitmap_header.c

${OBJECTDIR}/D14M/ex00/Banana.o: D14M/ex00/Banana.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/Banana.o D14M/ex00/Banana.cpp

${OBJECTDIR}/Rush1/ex_02/point.o: Rush1/ex_02/point.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_02
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_02/point.o Rush1/ex_02/point.c

${OBJECTDIR}/D13/ex00/Buzz.o: D13/ex00/Buzz.cpp 
	${MKDIR} -p ${OBJECTDIR}/D13/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D13/ex00/Buzz.o D13/ex00/Buzz.cpp

${OBJECTDIR}/D10/ex03/Character.o: D10/ex03/Character.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex03/Character.o D10/ex03/Character.cpp

${OBJECTDIR}/Rush1/ex_03/point.o: Rush1/ex_03/point.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_03/point.o Rush1/ex_03/point.c

${OBJECTDIR}/D07M/ex00/Warpsystem.o: D07M/ex00/Warpsystem.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex00/Warpsystem.o D07M/ex00/Warpsystem.cpp

${OBJECTDIR}/Rush1/ex_05/float.o: Rush1/ex_05/float.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_05/float.o Rush1/ex_05/float.c

${OBJECTDIR}/D02M/ex04/castmania.o: D02M/ex04/castmania.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex04/castmania.o D02M/ex04/castmania.c

${OBJECTDIR}/D01/ex03/drawing.o: D01/ex03/drawing.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex03/drawing.o D01/ex03/drawing.c

${OBJECTDIR}/D06/ex01/main.o: D06/ex01/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex01/main.o D06/ex01/main.cpp

${OBJECTDIR}/Rush1/ex_04/float.o: Rush1/ex_04/float.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_04/float.o Rush1/ex_04/float.c

${OBJECTDIR}/D10/ex03/Ice.o: D10/ex03/Ice.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex03/Ice.o D10/ex03/Ice.cpp

${OBJECTDIR}/D07M/ex03/Warpsystem.o: D07M/ex03/Warpsystem.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex03/Warpsystem.o D07M/ex03/Warpsystem.cpp

${OBJECTDIR}/D09/ex00/Paladin.o: D09/ex00/Paladin.cpp 
	${MKDIR} -p ${OBJECTDIR}/D09/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/ex00/Paladin.o D09/ex00/Paladin.cpp

${OBJECTDIR}/D03/main.o: D03/main.c 
	${MKDIR} -p ${OBJECTDIR}/D03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D03/main.o D03/main.c

${OBJECTDIR}/Rush2/src/Chaine/ATapisRoulant.o: Rush2/src/Chaine/ATapisRoulant.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Chaine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Chaine/ATapisRoulant.o Rush2/src/Chaine/ATapisRoulant.cpp

${OBJECTDIR}/D17/ex02/Cesar.o: D17/ex02/Cesar.cpp 
	${MKDIR} -p ${OBJECTDIR}/D17/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D17/ex02/Cesar.o D17/ex02/Cesar.cpp

${OBJECTDIR}/D02A/ex00/simple_list.o: D02A/ex00/simple_list.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex00
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex00/simple_list.o D02A/ex00/simple_list.c

${OBJECTDIR}/D06/ex02/sickkoala.o: D06/ex02/sickkoala.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex02/sickkoala.o D06/ex02/sickkoala.cpp

${OBJECTDIR}/Rush1/ex_07/File.o: Rush1/ex_07/File.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_07
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_07/File.o Rush1/ex_07/File.c

${OBJECTDIR}/Rush2/src/Xml/Xml.o: Rush2/src/Xml/Xml.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Xml
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Xml/Xml.o Rush2/src/Xml/Xml.cpp

${OBJECTDIR}/D10/ex01/AWeapon.o: D10/ex01/AWeapon.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex01/AWeapon.o D10/ex01/AWeapon.cpp

${OBJECTDIR}/D16/ex04/main.o: D16/ex04/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D16/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D16/ex04/main.o D16/ex04/main.cpp

${OBJECTDIR}/D02A/ex02/generic_list.o: D02A/ex02/generic_list.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex02
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex02/generic_list.o D02A/ex02/generic_list.c

${OBJECTDIR}/Rush1/ex_06/ex_06.o: Rush1/ex_06/ex_06.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_06/ex_06.o Rush1/ex_06/ex_06.c

${OBJECTDIR}/Rush2/src/Factory/XmlObjetFactory.o: Rush2/src/Factory/XmlObjetFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Factory
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Factory/XmlObjetFactory.o Rush2/src/Factory/XmlObjetFactory.cpp

${OBJECTDIR}/D06/ex02/koalanurse.o: D06/ex02/koalanurse.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex02/koalanurse.o D06/ex02/koalanurse.cpp

${OBJECTDIR}/D06/ex02/koalanurselist.o: D06/ex02/koalanurselist.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex02/koalanurselist.o D06/ex02/koalanurselist.cpp

${OBJECTDIR}/Rush3/src/module/MonitorModuleUser.o: Rush3/src/module/MonitorModuleUser.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/module
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/module/MonitorModuleUser.o Rush3/src/module/MonitorModuleUser.cpp

${OBJECTDIR}/D14A/ex00/ex00.o: D14A/ex00/ex00.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14A/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14A/ex00/ex00.o D14A/ex00/ex00.cpp

${OBJECTDIR}/D02A/ex06/generic_list.o: D02A/ex06/generic_list.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex06/generic_list.o D02A/ex06/generic_list.c

${OBJECTDIR}/D10/ex01/PlasmaRifle.o: D10/ex01/PlasmaRifle.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex01/PlasmaRifle.o D10/ex01/PlasmaRifle.cpp

${OBJECTDIR}/D10/ex01/RadScorpion.o: D10/ex01/RadScorpion.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex01/RadScorpion.o D10/ex01/RadScorpion.cpp

${OBJECTDIR}/D06/ex02/koaladoctorlist.o: D06/ex02/koaladoctorlist.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex02/koaladoctorlist.o D06/ex02/koaladoctorlist.cpp

${OBJECTDIR}/Rush1/ex_06/ex_05.o: Rush1/ex_06/ex_05.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_06/ex_05.o Rush1/ex_06/ex_05.c

${OBJECTDIR}/D14M/ex00/Fruit.o: D14M/ex00/Fruit.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/Fruit.o D14M/ex00/Fruit.cpp

${OBJECTDIR}/Rush1/ex_04/char.o: Rush1/ex_04/char.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_04/char.o Rush1/ex_04/char.c

${OBJECTDIR}/D02A/ex05/map.o: D02A/ex05/map.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex05/map.o D02A/ex05/map.c

${OBJECTDIR}/D07A/ex00/KreogCom.o: D07A/ex00/KreogCom.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07A/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07A/ex00/KreogCom.o D07A/ex00/KreogCom.cpp

${OBJECTDIR}/D01/ex04/drawing.o: D01/ex04/drawing.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex04/drawing.o D01/ex04/drawing.c

${OBJECTDIR}/Rush2/src/main.o: Rush2/src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/main.o Rush2/src/main.cpp

${OBJECTDIR}/Rush1/ex_07/new.o: Rush1/ex_07/new.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_07
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_07/new.o Rush1/ex_07/new.c

${OBJECTDIR}/D10/ex02/TacticalMarine.o: D10/ex02/TacticalMarine.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex02/TacticalMarine.o D10/ex02/TacticalMarine.cpp

${OBJECTDIR}/D02A/ex06/stack.o: D02A/ex06/stack.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex06/stack.o D02A/ex06/stack.c

${OBJECTDIR}/D09/ex00/Warrior.o: D09/ex00/Warrior.cpp 
	${MKDIR} -p ${OBJECTDIR}/D09/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/ex00/Warrior.o D09/ex00/Warrior.cpp

${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayUser.o: Rush3/src/NCurses/NCursesDisplayUser.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/NCurses
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayUser.o Rush3/src/NCurses/NCursesDisplayUser.cpp

${OBJECTDIR}/Rush2/src/Sender/SendTerm.o: Rush2/src/Sender/SendTerm.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Sender
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Sender/SendTerm.o Rush2/src/Sender/SendTerm.cpp

${OBJECTDIR}/D01/ex04/main.o: D01/ex04/main.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex04/main.o D01/ex04/main.c

${OBJECTDIR}/D13/ex00/Toy.o: D13/ex00/Toy.cpp 
	${MKDIR} -p ${OBJECTDIR}/D13/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D13/ex00/Toy.o D13/ex00/Toy.cpp

${OBJECTDIR}/D10/main.o: D10/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/main.o D10/main.cpp

${OBJECTDIR}/Rush2/src/Objet/Objet.o: Rush2/src/Objet/Objet.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Objet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Objet/Objet.o Rush2/src/Objet/Objet.cpp

${OBJECTDIR}/D02M/ex03/func_ptr.o: D02M/ex03/func_ptr.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex03/func_ptr.o D02M/ex03/func_ptr.c

${OBJECTDIR}/Rush3/src/module/MonitorModuleRam.o: Rush3/src/module/MonitorModuleRam.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/module
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/module/MonitorModuleRam.o Rush3/src/module/MonitorModuleRam.cpp

${OBJECTDIR}/D13/ex00/ToyStory.o: D13/ex00/ToyStory.cpp 
	${MKDIR} -p ${OBJECTDIR}/D13/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D13/ex00/ToyStory.o D13/ex00/ToyStory.cpp

${OBJECTDIR}/D13/ex00/Woody.o: D13/ex00/Woody.cpp 
	${MKDIR} -p ${OBJECTDIR}/D13/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D13/ex00/Woody.o D13/ex00/Woody.cpp

${OBJECTDIR}/Rush1/ex_01/ex_01.o: Rush1/ex_01/ex_01.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_01
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_01/ex_01.o Rush1/ex_01/ex_01.c

${OBJECTDIR}/D17/ex04/main.o: D17/ex04/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D17/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D17/ex04/main.o D17/ex04/main.cpp

${OBJECTDIR}/Rush1/ex_04/int.o: Rush1/ex_04/int.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_04/int.o Rush1/ex_04/int.c

${OBJECTDIR}/D16/ex03/BF_Translator.o: D16/ex03/BF_Translator.cpp 
	${MKDIR} -p ${OBJECTDIR}/D16/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D16/ex03/BF_Translator.o D16/ex03/BF_Translator.cpp

${OBJECTDIR}/D10/ex00/Sorcerer.o: D10/ex00/Sorcerer.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex00/Sorcerer.o D10/ex00/Sorcerer.cpp

${OBJECTDIR}/D17/ex02/OneTime.o: D17/ex02/OneTime.cpp 
	${MKDIR} -p ${OBJECTDIR}/D17/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D17/ex02/OneTime.o D17/ex02/OneTime.cpp

${OBJECTDIR}/Rush3/src/common/ExecCommand.o: Rush3/src/common/ExecCommand.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/common
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/common/ExecCommand.o Rush3/src/common/ExecCommand.cpp

${OBJECTDIR}/D02M/ex00/mul_div.o: D02M/ex00/mul_div.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex00
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex00/mul_div.o D02M/ex00/mul_div.c

${OBJECTDIR}/D13/ex00/Picture.o: D13/ex00/Picture.cpp 
	${MKDIR} -p ${OBJECTDIR}/D13/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D13/ex00/Picture.o D13/ex00/Picture.cpp

${OBJECTDIR}/D01/ex01/menger.o: D01/ex01/menger.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex01
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex01/menger.o D01/ex01/menger.c

${OBJECTDIR}/D06/ex02/sickkoalalist.o: D06/ex02/sickkoalalist.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex02/sickkoalalist.o D06/ex02/sickkoalalist.cpp

${OBJECTDIR}/Rush3/src/main.o: Rush3/src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/main.o Rush3/src/main.cpp

${OBJECTDIR}/D03/ex00/String.o: D03/ex00/String.c 
	${MKDIR} -p ${OBJECTDIR}/D03/ex00
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D03/ex00/String.o D03/ex00/String.c

${OBJECTDIR}/Rush1/ex_06/new.o: Rush1/ex_06/new.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_06/new.o Rush1/ex_06/new.c

${OBJECTDIR}/Rush1/ex_05/ex_05.o: Rush1/ex_05/ex_05.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_05/ex_05.o Rush1/ex_05/ex_05.c

${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayNetwork.o: Rush3/src/NCurses/NCursesDisplayNetwork.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/NCurses
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayNetwork.o Rush3/src/NCurses/NCursesDisplayNetwork.cpp

${OBJECTDIR}/Rush1/ex_06/float.o: Rush1/ex_06/float.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_06/float.o Rush1/ex_06/float.c

${OBJECTDIR}/D01/ex00/white_rabbit.o: D01/ex00/white_rabbit.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex00
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex00/white_rabbit.o D01/ex00/white_rabbit.c

${OBJECTDIR}/D14M/ex00/LittleHand.o: D14M/ex00/LittleHand.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/LittleHand.o D14M/ex00/LittleHand.cpp

${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplayCpu.o: Rush3/src/Qt/QMonitorDisplayCpu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/Qt
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplayCpu.o Rush3/src/Qt/QMonitorDisplayCpu.cpp

${OBJECTDIR}/D02M/ex04/div.o: D02M/ex04/div.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex04/div.o D02M/ex04/div.c

${OBJECTDIR}/D01/ex02/bitmap_header.o: D01/ex02/bitmap_header.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex02
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex02/bitmap_header.o D01/ex02/bitmap_header.c

${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayCpu.o: Rush3/src/NCurses/NCursesDisplayCpu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/NCurses
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayCpu.o Rush3/src/NCurses/NCursesDisplayCpu.cpp

${OBJECTDIR}/Rush2/src/Objet/Nounours.o: Rush2/src/Objet/Nounours.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Objet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Objet/Nounours.o Rush2/src/Objet/Nounours.cpp

${OBJECTDIR}/Rush2/src/Chaine/TablePePeNoel.o: Rush2/src/Chaine/TablePePeNoel.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Chaine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Chaine/TablePePeNoel.o Rush2/src/Chaine/TablePePeNoel.cpp

${OBJECTDIR}/D10/ex04/AsteroKreog.o: D10/ex04/AsteroKreog.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex04/AsteroKreog.o D10/ex04/AsteroKreog.cpp

${OBJECTDIR}/Rush2/src/Objet/Jouet.o: Rush2/src/Objet/Jouet.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Objet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Objet/Jouet.o Rush2/src/Objet/Jouet.cpp

${OBJECTDIR}/D10/ex04/KoalaSteroid.o: D10/ex04/KoalaSteroid.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex04/KoalaSteroid.o D10/ex04/KoalaSteroid.cpp

${OBJECTDIR}/Rush2/src/maintest.o: Rush2/src/maintest.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/maintest.o Rush2/src/maintest.cpp

${OBJECTDIR}/D08/ex03/droidmemory.o: D08/ex03/droidmemory.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex03/droidmemory.o D08/ex03/droidmemory.cpp

${OBJECTDIR}/D16/ex03/main.o: D16/ex03/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D16/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D16/ex03/main.o D16/ex03/main.cpp

${OBJECTDIR}/D07M/ex03/Borg.o: D07M/ex03/Borg.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex03/Borg.o D07M/ex03/Borg.cpp

${OBJECTDIR}/Rush1/ex_01/point.o: Rush1/ex_01/point.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_01
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_01/point.o Rush1/ex_01/point.c

${OBJECTDIR}/D10/ex04/DeepCoreMiner.o: D10/ex04/DeepCoreMiner.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex04/DeepCoreMiner.o D10/ex04/DeepCoreMiner.cpp

${OBJECTDIR}/D08/ex02/droidmemory.o: D08/ex02/droidmemory.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex02/droidmemory.o D08/ex02/droidmemory.cpp

${OBJECTDIR}/D10/ex01/SuperMutant.o: D10/ex01/SuperMutant.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex01/SuperMutant.o D10/ex01/SuperMutant.cpp

${OBJECTDIR}/D02A/ex04/generic_list.o: D02A/ex04/generic_list.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex04/generic_list.o D02A/ex04/generic_list.c

${OBJECTDIR}/D07A/ex00/KoalaBot.o: D07A/ex00/KoalaBot.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07A/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07A/ex00/KoalaBot.o D07A/ex00/KoalaBot.cpp

${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayRam.o: Rush3/src/NCurses/NCursesDisplayRam.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/NCurses
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/NCurses/NCursesDisplayRam.o Rush3/src/NCurses/NCursesDisplayRam.cpp

${OBJECTDIR}/D14M/ex00/Coconut.o: D14M/ex00/Coconut.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/Coconut.o D14M/ex00/Coconut.cpp

${OBJECTDIR}/Rush3/src/Qt/AQMonitorDisplay.o: Rush3/src/Qt/AQMonitorDisplay.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/Qt
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/Qt/AQMonitorDisplay.o Rush3/src/Qt/AQMonitorDisplay.cpp

${OBJECTDIR}/Rush1/ex_06/list.o: Rush1/ex_06/list.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_06/list.o Rush1/ex_06/list.c

${OBJECTDIR}/D09/ex00/Priest.o: D09/ex00/Priest.cpp 
	${MKDIR} -p ${OBJECTDIR}/D09/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/ex00/Priest.o D09/ex00/Priest.cpp

${OBJECTDIR}/Rush2/src/Objet/Carton.o: Rush2/src/Objet/Carton.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Objet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Objet/Carton.o Rush2/src/Objet/Carton.cpp

${OBJECTDIR}/D02A/ex06/tree_traversal.o: D02A/ex06/tree_traversal.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex06/tree_traversal.o D02A/ex06/tree_traversal.c

${OBJECTDIR}/D16/ex04/Ratatouille.o: D16/ex04/Ratatouille.cpp 
	${MKDIR} -p ${OBJECTDIR}/D16/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D16/ex04/Ratatouille.o D16/ex04/Ratatouille.cpp

${OBJECTDIR}/D10/ex00/Peon.o: D10/ex00/Peon.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex00/Peon.o D10/ex00/Peon.cpp

${OBJECTDIR}/Rush2/src/Objet/PetitPoney.o: Rush2/src/Objet/PetitPoney.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Objet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Objet/PetitPoney.o Rush2/src/Objet/PetitPoney.cpp

${OBJECTDIR}/Rush2/src/Chaine/TapisRoulantAleat.o: Rush2/src/Chaine/TapisRoulantAleat.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Chaine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Chaine/TapisRoulantAleat.o Rush2/src/Chaine/TapisRoulantAleat.cpp

${OBJECTDIR}/D09/main.o: D09/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D09
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/main.o D09/main.cpp

${OBJECTDIR}/Rush2/src/Objet/PapierCadeau.o: Rush2/src/Objet/PapierCadeau.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Objet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Objet/PapierCadeau.o Rush2/src/Objet/PapierCadeau.cpp

${OBJECTDIR}/Rush1/ex_03/new.o: Rush1/ex_03/new.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_03/new.o Rush1/ex_03/new.c

${OBJECTDIR}/D10/ex04/MiningBarge.o: D10/ex04/MiningBarge.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex04/MiningBarge.o D10/ex04/MiningBarge.cpp

${OBJECTDIR}/D14M/ex00/Cagette.o: D14M/ex00/Cagette.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/Cagette.o D14M/ex00/Cagette.cpp

${OBJECTDIR}/D09/ex-1/Exo-1.o: D09/ex-1/Exo-1.c 
	${MKDIR} -p ${OBJECTDIR}/D09/ex-1
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/ex-1/Exo-1.o D09/ex-1/Exo-1.c

${OBJECTDIR}/Rush1/ex_04/ex_04.o: Rush1/ex_04/ex_04.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_04/ex_04.o Rush1/ex_04/ex_04.c

${OBJECTDIR}/Rush1/ex_01/new.o: Rush1/ex_01/new.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_01
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_01/new.o Rush1/ex_01/new.c

${OBJECTDIR}/Rush1/ex_07/main.o: Rush1/ex_07/main.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_07
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_07/main.o Rush1/ex_07/main.c

${OBJECTDIR}/Rush3/src/common/ModuleFactory.o: Rush3/src/common/ModuleFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/common
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/common/ModuleFactory.o Rush3/src/common/ModuleFactory.cpp

${OBJECTDIR}/D08/ex00/droid.o: D08/ex00/droid.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex00/droid.o D08/ex00/droid.cpp

${OBJECTDIR}/D10/ex01/AEnemy.o: D10/ex01/AEnemy.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex01/AEnemy.o D10/ex01/AEnemy.cpp

${OBJECTDIR}/Rush1/ex_07/Int.o: Rush1/ex_07/Int.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_07
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_07/Int.o Rush1/ex_07/Int.c

${OBJECTDIR}/Rush1/ex_05/char.o: Rush1/ex_05/char.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_05/char.o Rush1/ex_05/char.c

${OBJECTDIR}/D17/ex02/Encryption.o: D17/ex02/Encryption.cpp 
	${MKDIR} -p ${OBJECTDIR}/D17/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D17/ex02/Encryption.o D17/ex02/Encryption.cpp

${OBJECTDIR}/Rush2/src/Logger/Logger.o: Rush2/src/Logger/Logger.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Logger
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Logger/Logger.o Rush2/src/Logger/Logger.cpp

${OBJECTDIR}/D07A/ex00/Parts.o: D07A/ex00/Parts.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07A/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07A/ex00/Parts.o D07A/ex00/Parts.cpp

${OBJECTDIR}/D10/ex02/AssaultTerminator.o: D10/ex02/AssaultTerminator.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex02/AssaultTerminator.o D10/ex02/AssaultTerminator.cpp

${OBJECTDIR}/Rush1/ex_06/int.o: Rush1/ex_06/int.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_06/int.o Rush1/ex_06/int.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplay.o: Rush3/src/Qt/QMonitorDisplay.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/Qt
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplay.o Rush3/src/Qt/QMonitorDisplay.cpp

${OBJECTDIR}/D02M/ex01/mem_ptr.o: D02M/ex01/mem_ptr.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex01
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex01/mem_ptr.o D02M/ex01/mem_ptr.c

${OBJECTDIR}/Rush2/src/Sender/SendFile.o: Rush2/src/Sender/SendFile.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Sender
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Sender/SendFile.o Rush2/src/Sender/SendFile.cpp

${OBJECTDIR}/D01/ex05/pyramid.o: D01/ex05/pyramid.c 
	${MKDIR} -p ${OBJECTDIR}/D01/ex05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D01/ex05/pyramid.o D01/ex05/pyramid.c

${OBJECTDIR}/D10/ex04/StripMiner.o: D10/ex04/StripMiner.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex04
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex04/StripMiner.o D10/ex04/StripMiner.cpp

${OBJECTDIR}/D02M/ex02/tab_to_2dtab.o: D02M/ex02/tab_to_2dtab.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex02
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex02/tab_to_2dtab.o D02M/ex02/tab_to_2dtab.c

${OBJECTDIR}/D02M/ex04/add.o: D02M/ex04/add.c 
	${MKDIR} -p ${OBJECTDIR}/D02M/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02M/ex04/add.o D02M/ex04/add.c

${OBJECTDIR}/D02A/ex01/simple_btree.o: D02A/ex01/simple_btree.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex01
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex01/simple_btree.o D02A/ex01/simple_btree.c

${OBJECTDIR}/Rush2/src/Objet/Emballage.o: Rush2/src/Objet/Emballage.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Objet
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Objet/Emballage.o Rush2/src/Objet/Emballage.cpp

${OBJECTDIR}/D02A/ex05/generic_list.o: D02A/ex05/generic_list.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex05/generic_list.o D02A/ex05/generic_list.c

${OBJECTDIR}/Rush3/src/NCurses/ANCursesDisplay.o: Rush3/src/NCurses/ANCursesDisplay.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/NCurses
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/NCurses/ANCursesDisplay.o Rush3/src/NCurses/ANCursesDisplay.cpp

${OBJECTDIR}/Rush2/src/Elf/Elf.o: Rush2/src/Elf/Elf.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Elf
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Elf/Elf.o Rush2/src/Elf/Elf.cpp

${OBJECTDIR}/D07M/ex03/BorgQueen.o: D07M/ex03/BorgQueen.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex03/BorgQueen.o D07M/ex03/BorgQueen.cpp

${OBJECTDIR}/D17/ex02/main.o: D17/ex02/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D17/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D17/ex02/main.o D17/ex02/main.cpp

${OBJECTDIR}/Rush3/src/main_qt.o: Rush3/src/main_qt.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/main_qt.o Rush3/src/main_qt.cpp

${OBJECTDIR}/D10/ex01/PowerFist.o: D10/ex01/PowerFist.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex01/PowerFist.o D10/ex01/PowerFist.cpp

${OBJECTDIR}/D06/ex00/main.o: D06/ex00/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex00/main.o D06/ex00/main.cpp

${OBJECTDIR}/Rush1/ex_06/char.o: Rush1/ex_06/char.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_06/char.o Rush1/ex_06/char.c

${OBJECTDIR}/D14M/ex00/Citron.o: D14M/ex00/Citron.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/Citron.o D14M/ex00/Citron.cpp

${OBJECTDIR}/D02A/ex04/queue.o: D02A/ex04/queue.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex04
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex04/queue.o D02A/ex04/queue.c

${OBJECTDIR}/Rush1/ex_05/array.o: Rush1/ex_05/array.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_05/array.o Rush1/ex_05/array.c

${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplayUser.o: Rush3/src/Qt/QMonitorDisplayUser.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/Qt
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/Qt/QMonitorDisplayUser.o Rush3/src/Qt/QMonitorDisplayUser.cpp

${OBJECTDIR}/D16/ex00/Parser.o: D16/ex00/Parser.cpp 
	${MKDIR} -p ${OBJECTDIR}/D16/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D16/ex00/Parser.o D16/ex00/Parser.cpp

${OBJECTDIR}/D06/ex02/hopital.o: D06/ex02/hopital.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/ex02/hopital.o D06/ex02/hopital.cpp

${OBJECTDIR}/D08/main.o: D08/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/main.o D08/main.cpp

${OBJECTDIR}/D13/ex00/main.o: D13/ex00/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D13/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D13/ex00/main.o D13/ex00/main.cpp

${OBJECTDIR}/D09/ex00/Hunter.o: D09/ex00/Hunter.cpp 
	${MKDIR} -p ${OBJECTDIR}/D09/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/ex00/Hunter.o D09/ex00/Hunter.cpp

${OBJECTDIR}/D08/ex02/droid.o: D08/ex02/droid.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex02
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex02/droid.o D08/ex02/droid.cpp

${OBJECTDIR}/D10/ex03/Cure.o: D10/ex03/Cure.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex03/Cure.o D10/ex03/Cure.cpp

${OBJECTDIR}/D17/ex01/main.o: D17/ex01/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D17/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D17/ex01/main.o D17/ex01/main.cpp

${OBJECTDIR}/D07M/ex00/Federation.o: D07M/ex00/Federation.cpp 
	${MKDIR} -p ${OBJECTDIR}/D07M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D07M/ex00/Federation.o D07M/ex00/Federation.cpp

${OBJECTDIR}/D08/ex03/droid.o: D08/ex03/droid.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex03
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex03/droid.o D08/ex03/droid.cpp

${OBJECTDIR}/D02A/ex06/queue.o: D02A/ex06/queue.c 
	${MKDIR} -p ${OBJECTDIR}/D02A/ex06
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D02A/ex06/queue.o D02A/ex06/queue.c

${OBJECTDIR}/D06/main.o: D06/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/D06
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D06/main.o D06/main.cpp

${OBJECTDIR}/Rush1/ex_02/new.o: Rush1/ex_02/new.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_02
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_02/new.o Rush1/ex_02/new.c

${OBJECTDIR}/D08/ex01/droid.o: D08/ex01/droid.cpp 
	${MKDIR} -p ${OBJECTDIR}/D08/ex01
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D08/ex01/droid.o D08/ex01/droid.cpp

${OBJECTDIR}/Rush2/src/Sender/SendFileStrategyUnique.o: Rush2/src/Sender/SendFileStrategyUnique.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Sender
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Sender/SendFileStrategyUnique.o Rush2/src/Sender/SendFileStrategyUnique.cpp

${OBJECTDIR}/Rush1/ex_03/ex_03.o: Rush1/ex_03/ex_03.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_03
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_03/ex_03.o Rush1/ex_03/ex_03.c

${OBJECTDIR}/D09/ex00/Mage.o: D09/ex00/Mage.cpp 
	${MKDIR} -p ${OBJECTDIR}/D09/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D09/ex00/Mage.o D09/ex00/Mage.cpp

${OBJECTDIR}/Rush3/src/module/MonitorModuleNetwork.o: Rush3/src/module/MonitorModuleNetwork.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush3/src/module
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush3/src/module/MonitorModuleNetwork.o Rush3/src/module/MonitorModuleNetwork.cpp

${OBJECTDIR}/Rush2/src/Chaine/TapisRoulantPePeNoel.o: Rush2/src/Chaine/TapisRoulantPePeNoel.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Chaine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Chaine/TapisRoulantPePeNoel.o Rush2/src/Chaine/TapisRoulantPePeNoel.cpp

${OBJECTDIR}/D14M/ex00/CitronVert.o: D14M/ex00/CitronVert.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/CitronVert.o D14M/ex00/CitronVert.cpp

${OBJECTDIR}/D10/ex00/Victim.o: D10/ex00/Victim.cpp 
	${MKDIR} -p ${OBJECTDIR}/D10/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D10/ex00/Victim.o D10/ex00/Victim.cpp

${OBJECTDIR}/Rush1/ex_05/int.o: Rush1/ex_05/int.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_05
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_05/int.o Rush1/ex_05/int.c

${OBJECTDIR}/D14M/ex00/Mixer.o: D14M/ex00/Mixer.cpp 
	${MKDIR} -p ${OBJECTDIR}/D14M/ex00
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/D14M/ex00/Mixer.o D14M/ex00/Mixer.cpp

${OBJECTDIR}/Rush1/ex_02/vertex.o: Rush1/ex_02/vertex.c 
	${MKDIR} -p ${OBJECTDIR}/Rush1/ex_02
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush1/ex_02/vertex.o Rush1/ex_02/vertex.c

${OBJECTDIR}/Rush2/src/Chaine/TableAleat.o: Rush2/src/Chaine/TableAleat.cpp 
	${MKDIR} -p ${OBJECTDIR}/Rush2/src/Chaine
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rush2/src/Chaine/TableAleat.o Rush2/src/Chaine/TableAleat.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/piscine

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
