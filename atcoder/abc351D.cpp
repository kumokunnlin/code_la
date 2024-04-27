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
char arr[1001][1001];int n,m;
int visited[1001][1001]={};
int check(int a,int b){
	int flag=1;
	if(a>0){
		if(arr[a-1][b]=='#')flag=0;
	}
	if(a<n-1){
		if(arr[a+1][b]=='#')flag=0;
	}
	if(b>0){
		if(arr[a][b-1]=='#')flag=0;
	}
	if(b<m-1){
		if(arr[a][b+1]=='#')flag=0;
	}
	return flag;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j]==0&&arr[i][j]!='#'){
				map<pii,int> ma;
				queue<pii> q;
				q.push(mp(i,j));
				while(q.size()){
					int a=q.front().F,b=q.front().S;
					ma[mp(a,b)]=1;
					q.pop();
					if(check(a,b)==1){
						visited[i][j]=1;
						if(a>0){
							if(arr[a-1][b]!='#'){
								if(check(a-1,b)==1&&visited[a-1][b]==0){
									q.push(mp(a-1,b));
									visited[a-1][b]=1;
								}else if(visited[a-1][b]==0){
									ma[mp(a-1,b)]=1;
								}
							}
						}
						if(a<n-1){
							if(arr[a+1][b]!='#'){
								if(check(a+1,b)==1&&visited[a+1][b]==0){
									q.push(mp(a+1,b));
									visited[a+1][b]=1;
								}else if(visited[a+1][b]==0){
									ma[mp(a+1,b)]=1;
								}
							}
						}
						if(b>0){
							if(arr[a][b-1]!='#'){
								if(check(a,b-1)==1&&visited[a][b-1]==0){
									q.push(mp(a,b-1));
									visited[a][b-1]=1;
								}else if(visited[a][b-1]==0){
									ma[mp(a,b-1)]=1;
								}
							}
						}
						if(b<m-1){
							if(arr[a][b+1]!='#'){
								if(check(a,b+1)==1&&visited[a][b+1]==0){
									q.push(mp(a,b+1));
									visited[a][b+1]=1;
								}else if(visited[a][b+1]==0){
									ma[mp(a,b+1)]=1;
								}
							}
						}
					}
				}
				ans=max(ans,(int)ma.size());
			}
		}
	}
	cout<<ans<<endl;
    return 0;
}

