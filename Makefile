OBJS = gamemain.o Grid.o TextAnimator.o tictactoe.o
CC = g++
CCFLAGS = -c -Wall -std=c++14
LLFLAGS = -Wall -std=c++14

output: $(OBJS)  
		$(CC) $(OBJS) $(LLFLAGS) -o TICTACTOE

gamemain.o: gamemain.cpp
		$(CC) gamemain.cpp $(CCFLAGS)

Grid.o: Grid.cpp Grid.h
		$(CC) Grid.cpp $(CCFLAGS)

TextAnimator.o: TextAnimator.cpp TextAnimator.h
		$(CC) TextAnimator.cpp $(CCFLAGS)

tictactoe.o: tictactoe.cpp tictactoe.h
		$(CC) tictactoe.cpp $(CCFLAGS)

clean:
		rm $(OBJS) TICTACTOE