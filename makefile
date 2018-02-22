# compiler
CC=cl.exe
# linker
LINK=link.exe
# ccflags
CCFLAGS=/EHsc

.PHONY	: all
all : AttrInit
  
# Link 
AttrInit : AttrInit.o
	$(LINK) /OUT:AttrInit.exe AttrInit.o
 
# compile
AttrInit.o	: AttrInit.cpp
	$(CC) $(CCFLAGS) /c AttrInit.cpp /FoAttrInit.o

# CLEAN
clean :
	del AttrInit.o AttrInit.exe