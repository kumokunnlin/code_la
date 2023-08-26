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
	int h,w;cin>>h>>w;
	char arr[h][w];
	int a=0,b=0,c=0,d=0;
	queue<pii> q;
	for(int i=0;i<h;i++)for(int j=0;j<w;j++){
		cin>>arr[i][j];
		if(arr[i][j]=='S')a=i,b=j,arr[i][j]='.';
		else if(arr[i][j]=='G')c=i,d=j,arr[i][j]='.';
		else if(arr[i][j]!='#'&&arr[i][j]!='.')q.push(mp(i,j));
	}
	while(q.size()){
		int i=q.front().F,j=q.front().S;
		q.pop();
		if(arr[i][j]=='>'){
			while((arr[i][j+1]=='.'||arr[i][j+1]=='!')&&j+1<w){
				arr[i][j+1]='!';
				j++;
			}
		}else if(arr[i][j]=='<'){
			while((arr[i][j-1]=='.'||arr[i][j-1]=='!')&&j-1>=0){
				arr[i][j-1]='!';
				j--;
			}
		}else if(arr[i][j]=='v'){
			while((arr[i+1][j]=='.'||arr[i+1][j]=='!')&&i+1<h){
				arr[i+1][j]='!';
				i++;
			}
		}else if(arr[i][j]=='^'){
			while((arr[i-1][j]=='.'||arr[i-1][j]=='!')&&i-1>=0){
				arr[i-1][j]='!';
				i--;
			}
		}
	}
//	for(int i=0;i<h;i++){
//		for(int j=0;j<w;j++)cout<<arr[i][j];
//		cout<<endl;
//	}
	int dis[h][w];
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			dis[i][j]=1e9;
		}
	}
	vector<pii> vec;
	vec.pb(mp(1,0));
	vec.pb(mp(0,1));
	vec.pb(mp(-1,0));
	vec.pb(mp(0,-1));
	dis[a][b]=0;
	q.push(mp(a,b));
	while(q.size()){
		int aa=q.front().F,bb=q.front().S;
		q.pop();
		for(auto i:vec){
			if(aa+i.F>=0&&aa+i.F<h&&bb+i.S>=0&&bb+i.S<w)if(arr[aa+i.F][bb+i.S]=='.'){
				if(dis[aa+i.F][bb+i.S]==1e9)dis[aa+i.F][bb+i.S]=dis[aa][bb]+1,q.push(mp(aa+i.F,bb+i.S));
			}
		}
	}
	if(dis[c][d]!=1e9)cout<<dis[c][d]<<endl;
	else cout<<-1<<endl;
	return 0;
}


