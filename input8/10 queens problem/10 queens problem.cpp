#include<iostream>
using namespace std;
int chess[10];

//chessboard: chess[row]=col
//for example: chess[0]=0, chess[1]=2
//   0 1 2 3 4 5 6 7 8 9
//0: 1 0 0 0 0 0 0 0 0 0
//1: 0 0 1 0 0 0 0 0 0 0
//2: ...

int cnt;//for counting purpose

void print()//use chess[] to print the chess board
{
	int j;
	for (int i = 0; i < 11; i++)//10 rows
	{
		//10 collums
		for (j = 0; j < 10; j++)
			cout << (i== 10 ||chess[i] == j);
		//printf("%d", chess[i] == j);

		//for (j = 0; j < chess[i]; j++)
		//	cout << "0";
		//cout << "1";//the grid marked 1
		//for (j++; j < 10; j++)
		//	cout << "0";
	}
	//cout << "1111111111";//divide line
}
int check(int row, int col)//check if chess[row]=col is suitable
{
	//check the new chesspiece with all the old ones
	for (int i = 0; i < row; i++)
		if (col == chess[i] || i + chess[i] == row + col || i - row == chess[i] - col)
			return 0;//two chesspieces in the same collum, main diagonal, sub diagonal
	return 1;//no violation
}
void queen(int row)
{
	for (int col = 0; col < 10; col++)
		if (check(row, col))//if no violation
		{
			chess[row] = col;//set the new chesspiece
			if (9 == row)//if it's the last line, print the result
			{
				cnt++;//for counting purpose
				print();
				chess[row] = 0;//clear chess[9]
				return;
			}
			queen(row + 1);//set the next row's chesspiece
			chess[row] = 0;//recurs back and clear chess[8] ... chess[0] after printing the chess board
		}
}
int main()
{
	freopen("back.txt", "wb", stdout);
	queen(0);
	//cout << "TOTAL: " << cnt << endl;
}