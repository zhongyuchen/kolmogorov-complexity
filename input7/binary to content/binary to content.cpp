//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
int cnt;
int main()
{
	int i, k;
	char c;
	freopen("input7.txt", "rb", stdin);
	freopen("pi.txt", "wb", stdout);
	do
	{
		for (i = 0, k = 0; i < 8 && (c = getchar()); i++)
			k = k * 2 + c - '0';
		//if (c != EOF)
		//	cnt++;
	} while (c != EOF && cout << (char)k);
	//cout << "TOTAL: " << cnt << endl;
}

//there is no obvious pattern in binary file
//so I can at least try to translate it into char, and have a compression ratio of 1/8
//and I found that the content is the fractional part of pi, 16000 in total
//so how to generate a high precision pi? 
//use high precision multiplication and pi formula!
//pi formula: John Machin formula 
