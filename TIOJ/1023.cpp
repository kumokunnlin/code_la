#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int m;
	while(cin>>m){
		int a[m],b[m];
		for(int i=0;i<m;i++){
		cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		} 
		sort(a,a+m);
		sort(b,b+m);
		long long int ans=0;
		for(int i=m-1;i>=0;i--){
			ans+=b[i]*a[i];
		}
		cout<<ans<<endl;
	}
}
