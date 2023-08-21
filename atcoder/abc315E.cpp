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
vector<int> gra[MAXN];
int yome[MAXN]={};
vector<int> ans;
void dfs(int pos){
	yome[pos]=1;
	
	for(auto i:gra[pos]){
		if(yome[i]==0){
			dfs(i);
		}
	}
	ans.pb(pos);
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		int c;cin>>c;
		while(c--){
			int tmp;cin>>tmp;
			gra[i].pb(tmp);
		}
	}
	dfs(1);
	cout<<ans[0];
	for(int i=1;i<ans.size()-1;i++){
		cout<<" "<<ans[i];
	}cout<<endl;
	return 0;
} 
