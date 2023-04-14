#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a,b;
	cin>>a>>b;
	int size=min(a.size(),b.size());
	int index=size;
	while(1){
		int f=0;
		for(int i=0;i<index;i++){
			if(a[i]!=b[b.size()+i-index])f=1;
		}
		if(!f){
			cout<<index<<endl;
			break;
		}
		index--;
		if(index<1){
			cout<<0<<endl;
			break;
		}
	}
}
