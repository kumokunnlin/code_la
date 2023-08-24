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
		Orz
		int h,w;cin>>h>>w;
		int ans=h*w;
		string arr[h];
		queue<pii> q;
		for(int i=0;i<h;i++)cin>>arr[i];
		int gyo[h][26],retsu[w][26];
		for(int i=0;i<h;i++)for(int j=0;j<26;j++)gyo[i][j]=0;
		for(int i=0;i<w;i++)for(int j=0;j<26;j++)retsu[i][j]=0;
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)gyo[i][arr[i][j]-'a']++; 
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)retsu[j][arr[i][j]-'a']++; 
		while(1){
			int flag=0;
			for(int i=0;i<h;i++){
				int cnt=0,ma=0;
				for(int j=0;j<26;j++){
					if(gyo[i][j]>0)cnt++,ma=max(ma,gyo[i][j]);
				}
				if(cnt==1&&ma>=2){
					for(int k=0;k<w;k++){
						if(arr[i][k]>='a'&&arr[i][k]<='z')q.push(mp(i,k));
					}
				}
			}
			for(int i=0;i<w;i++){
				int cnt=0,ma=0;
				for(int j=0;j<26;j++){
					if(retsu[i][j]>0)cnt++,ma=max(ma,retsu[i][j]);
				}
				if(cnt==1&&ma>=2){
					for(int k=0;k<h;k++){
						if(arr[k][i]>='a'&&arr[k][i]<='z')q.push(mp(k,i));
					}
				}
			}
			while(q.size()){
				int i=q.front().F,j=q.front().S;q.pop();
				if(arr[i][j]=='0')continue;
				flag=1;
				gyo[i][arr[i][j]-'a']--;
				retsu[j][arr[i][j]-'a']--;
				arr[i][j]='0';
				ans--;
			}
			if(flag==0)break;
		}
		cout<<ans<<endl;
		return 0;
	}
	

