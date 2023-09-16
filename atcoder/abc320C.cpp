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
	int n;cin>>n;
	string s[3];cin>>s[0]>>s[1]>>s[2];
	vector<int> arr;
	int ans=1e8;
	for(int i=0;i<=9;i++){
		arr.clear();
		for(int j=0;j<3;j++)arr.pb(j);
		do{
			int t=0,flag=1;
			while(s[arr[0]][(t%n)]-'0'!=i){
				t++;
				if(t>1e4){
					flag=0;
					break;
				}
			}
			t++;
			while(s[arr[1]][(t%n)]-'0'!=i){
				t++;
				if(t>1e5){
					flag=0;
					break;
				}
			}
			t++;
			while(s[arr[2]][(t%n)]-'0'!=i){
				t++;
				if(t>1e5){
					flag=0;
					break;
				}
			}
			if(flag)ans=min(ans,t);
		}while(next_permutation(arr.begin(),arr.end()));
	}
	
	if(ans!=1e8)cout<<ans<<endl;
	else cout<<-1<<endl;
	return 0;
}
