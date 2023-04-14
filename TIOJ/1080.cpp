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
#define MAXN 100001
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//FoodSheepOrz
//ck_platypusOrz
typedef struct BIT{
	ll n,arr[MAXN];
	void init(ll _n){
		n=_n;
		for(ll i=0;i<=n;i++)arr[i]=0;
	}
	void modi(ll pos,ll val){
		for(ll i=pos;i<=n;i+=(i&-i)){
			arr[i]+=val;
		}
	}
	int query(ll pos){
		ll ans=0;
		for(ll i=pos;i>0;i-=(i&-i)){
			ans+=arr[i];
		}
		return ans;
	}
} BIT;
int main(){
	int n,cnt=1;
	cin>>n;
	while(n!=0){
		ll arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		set<ll> s;
		map<ll,ll> m;
		for(int i=0;i<n;i++){
			s.insert(arr[i]);
		}
		ll count=1;
		for(auto i=s.begin();i!=s.end();i++){
			m[*i]=count;
			count++;
		}
		BIT bit;
		bit.init(n);
		ll ans=0;
		for(int i=0;i<n;i++){
			ans+=i-bit.query(m[arr[i]]);
			bit.modi(m[arr[i]],1);
		}
		cout<<"Case #"<<cnt<<": ";
		cnt++;
		cout<<ans<<endl;
		cin>>n;
	}
	return 0;
} 

