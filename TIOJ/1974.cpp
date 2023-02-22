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
#define pq priority_queue
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000001
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
vector<int> edg[MAXN];
int n,ans=MAXN,siz[MAXN]={};
void dfs(int pos,int pre){
	int oao=0;
	siz[pos]=1;
	for(auto i:edg[pos]){
		if(i!=pre){
			dfs(i,pos);
			oao=max(oao,siz[i]);
			siz[pos]+=siz[i];
		}
	}
	oao=max(oao,n-siz[pos]);
	ans=min(ans,oao);
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		edg[a].pb(b);edg[b].pb(a);
	}
	dfs(1,-1);
	cout<<ans<<endl;
	return 0;
}



