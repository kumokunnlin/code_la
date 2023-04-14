#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int l,w;
	cin>>l>>w;
	while(l!=0){
		int arr[2][5001],ma=0;
		for(int i=0;i<2;i++){
			for(int j=0;j<w+1;j++){
				arr[i][j]=0;
			}
		}
		for(int i=1;i<=l;i++){
			for(int j=1;j<=w;j++){
				cin>>arr[i%2][j];
				if(arr[i%2][j]==1){
					arr[i%2][j]=0;
				}
				if(arr[i%2][j]==0){
					int a;
					a=min(min(arr[i%2][j-1],arr[(i-1)%2][j-1]),arr[(i-1)%2][j]);
					if(a>=1){
						arr[i%2][j]=a+1;
						if(arr[i%2][j]>ma){
								ma=arr[i%2][j];
						}
					}else{
						arr[i%2][j]=1;
						if(arr[i%2][j]>ma){
							ma=arr[i%2][j];
						}
					}
				}else{
					arr[i%2][j]=0;
				}
			}
		}
		ma*=ma;
		cout<<ma<<endl;
		cin>>l>>w;
	}
	return 0;
} 
