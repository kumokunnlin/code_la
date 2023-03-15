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

int main(){
	int n;cin>>n;
	int arr[n+1],brr[n+1],minb=1e9,minc=1e9,b=0,c=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(i%2==1)minb=min(minb,arr[i]);
		minc=min(minc,arr[i]);
		brr[i]=0;
	}
	int q;cin>>q;
	while(q--){
		int ty;cin>>ty;
		if(ty==1){
			int x,a;cin>>x>>a;
			if(x%2==1){
				if(arr[x]-brr[x]-b-c>=a)brr[x]+=a;
			}else{
				if(arr[x]-brr[x]-c>=a)brr[x]+=a;
			}
			if(x%2==1){
				minb=min(minb,max(arr[x]-brr[x]-b-c,0));
				minc=min(minc,max(arr[x]-brr[x]-b-c,0));
			}
			minc=min(minc,max(arr[x]-brr[x]-c,0));
		}else if(ty==2){
			int a;cin>>a;
			if(minb>=a)b+=a,minc=min(minc,minb-a),minb=minb-a;
		}else {
			int a;cin>>a;
			if(minc>=a)c+=a,minc=minc-a,minb-=a;
		}
	}
	ll ans=0;
	for(int i=1;i<=n;i++){
		if(i%2==1){
			ans+=min(arr[i],brr[i]+b+c);
		}else {
			ans+=min(arr[i],brr[i]+c);
		}
	}
	cout<<ans<<endl;
	return 0 ;
} 
