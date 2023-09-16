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
	ll ans[n];
	for(int i=0;i<n;i++)ans[i]=0;
	ll t[m],w[m],s[m];
	for(int i=0;i<m;i++){
		cin>>t[i]>>w[i]>>s[i];
	}
	priority_queue<int,vector<int>,greater<int>> q;
	for(int i=0;i<n;i++)q.push(i);
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	for(int i=0;i<m;i++){
		while(pq.size()>0&&pq.top().F<=t[i])q.push(pq.top().S),pq.pop();
		if(q.size()){
			ans[q.top()]+=w[i];
			pq.push(mp(t[i]+s[i],q.top()));
			q.pop();
		}
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<endl;
	return 0;
}
