//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
int cnt;
int main()
{
	int i, j, k;
	char c;
	freopen("input8.txt", "rb", stdin);
	//freopen("content8(modified).txt", "wb", stdout);
	do
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 9, k = 0; j >= 0 && (c = getchar()); j--)
				if (c == '1')
					k = j;
			if (c != EOF)
				cout << k;
		}
		cout << endl;//in the end delete this
		if (c != EOF)
			cnt++;
		for (i = 0; i < 10; i++)
			c = getchar();
	} while (c != EOF);
	cout << "count: " << cnt << endl;//724 in total
}

//input8: there is only a '1' in every 10 number, and after 100 number, there are 10 '1's
//content: at least I can use 0~9 to record the position of '1' in every 10 number, and ignore the 10 '1's after recorded 10 positions
//with this content, I can turn it back into binary, and have a compression ratio of 10/110
//after doing this I amazingly found that it's actually the advanced version of the famous 8 queen problems
//so I called it 10 queens problem
//how to solve this problem? recurive function! 
