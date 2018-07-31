AS=xa
CC=cl65
CFLAGS=-tatmos
LDFILES=
PROGRAM=drwho


all : game
.PHONY : all

HOMEDIR=/home/travis/bin/

SOURCE=src/drwho.c

  
game: $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(PROGRAM).tap
  
data: $(SOURCE)
	pictconv


test:
	echo hello 
  
