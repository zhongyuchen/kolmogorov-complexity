#include<bits/stdc++.h>
#define F(a,b,c) for(int a=b;a<c;a++)
using namespace std;int i,q=65536;struct d{int p;string z;bool operator<(d&n){return z<n.z;}}f[65536];main(){freopen("10","rb",stdin);string s,t;char c;while(~(c=getchar()))s+=c;f[0].z=s;F(i,1,q)cout<<(s[i/8]>>7-i%8&1);F(i,1,q)cout<<1;for(i=q;--i;){F(j,0,q/8)s[j]=s[j]*2+(s[j+1]>>7&1);t=s.substr(0,500);t[0]|=128;f[i].z=t;f[i].p=i;}f[1].z="0";sort(f,f+q);F(i,0,q)cout<<bitset<16>(f[i].p);}
