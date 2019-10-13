#include <iostream>
#include <map>
using namespace std;

map<char, int> q;

int main()
{
	freopen("photo.txt", "rb", stdin);
	unsigned char c;
	int cnt = 0;
	while (~scanf("%c", &c))
	{
		q[c]++;
	}

	for (map<char, int>::const_iterator it = q.begin(); it != q.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
		cnt++;
	}
	cout << "cnt:" << cnt << endl;

	return 0;
}

//^: 74
//_ : 61
//	`: 122
//	a: 71
//	b : 81
//	c : 117
//	d : 89
//	e : 72
//	f : 68
//	g : 85
//	h : 91
//	i : 106
//	j : 84
//	k : 64
//	l : 71
//	m : 74
//	n : 85
//	o : 65
//	p : 125
//	q : 144
//	r : 126
//	s : 134
//	t : 80
//	u : 83
//	v : 106
//	w : 103
//	x : 102
//	y : 85
//	z : 149
//{: 107
//| : 79
//} : 115
//~: 90
// : 88
//cnt : 256

//the frequency of each char is similar to each other
//so using huffman encoding to compress the file is not very ideal