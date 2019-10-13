#include <iostream>
using namespace std;

int main()
{
	freopen("input4.txt", "rb", stdin);
	//freopen("binary_int4.txt", "wb", stdout);
	char c;
	for (int i = 1; cin >> c; i++)
	{
		cout << c;
		if (i == 32)
		{
			i = 0;
			cout << endl;
		}
	}
}

//observing these binary int
//the first 2 bits are always 0
//then there is no other obvious pattern
//go back to "binary to int" program, try to find other pattern
