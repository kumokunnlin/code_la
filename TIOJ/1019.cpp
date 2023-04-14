#include<bits/stdc++.h>
#define ll long long int  
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		ll arr[n],dp[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		dp[0]=0;
		dp[1]=abs(arr[1]-arr[0]);
		for(int i=2;i<n;i++){
			dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));
		}
		cout<<dp[n-1]<<endl;
		t--;
	}
}
