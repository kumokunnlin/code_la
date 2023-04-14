
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
#define MAXN 10000
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
int main(){
	int d;
	cin>>d;
	int logg=0;
	while(d>=(1<<logg))logg++;
	char arr[logg];
	for(int i=0;i<logg;i++){
		if(d&(1<<i)){
			arr[i]='+';
		}else{
			arr[i]='-';
		}
	}
	for(int i=0;i<logg;i++){
		if(arr[i]=='+'&arr[i+1]=='-'){
			arr[i]='-';arr[i+1]='+';
		}
	}
	cout<<logg<<endl;
	for(int i=0;i<logg;i++){
		cout<<arr[i];
	}
	cout<<endl;
	return 0;
} 
