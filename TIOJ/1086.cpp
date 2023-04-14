#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int  arr[20];
	arr[1]=0;
	for(int i=2;i<20;i++){
		if(i%2==0){
			arr[i]=arr[i-1]*i+1;
		}else{
			arr[i]=arr[i-1]*i-1;
		}
	}
	int n;
	cin>>n;
	while(n!=0){
		cout<<arr[n]<<endl;
		cin>>n;
	}
}
