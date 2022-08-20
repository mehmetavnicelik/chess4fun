play: board.o chess.o pieces.o
	g++ board.o chess.o pieces.o -o play
board.o: board.cpp
	g++ -c -std=gnu++11 board.cpp
chess.o: chess.cpp
	g++ -c -std=gnu++11 chess.cpp
pieces.o: pieces.cpp
	g++ -c -std=gnu++11 pieces.cpp

clean:
	rm *.o play
