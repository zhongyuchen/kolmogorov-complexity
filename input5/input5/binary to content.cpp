//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i, k;
	char c;
	freopen("input5.txt", "rb", stdin);
	freopen("photo.txt", "wb", stdout);
	do
	{
		for (i = 0, k = 0; i < 8 && (c = getchar()); i++)
			k = k * 2 + c - '0';
	} while (c != EOF && cout << (char)k);
}