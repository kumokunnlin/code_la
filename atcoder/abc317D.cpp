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

int main(){
	int n;cin>>n;
	ll cnt=0,sum=0;
	vector<pair<ll,ll>> arr;
	for(int i=0;i<n;i++){
		ll x,y,z;cin>>x>>y>>z;
		if(x>y)cnt+=z;
		else{
			arr.pb(mp((x+y+1)/2-x,z));
		}
		sum+=z;
	}
	if(cnt>=(sum+1)/2){
		cout<<0<<endl;
		return 0;
	}
	ll ans=1e18;
	ll dp[sum+1];
	dp[cnt]=0;
	for(int i=cnt+1;i<=sum;i++)dp[i]=1e18;
	for(auto j:arr){
		for(int i=sum;i>cnt;i--){
			if(i-j.S>=cnt)dp[i]=min(dp[i],dp[i-j.S]+j.F);
		}
	}
	for(int i=(sum+1)/2;i<=sum;i++)ans=min(ans,dp[i]);
	cout<<ans<<endl;
	return 0;
}


