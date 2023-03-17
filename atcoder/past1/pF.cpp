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

int main(){
	vector<string> ans;
	string s,ss;
	cin>>s;
	int tmp=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z')tmp++,ss+=s[i]-'A'+'a';
		else ss+=s[i];
		if(tmp==2){
			tmp=0;
			ans.pb(ss);
			ss="";
		}
	}
	sort(ans.begin(),ans.end());
	for(auto i:ans){
		cout<<(char)(i[0]+'A'-'a');
		for(int j=1;j<i.size()-1;j++){
			cout<<i[j];
		}
		cout<<(char)(i[i.size()-1]+'A'-'a');
	}
	cout<<endl;
	return 0 ;
} 
