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
int spa[150001][19]={},deg[150001]={};
vector<int> gra[150001];
void dfs(int v,int pre){
	for(auto i:gra[v]){
		if(i!=pre){
			deg[i]=deg[v]+1;
			dfs(i,v);
		}
	}
}
int lca(int a,int b){
	if(deg[a]<deg[b])swap(a,b);
	int gap=deg[a]-deg[b];
	for(int i=0;i<=18;i++){
		
		if(((1<<i)&gap)!=0)a=spa[a][i];
	}
	if(a==b)return a;
	for(int i=18;i>=0;i--){
		if(spa[a][i]!=spa[b][i]){
			a=spa[a][i];
			b=spa[b][i];
		}
	}
	return spa[a][0];
}
int main(){
	int n;cin>>n;
	int root;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		spa[i][0]=a;
		if(a!=-1)gra[i].pb(a),gra[a].pb(i);
		else root=i,spa[i][0]=i;
	}
	deg[root]=0;
	dfs(root,-1);
	for(int i=1;i<=18;i++){
		for(int j=1;j<=n;j++){
			spa[j][i]=spa[spa[j][i-1]][i-1];
		}
	}
	int q;cin>>q;
	while(q--){
		int a,b;cin>>a>>b;
		if(lca(a,b)==b)cout<<"Yes\n";
		else cout<<"No\n";
	}
	
	return 0 ;
} 
