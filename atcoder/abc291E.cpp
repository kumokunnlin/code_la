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
vector<int> gra[MAXN];
int deg[MAXN]={};
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		deg[b]++;
	}
	queue<int> q;
	for(int i=1;i<=n;i++)if(deg[i]==0)q.push(i);
	if(q.size()!=1){
		cout<<"No\n";
		return 0;
	}
	int ans[n+1];
	ans[q.front()]=1;
	while(q.size()){
		int fro=q.front();
		q.pop();
		for(auto i:gra[fro]){
			deg[i]--;
			ans[i]=ans[fro]+1;
			if(ans[i]>n){
				cout<<"No\n";
				return 0;
			}
			if(deg[i]==0)q.push(i);
		}
	}
	int flag=1;
	for(int i=1;i<=n;i++){
		if(ans[i]==n)flag=0;
	}
	if(flag){
		cout<<"No\n";
		return 0;
	}
	cout<<"Yes\n";
	cout<<ans[1];
	for(int i=2;i<=n;i++)cout<<" "<<ans[i];cout<<endl;
    return 0;
}
