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
int cmp(pair<ll,ll> a,pair<ll,ll> b){
	if(a.F==b.F){
		a.S>b.S;
	}else return a.F<b.F;
}
int main(){
	int n;cin>>n;
	pair<ll,ll> arr[n];for(int i=0;i<n;i++){
		ll a,b,c;cin>>a>>b>>c;
		arr[i].F=a*a+b*b;
		arr[i].S=c;
	}sort(arr,arr+n,cmp);
	ll mi=arr[n-1].S;
	ll ans=0;
	for(int i=n-1;i>=0;i--){
		ans=max(ans,arr[i].S-mi);
		mi=min(mi,arr[i].S);
	}
	cout<<ans<<endl;
	return 0;
}



