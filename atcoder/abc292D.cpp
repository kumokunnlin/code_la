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
pair<int,pii> dsu[200001];
int find(int a){
	if(dsu[a].F!=a){
		dsu[a].F=find(dsu[a].F);
		return dsu[a].F;
	}else return a;
}
void unnion(int a,int b){
	if(find(a)<find(b))swap(a,b);
	dsu[find(a)].S.F+=dsu[find(b)].S.F;
	dsu[find(a)].S.S+=dsu[find(b)].S.S+1;
	dsu[find(b)].F=find(a);
	return ;
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)dsu[i].F=i,dsu[i].S=mp(1,0);
	int flag=1;
	while(m--){
		int a,b;cin>>a>>b;
		if(find(a)==find(b))dsu[find(a)].S.S++;
		else {
			unnion(a,b);
		}
	}
	for(int i=1;i<=n;i++){
		if(dsu[find(i)].S.F!=dsu[find(i)].S.S)flag=0;
	}
	if(flag)cout<<"Yes\n";
	else cout<<"No\n";
    return 0;
}
