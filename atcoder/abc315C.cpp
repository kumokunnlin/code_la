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
	int n;cin>>n;
	vector<ll> ice[n+1];
	priority_queue<ll,vector<ll>,greater<ll>> pq;ll ans=0;
	for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		ice[a].pb(b);
	}
	
	for(int i=1;i<=n;i++){
		if(ice[i].size()>=1)sort(ice[i].begin(),ice[i].end());
		if(ice[i].size()>=2){
			ans=max(ans,ice[i][ice[i].size()-1]+ice[i][ice[i].size()-2]/2);
		}
		if(ice[i].size()>=1)pq.push(ice[i][ice[i].size()-1]);
		if(pq.size()>2)pq.pop();
	}
	ll sum=0;
	while(pq.size()){
		sum+=pq.top();
		pq.pop();
	}
	ans=max(ans,sum);
	cout<<ans<<endl;
	return 0;
} 
