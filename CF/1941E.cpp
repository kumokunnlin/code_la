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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 9000000
#define MOD 1000000007
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


int main(){
    int t;cin>>t;
    while(t--){
	    int n,m,k,d;cin>>n>>m>>k>>d;
	    ll arr[n][m];
	    ll dp[n][m];
	    ll ans=1e18;
	    for(int i=0;i<n;i++){
	    	for(int j=0;j<m;j++){
	    		cin>>arr[i][j];
			}
		}
	    for(int i=0;i<n;i++){
	    	for(int j=0;j<m;j++){
	    		dp[i][j]=1e18;
			} 
			dp[i][0]=0;
		}
	    deque<pair<int,ll>> dq;
	    for(int i=0;i<n;i++){
	    	while(dq.size())dq.pop_back();
	    	dq.push_back(mp(0,(ll)1));
	    	for(int j=1;j<m;j++){
	    		while(j-dq.front().F-1>d)dq.pop_front();
	    		dp[i][j]=dq.front().S+arr[i][j]+1;
	    		while(dq.back().S>=dp[i][j])dq.pop_back();
	    		dq.push_back(mp(j,dp[i][j]));
			}
		}
		ll sum=0;
		for(int i=0;i<k;i++){
			sum+=dp[i][m-1];
		}
		ans=min(ans,sum);
		for(int i=k;i<n;i++){
			sum+=dp[i][m-1];
			sum-=dp[i-k][m-1];
			ans=min(ans,sum);
		}
	    cout<<ans<<endl;
	}
    
}
