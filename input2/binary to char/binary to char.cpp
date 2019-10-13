//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i;
	char k;
	char c;
	//freopen("input2.txt", "rb", stdin);
	freopen("feature14-3-6.txt", "rb", stdin);
	//freopen("feature14-5.txt", "rb", stdin);
	
	//freopen("article.txt", "wb", stdout);
	freopen("char14-3-6.txt", "wb", stdout);
	//freopen("char14-5.txt", "wb", stdout);
	do
	{
		for (i = 0, k = 0; i < 8 && (c = getchar()) != EOF; i++)
			k = k * 2 + c - '0';
	} while (c != EOF && cout << k);
}