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
ll bit1[400001]={},bit2[400001]={};
void insert1(int a,ll b){
	for(int i=a;i<400001;i+=i&(-i)){
		bit1[i]+=b;
	}
}
ll query1(int a){
	ll sum=0;
	for(int i=a;i>0;i-=i&(-i)){
		sum+=bit1[i];
	}
	return sum;
}

void insert2(int a,ll b){
	for(int i=a;i<400001;i+=i&(-i)){
		bit2[i]+=1;
	}
}
ll query2(int a){
	ll sum=0;
	for(int i=a;i>0;i-=i&(-i)){
		sum+=bit2[i];
	}
	return sum;
}
int main(){
	int n;cin>>n;
	vector<pair<ll,ll>> arr;
	
	for(int i=1;i<=n;i++){
		ll tmp;cin>>tmp;
		arr.pb(mp(tmp,(ll)i));
	}
	sort(arr.begin(),arr.end());
	ll ans=0;
	for(int i=0;i<(int)arr.size();i++){
		ans+=query2(arr[i].S)*arr[i].F-query1(arr[i].S);
		insert1(arr[i].S,arr[i].F);
		insert2(arr[i].S,arr[i].F);
	}
	cout<<ans<<endl;
    return 0;
}

