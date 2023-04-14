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
#define pq priority_queue
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100000
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
set<string> sa,sb,sc;
int sum=0;
int check(string s){
	if(s[0]=='O'&&s[1]=='O'&&s[2]=='O'
	||s[3]=='O'&&s[4]=='O'&&s[5]=='O'
	||s[6]=='O'&&s[7]=='O'&&s[8]=='O'
	||s[0]=='O'&&s[3]=='O'&&s[6]=='O'
	||s[1]=='O'&&s[4]=='O'&&s[7]=='O'
	||s[2]=='O'&&s[5]=='O'&&s[8]=='O'
	||s[0]=='O'&&s[4]=='O'&&s[8]=='O'
	||s[2]=='O'&&s[4]=='O'&&s[6]=='O'
	){
		sa.insert(s);
		return 0;
	}else if(s[0]=='X'&&s[1]=='X'&&s[2]=='X'
	||s[3]=='X'&&s[4]=='X'&&s[5]=='X'
	||s[6]=='X'&&s[7]=='X'&&s[8]=='X'
	||s[0]=='X'&&s[3]=='X'&&s[6]=='X'
	||s[1]=='X'&&s[4]=='X'&&s[7]=='X'
	||s[2]=='X'&&s[5]=='X'&&s[8]=='X'
	||s[0]=='X'&&s[4]=='X'&&s[8]=='X'
	||s[2]=='X'&&s[4]=='X'&&s[6]=='X'
	){
		sb.insert(s);
		return 0;
	}else{
		int flag=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='-')flag=0;
		}
		if(flag){
			sc.insert(s);
			return 0;
		}else{
			return 1;
		}
	}
}
void QQ(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]=='-'){
			if(sum%2==0){
				s[i]='O';
				sum++;
				if(check(s))QQ(s);
			}else{
				s[i]='X';
				sum++;
				if(check(s))QQ(s);
			}
			sum--;
			s[i]='-';
		}
	}
}

int main(){
	string s;
	cin>>s;
	for(int i=0;i<9;i++)if(s[i]!='-')sum++;
	if(check(s))QQ(s);
	cout<<sa.size()+sb.size()+sc.size()<<" "<<sa.size()<<" "<<sb.size()<<" "<<sc.size()<<endl;
	return 0;
}


