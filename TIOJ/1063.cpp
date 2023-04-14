#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n;
	cin>>m>>n;
	int arr[n],l[n],r[n],ans=0;
	for(int i=0;i<n;i++){
		l[i]=i;
		r[i]=i;
		arr[i]=0;
	}
	for(int i=0;i<m;i++){
		int tmp;
		for(int j=0;j<n;j++){
			cin>>tmp;
			if(tmp==1){
				arr[j]++;
			}else{
				arr[j]=0;
			}
		}
		for(int j=n-2;j>=0;j--){
			r[j]=j;
			while(r[j]+1<n&&arr[j]<=arr[r[j]+1]){
				r[j]=r[r[j]+1];
			}
		}
		for(int j=1;j<n;j++){
			l[j]=j;
			while(l[j]-1>=0&&arr[j]<=arr[l[j]-1]){
				l[j]=l[l[j]-1];
			}
			ans=max(ans,(r[j]-l[j]+1)*arr[j]);
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
