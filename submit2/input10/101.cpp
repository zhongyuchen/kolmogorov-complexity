#include<bits/stdc++.h>
#define F(a,b,c) for(int a=b;a<c;a++)
using namespace std;
int i,q=65536;
struct d
{
	int p;
	string z;
	bool operator<(d&n)
	{return z<n.z;}
}f[65536];
main()
{
	freopen("0","rb",stdin);
	string s,t;
	char c;
	while(~(c=getchar()))
		s+=bitset<8>(c).to_string();
	f[0].z=s.substr(0,400);
	for(i=1;i<s.size();i++)
		cout<<s[i];
	F(i,1,q)cout<<1;
	int p=0;
	for(i=q;--i;)
	{
		t=s.substr(++p,400);
		t[0]='1';
		f[i].z=t;
		f[i].p=i;
	}
	f[1].z="0";
	sort(f,f+q);
	F(i,0,q)
		cout<<bitset<16>(f[i].p);
}
