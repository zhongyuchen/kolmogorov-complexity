#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i, j;
	int k;
	int cnt = 0;
	char c;
	freopen("input10.txt", "rb", stdin);
	freopen("part3-decimal.txt", "w", stdout);

	//while ((c = getchar()) != EOF)
	//{
	//	k = c - '0';
	//	for (i = 0; i < 15; i++)
	//	{
	//		c = getchar();
	//		k = k * 2 + c - '0';
	//	}
	//	cout << k << endl;
	//	cnt++;
	//}

	//cout << "cnt: " << cnt << endl;

	for (i = 0; i < 65535; i++)
	{
		c = getchar();
		//cout << c;
	}

	for (i = 0; i < 65535; i++)
	{
		c = getchar();
		//cout << c;
	}

	//for (i=0; i < 65536 * 16; i++)
	//{
	//	c = getchar();
	//	cout << c;
	//}

	for (i = 0; i < 65536; i++)
	{
		k = 0;
		for (j = 0; j < 16; j++)
		{
			c = getchar();
			k = k * 2 + c - '0';
		}
		cout << k << endl;
	}
}