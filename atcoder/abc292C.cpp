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
ll mul[200001]={};
int main(){
	ll n;cin>>n;
	ll ans=0;
	mul[1]=1;
	for(int i=2;i<=n;i++){
		map<ll,ll> ma;
		int tmp=i;
		while(tmp%2==0)tmp/=2,ma[2]++;
		for(int j=3;j*j<=tmp;j++){
			while(tmp%j==0)ma[j]++,tmp/=j;
		}
		if(tmp!=1)ma[tmp]++;
		mul[i]=1;
		for(auto j:ma){
			mul[i]*=(j.S+1);
		}
	}
	for(int i=1;i<n;i++){
		ans+=mul[i]*mul[n-i];
	}
	cout<<ans<<endl;
    return 0;
}
