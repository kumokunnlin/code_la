/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     / 	\       \    /      /  \        | \         / |    |
    /    \       \  /      /    \       |  \       /  |    |
   /      \       |       /      \      |   \     /   |    |===========
  /--------\      |      /--------\     |    \   /    |    |
 /          \     |     /          \    |     \ /     |    |
/            \    |    /            \   |      |      |    |===========
     A        A
  AAAAAAAA   AAA AAAA      A    A      A     A        A          A
    A    A    A A    A     A     A     A      A      A A        A A
   A     A    AA      A    A      A    A       A    A   A      A   A
  A   A  A   AA     A      A  A   A    A  A    A
 A     AAA    A    A       AAA         AAA               AAAAA
=============================================================================
*/
#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbingxuanOrz
//FoodSheepOrz
//ck_platypusOrz
//koyingOrz
//foxyyOrz
//peiganOrz
long double dis(pii a,pii b){
	return sqrt((a.F-b.F)*(a.F-b.F)+(a.S-b.S)*(a.S-b.S));
}
int main(){
	int n;cin>>n;
	pii arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i].F>>arr[i].S;
	long double dp[n+1][30];
	for(int i=1;i<=n;i++){
		for(int j=0;j<30;j++){
			dp[i][j]=1e9;
		}
	}
	dp[1][0]=0;
	for(int i=2;i<=n;i++){
		for(int j=0;j<30;j++){
			dp[i][j]=min(dp[i][j],dp[i-1][j]+dis(arr[i],arr[i-1]));
		}
		for(int j=0;j<30;j++){
			for(int k=1;k<30;k++){
				if(i-k-1>0&&j-k>=1)dp[i][j]=min(dp[i][j],dp[i-k-1][j-k]+dis(arr[i],arr[i-k-1])+(1<<(j-1))-(1<<(j-k-1)));
				else if(i-k-1>0&&j-k==0)dp[i][j]=min(dp[i][j],dp[i-k-1][j-k]+dis(arr[i],arr[i-k-1])+(1<<(j-1)));
			}
		}
	}
	long double ans=dp[n][0];
	for(int i=1;i<30;i++)ans=min(ans,dp[n][i]);
	cout<<fixed<<setprecision(10)<<ans<<endl;
	return 0;
} 
