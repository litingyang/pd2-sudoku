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
		bool checkans1(int (&)[144]);
	private:int array[144];
};
#endif
