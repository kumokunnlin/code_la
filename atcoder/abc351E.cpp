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

int cmp(pii a,pii b){
	if(a.S!=b.S)return a.S<b.S;
	else return a.S<b.F;
}
int main(){
	int n;cin>>n;
	vector<pair<ll,ll>> odd,even;
	for(int i=0;i<n;i++){
		ll aa,bb;cin>>aa>>bb;
		ll a=(aa+bb),b=(aa-bb);
		if((aa+bb)%2==0){
			even.pb(mp(a,b));
		}else odd.pb(mp(a,b));
	}
	ll ans=0,sum=0;
	sort(odd.begin(),odd.end());
	sort(even.begin(),even.end());
	for(int i=0;i<(int)odd.size();i++){
		ans+=odd[i].F*(ll)i-sum;
		sum+=odd[i].F;
	}
	sum=0;
	for(int i=0;i<(int)even.size();i++){
		ans+=even[i].F*(ll)i-sum;
		sum+=even[i].F;
	}
	sum=0;
	sort(odd.begin(),odd.end(),cmp);
	sort(even.begin(),even.end(),cmp);
	for(int i=0;i<(int)odd.size();i++){
		ans+=odd[i].S*(ll)i-sum;
		sum+=odd[i].S;
	}
	sum=0;
	for(int i=0;i<(int)even.size();i++){
		ans+=even[i].S*(ll)i-sum;
		sum+=even[i].S;
	}
	cout<<ans/2<<endl;
    return 0;
}

