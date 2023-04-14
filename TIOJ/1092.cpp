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
#define MAXN 100000
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
int vis[10001]={},qq[100001]={};
vector<int> ve[10001];
void qqq();
int bfs(int);

int main(){
	int n,e;
	cin>>n>>e;
	while(n!=0){
		int ans,re=1;
		string s;
		while(e--){
			int a,b;
			cin>>a>>b;
			ve[a].pb(b);
		}cin>>s;
		vis[n]=1;
		qq[n]=1;
		ans=!bfs(1);
		if(n==1)ans=1;
		if(ans==1){
			cout<<s<<"\n";
		}else{
			if(s=="Mimi"){
				cout<<"Moumou\n";
			}else cout<<"Mimi\n";
		}
		cin>>n>>e;
		qqq();
	}
	return 0;
}
void qqq(){
	for(int i=0;i<=10000;i++){
		vis[i]=0;
		qq[i]=0;
		ve[i].clear();
	}
}
int bfs(int a){
	if(!vis[a]){
		int ans=1;
		for(auto i:ve[a]){
			ans&=bfs(i);
		}
		vis[a]=1;
		qq[a]=ans;
	}
	return !qq[a];
}
