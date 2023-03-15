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
	int n,w,c;cin>>n>>w>>c;
	pair<int,pair<int,ll>> arr[n+1];
	for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S.F>>arr[i].S.S;
	arr[n]=mp(w,mp(w,0));
	sort(arr,arr+n);
	priority_queue<pair<int,ll>,vector<pair<int,ll>>,greater<pair<int,ll>>> pq;
	ll ans=1e18,sum=0;
	for(int i=0;i<=n;i++){
		while(pq.size()&&pq.top().F<=arr[i].F-c)sum-=pq.top().S,pq.pop();
		if(arr[i].F>=c)ans=min(ans,sum);
		while(i<n&&arr[i].F==arr[i+1].F){
			pq.push(arr[i].S);sum+=arr[i].S.S;
			i++;
		}
		pq.push(arr[i].S);sum+=arr[i].S.S;
	}
	cout<<ans<<endl;
	return 0 ;
} 
