///////////////////////////////////////////////////////////////////
// Checker.cpp -  To check whether the SuDoKu puzzle is solved or//
//                not.                                           //
// Language: standard C++                                        //
// Platform: Toshiba Satellite Windows 8                         //
// Application: SuDoKu Puzzle Checker                            //
// Author:      Ganesh Thiagarajan,                              //
//              ganesh_vjy@yahoo.com                             //
///////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "\n\n\t\tProgram to Check SUDOKU Puzzle solved correctly or not!!" << endl;
	cout << "\t\t------------------------------------------------------------\n";

	bool Solved = true;
	int sudoku[9][9];

	// read sudoku input 
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> sudoku[i][j];
		}
	}

	//print the sudoku 
	for (int i = 0; i < 9; i++)
	{
		cout << " ";
		for (int j = 0; j < 9; j++)
		{
			cout << sudoku[i][j] << " ";
		}
		cout << "\n";
	}

	// validate the puzzle is solved correct or not

	// Row wise check
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
	//		cout << sudoku[i][j] << " ";
			for (int k = 0; k < 9; k++)
			{
				if (sudoku[i][j] == sudoku[i][k]&& j!=k)
				{
					cout << "Row Sudoku Error";
					Solved = false;
					break;
				}
			}
		}
	}
	
	//column wise check 
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 1; k < 9; k++)
			{
				if (sudoku[j][i] == sudoku[k][i] && j!=k)
				{
					cout << "Column Sudoku Error";
					Solved = false;
					break;
				}
					
			}
		}
	}

	if (Solved)
		cout << "Sudoku solved!";
	
	return 0;
}
