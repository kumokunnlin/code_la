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
	string s;cin>>s;
	int siz=s.size(),ans=1;
	for(int i=0;i<siz;i++){
		int sum=0;
		for(int j=0;i-j>=0&&i+1+j<siz;j++){
			if(s[i-j]==s[i+1+j])sum+=2;
			else break;
		}
		ans=max(ans,sum);
	}
	for(int i=0;i<siz;i++){
		int sum=1;
		for(int j=0;i-j-1>=0&&i+1+j<siz;j++){
			if(s[i-1-j]==s[i+1+j])sum+=2;
			else break;
		}
		ans=max(ans,sum);
	}
	cout<<ans<<endl;
	return 0;
}
