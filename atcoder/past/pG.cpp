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
	int n;cin>>n;
	int arr[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++)cin>>arr[i][j],arr[j][i]=arr[i][j];
	}
	int ma=(1<<n);
	ll ans=-1e18;
	for(int i=0;i<ma;i++){
		for(int j=0;j<ma;j++){
			vector<int> a,b,c;
			if(i&j!=0)continue;
			for(int k=0;k<n;k++){
				if((1<<k)&i)a.pb(k+1);
				else if((1<<k)&j)b.pb(k+1);
				else c.pb(k+1);
			}
			ll sum=0;
			for(int k=0;k<a.size();k++){
				for(int l=k+1;l<a.size();l++)sum+=arr[a[k]][a[l]];
			}
			for(int k=0;k<b.size();k++){
				for(int l=k+1;l<b.size();l++)sum+=arr[b[k]][b[l]];
			}
			for(int k=0;k<c.size();k++){
				for(int l=k+1;l<c.size();l++)sum+=arr[c[k]][c[l]];
			}
			ans=max(ans,sum);
		}
	}cout<<ans<<endl;
	return 0 ;
} 
