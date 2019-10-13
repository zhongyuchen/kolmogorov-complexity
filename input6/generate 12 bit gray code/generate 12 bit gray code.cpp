#include<iostream>
#include<vector>
using namespace std;

//recursive way to generate gray code

vector<vector<int>> gray_code(int bit)
{
	vector<int> vi;
	vector<vector<int>> vvi;
	if (bit == 1)
	{
		vi.push_back(0);
		vvi.push_back(vi);
		vi[0] = 1;
		vvi.push_back(vi);
	}
	else
	{
		vvi = gray_code(bit - 1);
		int length = 1 << (bit - 1);
		int sub_length = bit - 1;
		int i;
		for (i = 0; i < length; i++)
			vvi[i].push_back(0);
		for (i--; i >=0 ; i--)
		{
			vi = vvi[i];
			vi[sub_length] = 1;
			vvi.push_back(vi);
		}
	}
	return vvi;
}

int main()
{
	freopen("graycode.txt", "wb", stdout);
	vector<vector<int>> vvi = gray_code(12);
	for (int i = 0; i < 4096; i++)
	{
		for (int j = 0; j < 12; j++)
			cout << vvi[i][j];
	}
}