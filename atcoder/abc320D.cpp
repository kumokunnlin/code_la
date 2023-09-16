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
#define pii pair<ll,ll>
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
vector<pair<int,pii>> gra[200001];
int main(){
	int n,m;cin>>n>>m;
	pii arr[n];
	for(int i=0;i<n;i++)arr[i]=mp(-1,-1);
	int vis[n];
	for(int i=0;i<n;i++)vis[i]=0;
	arr[0]=mp(0,0);
	while(m--){
		int a,b,c,d;cin>>a>>b>>c>>d;
		gra[a-1].pb(mp(b-1,mp(c,d)));
		gra[b-1].pb(mp(a-1,mp(-c,-d)));
	}
	queue<int> q;
	q.push(0);
	while(q.size()){
		int fir=q.front();
		q.pop();
		vis[fir]=1;
		for(auto i:gra[fir]){
			if(vis[i.F]==0){
				arr[i.F]=mp(arr[fir].F+i.S.F,arr[fir].S+i.S.S);
				q.push(i.F);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]==mp((ll)-1,(ll)-1))cout<<"undecidable\n";
		else cout<<arr[i].F<<" "<<arr[i].S<<endl;
	}
	return 0;
}
