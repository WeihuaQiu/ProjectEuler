#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void get_sudoku_matrix( int s_m[][9][9])
{
	char sudoku_matrix[50][9][9]={0};
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
	{	
		for(j=0;j<9;j++)
		{	
			for(k=0;k<9;k++)
			{	
				s_m[i][j][k] = (int)sudoku_matrix[i][j][k] - 48;
				//s_m_solved[i][j][k] = (int)sudoku_matrix[i][j][k] - 48;
			}
		}
	}
}