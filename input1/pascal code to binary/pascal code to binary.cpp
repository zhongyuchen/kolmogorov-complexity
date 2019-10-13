//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i;
	unsigned char c;
	int a[8];
	freopen("pascal.txt", "rb", stdin);
	freopen("binary.txt", "wb", stdout);
	while ((c = getchar())!=EOF)
	{
		for (i = 0; i < 8; i++)
		{
			a[i] = c % 2;
			c /= 2;
		}
		for (i--; i >= 0; i--)
			cout << a[i];
	}
}