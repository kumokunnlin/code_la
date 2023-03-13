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
//jikuaiOrz
int follow[501][501]={};
int main(){
	int n,q;cin>>n>>q;
	int type;
	while(q--){
		cin>>type;
		if(type==1){
			int a,b;cin>>a>>b;
			follow[a][b]=1;
		}else if(type==2){
			int a;cin>>a;
			for(int i=1;i<=n;i++){
				if(follow[i][a]==1)follow[a][i]=1;
			}
		}else{
			int a;cin>>a;		
			queue<pii> que;
			for(int i=1;i<=n;i++){
				if(follow[a][i]){
					for(int j=1;j<=n;j++){
						if(follow[i][j]==1&&a!=j)que.push(mp(a,j));
					}
				}
			}
			while(que.size()){
				follow[que.front().F][que.front().S]=1;
				que.pop();
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(follow[i][j]==1)cout<<'Y';
			else cout<<'N';
		}cout<<endl;
	}
	
	return 0 ;
} 
