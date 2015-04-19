Sudokumain: Sudokumain.o Sudoku.o
	g++ -o Sudokumain Sudokumain.cpp Sudoku.o
Sudokumain.o:Sudokumain.cpp Sudoku.h
	g++ -c Sudokumain.cpp
Sudoku.o:Sudoku.cpp Sudoku.h
	g++ -c Sudoku.cpp
