


//using namespace std;
void get_sudoku_matrix(int [][9][9]);
bool calculate_answer(int [][9][9]);
void solve_sudoku(int [][9]);

void main()
{
	int i;

	int s_m[50][9][9],s_m_solved[50][9][9];
	

	get_sudoku_matrix(s_m);

	for(i=0;i<50;i++)
	{
		solve_sudoku(s_m[i]);
	}

	//calculate_answer(s_m);
	//solve_sudoku(s_m_solved[i]);
	//calculate_answer(s_m_solved);

	//cout<<(int)sudoku_matrix[0][0][0]<<endl;
	//cout<<(int)sudoku_matrix[1][1][1]<<endl;
}