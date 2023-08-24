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
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int ans=1;
		for(int i=0;i<s.size();i++){
			for(int j=1;i-j>=0&&i+j<s.size();j++){
				if(s[i-j]!=s[i+j]){
					ans=max(ans,1+(j-1)*2);
					break;
				}
				if(s[i-j]==s[i+j]&&(i+j==s.size()-1||i-j==0))ans=max(ans,1+j*2);
			}
			for(int j=1;i-j+1>=0&&i+j<s.size();j++){
				if(s[i-j+1]!=s[i+j]){
					ans=max(ans,(j-1)*2);
					break;
				}
				if(s[i-j+1]==s[i+j]&&(i+j==s.size()-1||i-j-1==0))ans=max(ans,j*2);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

