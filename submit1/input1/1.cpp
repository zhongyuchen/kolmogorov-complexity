#include<bits/stdc++.h>
#define G(x,i,d) for(x=0,j=d;j>0;j--)x|=s[i+j]-48<<d-j;
using namespace std;string s,a;int p,i,j,k,x,y;main(){freopen("1","rb",stdin);while(~scanf("%c",&x))s+=bitset<8>(x).to_string();while(i<s.size())if(s[i]-48){G(x,i,14)G(y,i+14,5)while(y--+3)a+=a[p++-x];i+=20;}else{G(x,i,7)a+=x;p++;i+=8;}while(k<p)cout<<bitset<8>(a[k++]);}
