#include<bits/stdc++.h>
#define G(x,i,d) for(x=0,j=d;j>0;j--)x|=s[i+j]-48<<d-j;
using namespace std;string s,a;int p,i,j,k,x,y;main(){freopen("3","rb",stdin);while(~scanf("%c",&x))s+=bitset<8>(x).to_string();while(i<s.size()-4)if(s[i]-48){G(x,i,15)G(y,i+15,3)while(y--+3)a+=a[p++-x];i+=19;}else{G(x,i,8)a+=x;p++;i+=9;}while(k<p)cout<<bitset<8>(a[k++]);}
