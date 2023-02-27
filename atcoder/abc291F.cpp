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
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
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
//jikuaiOrz
vector<int> gra[MAXN],graa[MAXN];
int main(){
	int n,m;cin>>n>>m;
	string arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='1')gra[i].pb(i+j+1),graa[i+j+1].pb(i);
		}
	}
	int dis[n+1],diss[n+1];
	for(int i=1;i<=n;i++)dis[i]=1e8,diss[i]=1e8;
	dis[1]=0;diss[n]=0;
	priority_queue<pii,vector<pii>,greater<pii>> pq;
	pq.push(mp(0,1));
	while(pq.size()){
		auto top=pq.top();pq.pop();
		if(dis[top.S]!=top.F)continue;
		for(auto i:gra[top.S]){
			if(dis[i]>top.F+1)dis[i]=top.F+1,pq.push(mp(dis[i],i));
		}
	}
	pq.push(mp(0,n));
	while(pq.size()){
		auto top=pq.top();pq.pop();
		if(diss[top.S]!=top.F)continue;
		for(auto i:graa[top.S]){
			if(diss[i]>top.F+1)diss[i]=top.F+1,pq.push(mp(diss[i],i));
		}
	}
	vector<int> ans;
	for(int i=2;i<n;i++){
		int anss=1e8;
		for(int j=max(i-m+1,1);j<i;j++){
			for(int k=0;k<m;k++){
				if(arr[j][k]=='1'&&j+k+1>i)anss=min(anss,dis[j]+1+diss[j+k+1]);
			}
		}
		if(anss==1e8)ans.pb(-1);
		else ans.pb(anss);
	}
	
	cout<<ans[0];
	for(int i=1;i<ans.size();i++)cout<<" "<<ans[i];
	cout<<endl;
    return 0;
}
