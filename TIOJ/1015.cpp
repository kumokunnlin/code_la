#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a,b;
	cin>>a>>b;
	while(a!=0){
		ll ans=0;
		if(a<b){
			ll tmp=a;
			a=b;
			b=tmp;
		}
		ans=b*(b+1)*(b*2+1)/6-(2+a+b)*(b+1)*b/2+(a*b+a+b+1)*b;
		cout<<ans<<endl;
		cin>>a>>b;
	}
}
