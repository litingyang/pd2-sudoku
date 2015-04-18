#ifndef Sudoku_H
#define Sudoku_H
using namespace std;
class Sudoku
{
	public:
		void GiveQuestion();
		void ReadIn();
		void Solve();
		int check(int(&)[144] ,bool(&) [144][9]);
		int checkans1(int *);
		int checkans2(int *);
		int checkans3(int *);
	private:int array[144];
};
#endif
