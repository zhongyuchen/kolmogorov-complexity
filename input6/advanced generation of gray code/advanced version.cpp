#include <iostream>
using namespace std;

//using bit operation to generate gray code

int main()
{
	int x, i;
	freopen("graycode.txt", "wb", stdout);
	for (x = 0; x < 4096; x++)
	{
		for (i = 0; i< 12; i++)
			cout << (((x >> i) ^ (x >> (i + 1))) & 1);
		//cout << endl;
	}
}

//12 bits
//0 ~ 4095, 4096 numbers in total