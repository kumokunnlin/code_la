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
	int n,k;cin>>n>>k;
	int arr[n],brr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)cin>>brr[i];
	int ans=0;
	for(int i=0;i<n-k+1;i++){
		while(arr[i]!=brr[i]){
			ans++;
			for(int j=i;j<min(i+k,n);j++){
				arr[j]=(arr[j])%9+1;
			}
		}
	}
	int flag=1;
	for(int i=n-k+1;i<n;i++){
		if(arr[i]!=brr[i])flag=0;
	}
	if(flag)cout<<ans<<endl;
	else cout<<0<<endl;
	return 0;
}
