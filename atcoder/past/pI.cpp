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
#define MAXN 10001
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
	pair<int,ll> brr[m];
	ll dp[(1<<n)];
	for(int i=0;i<(1<<n);i++)dp[i]=1e18;
	for(int i=0;i<m;i++){
		string s;ll tmp;cin>>s>>tmp;
		brr[i].F=0;brr[i].S=tmp;
		for(int j=0;j<n;j++){
			brr[i].F*=2;
			if(s[j]=='Y')brr[i].F++;
		}
	}
	dp[0]=0;
	for(int i=0;i<m;i++){
		for(int j=(1<<n)-1;j>=0;j--){
			dp[(j|brr[i].F)]=min(dp[(j|brr[i].F)],dp[j]+brr[i].S);
		}
	}
	if(dp[(1<<n)-1]!=1e18)cout<<dp[(1<<n)-1]<<endl;
	else cout<<-1<<endl;
	return 0 ;
} 
