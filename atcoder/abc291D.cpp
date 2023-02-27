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
int main(){
	int n;cin>>n;
	pii arr[n];
	for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
	int times=n,flag=1;
	for(int i=0;i<n-1;i++)if(arr[i].F==arr[i].S&&arr[i+1].F==arr[i+1].S&&arr[i].F==arr[i+1].F)flag=0;
	if(flag==0){
		cout<<0<<endl;
		return 0;
	}
	ll ans1=1,ans2=1;
	for(int i=1;i<n;i++){
		ll a=0,b=0;
		if(arr[i].F!=arr[i-1].F)a=(a+ans1)%998244353;
		if(arr[i].F!=arr[i-1].S)a=(a+ans2)%998244353;
		if(arr[i].S!=arr[i-1].F)b=(b+ans1)%998244353;
		if(arr[i].S!=arr[i-1].S)b=(b+ans2)%998244353;
		ans1=a,ans2=b;
	}
	cout<<(ans1+ans2)%998244353;
    return 0;
}
