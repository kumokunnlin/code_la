#include<bits/stdc++.h>
#include <cstdio>
#define pb push_back
#define mp make_pair
#define F first
#define S second 
#define pq priority_queue
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//SheepRangerOrz
//ck_platypusOrz

int gcd(int a,int b){
	if(a<b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	if(a%b==0)return b;
	else return gcd(b,a%b);
}
int main(){
	int  n;
	cin>>n;
	while(n!=0){
		int ana=0,arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(gcd(arr[i],arr[j])==1)ana++;
		ana/=2;
		if(ana==0)cout<<"No estimate for this data set.\n";
		else{
			n=(n-1)*n/2;
			printf("%.6f\n",(float)sqrt((n* 6.0/ana)));
		}
		cin>>n;
	}
	return 0;
} 
