#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Sudoku.h"
using namespace std;

int main() {
	Sudoku  su;
	su.GiveQuestion();
	su.ReadIn();
	su.Solve();
return 0;
}

