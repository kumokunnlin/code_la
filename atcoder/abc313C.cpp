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
	int n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	ll sum=0,a=0,b=0;
	for(int i=0;i<n;i++)sum+=arr[i];
	if(sum%n==0){
		for(int i=0;i<n;i++){
			if(arr[i]>sum/n)a+=arr[i]-sum/n;
			else b+=sum/n-arr[i];
		}
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>sum/n+1)a+=arr[i]-sum/n-1;
			else if(arr[i]<sum/n)b+=sum/n-arr[i];
		}
	}
	cout<<max(a,b);
	return 0;
}


