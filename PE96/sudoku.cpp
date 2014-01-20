#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int calculate_answer(int [][9][9]);
void solve_sudoku(int [][9]);

void main()
{
	char sudoku_matrix[50][9][9]={0};
	int s_m[50][9][9],s_m_solved[50][9][9];
	string s;
	char a;
	int i,j,k;

	ifstream fin("sudoku.txt",ios::in);

	if(!fin)
	{
		cout<<"File open error!"<<endl;
		return;
	}

	for(i=0;i<50;i++)
	{
		getline(fin,s);	
		for(j=0;j<9;j++)
		{
			fin.read(sudoku_matrix[i][j],9);
			getline(fin,s);
		}
	}

	for(i=0;i<50;i++)
	{	for(j=0;j<9;j++)
		{	for(k=0;k<9;k++)
			{	s_m[i][j][k] = (int)sudoku_matrix[i][j][k] - 48;
				s_m_solved[i][j][k] = (int)sudoku_matrix[i][j][k] - 48;

				solve_sudoku(s_m_solved[i]);
			}
		}
	}


	calculate_answer(s_m_solved);

	cout<<(int)sudoku_matrix[0][0][0]<<endl;
	cout<<(int)sudoku_matrix[1][1][1]<<endl;
}