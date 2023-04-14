#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	ll ans=0;
	cin>>n>>m;
	ll arr[90][16]={0};
	arr[0][0]=1;
	arr[0][1]=1;
	for(int i=1;i<m;i++){
		ll sum=arr[i-1][0];
		for(int j=1;j<=n;j++){
			sum+=arr[i-1][j];
			if(arr[i-1][j-1]>0){
				arr[i][j]=arr[i-1][j-1];
			}
		}
		arr[i][0]=sum;
	}
	for(int i=0;i<=n;i++){
		ans+=arr[m-1][i];
	}
	cout<<ans<<endl;
} 
