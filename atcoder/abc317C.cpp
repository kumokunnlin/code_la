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
	int n,m;cin>>n>>m;
	ll arr[n][n];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)arr[i][j]=1e18;
	for(int i=0;i<n;i++)arr[i][i]=0;
	while(m--){
		ll a,b,c;cin>>a>>b>>c;
		arr[a-1][b-1]=c;
		arr[b-1][a-1]=c;
	}
	ll ans=0;
	int brr[n];
	for(int i=0;i<n;i++)brr[i]=i;
	while(1){
		ll sum=0;
		for(int i=0;i<n-1;i++){
			if(arr[brr[i]][brr[i+1]]==1e18)ans=max(ans,sum),sum=0;
			else{
				sum+=arr[brr[i]][brr[i+1]];
			}
		}
		ans=max(ans,sum);
		if(next_permutation(brr,brr+n)==0)break;
	}
	cout<<ans<<endl;
	return 0;
}


