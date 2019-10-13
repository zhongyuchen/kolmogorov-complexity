//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;

map<int, int> q;
map<int, int> qb;
map<pair<int, int>, int> s;

int get_bit(int x)
{
	int cnt = 0;
	while (x)
	{
		//x /= 10;
		x >>= 1;
		cnt++;
	}
	return cnt;
}

int get_first(int x)
{
	int y;
	while (x)
	{
		y = x;
		x /= 10;
	}
	return y;
}

int main()
{
	int i;
	int k;
	int cnt = 0;
	int max = 0;
	char c;
	pair<int, int> p;
	freopen("input9.txt", "rb", stdin);
	//freopen("decimal.txt", "w", stdout);
	while(1)
	{
		for (i = 0, k = 0; i < 32 && (c = getchar()) != EOF; i++)
			k = k * 2 + c - '0';
		if (c != EOF)
		{
			p.first = get_bit(k);//how many bits?
			qb[p.first]++;
			p.second = get_first(k);//the first bit?
			q[k]++;
			s[p]++;
			cnt++;
			if (max < k)
				max = k;
			//cout << k << endl;
		}
		else
			break;
	}

	//for (map<int, int>::const_iterator it = q.begin(); it != q.end(); it++)
	//	cout << it->second << " " << it->first << endl;

	//for (map<pair<int, int>, int>::const_iterator it = s.begin(); it != s.end(); it++)
	//	cout << it->first.first << " " << it->first.second << " " << it->second << endl;\

	//for (map<int, int>::const_iterator it = qb.begin(); it != qb.end(); it++)
	//	cout << it->first << " " << it->second << endl;
	cout << "max " << max << endl;
	cout << "cnt " << cnt << endl;
	//10,000 random numbers

	return 0;
}

/*content
2106246360
562118888
751583065
357755919=

*/

/*rand()
29421
8405
8826
6816
7516
27726
28666
*/