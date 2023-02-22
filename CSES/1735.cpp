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
//jikuaiOrz
typedef struct node{
	ll set,incr;
} node;
ll seg[MAXN*4],arr[MAXN];
node tag[MAXN*4];
void push(int cur,int l,int r){
	if(tag[cur].set!=0){
		tag[cur*2].set=tag[cur].set;
		tag[cur*2].incr=tag[cur].incr;
		tag[cur*2+1].set=tag[cur].set;
		tag[cur*2+1].incr=tag[cur].incr;
		tag[cur].set=0;tag[cur].incr=0;
	}else{
		tag[cur*2].incr+=tag[cur].incr;
		tag[cur*2+1].incr+=tag[cur].incr;
		tag[cur].incr=0;
	}
	return;
}
void pull(int cur,int l,int r){
	seg[cur]=0;
	int mid=(l+r)/2;
	if(tag[cur*2].set!=0)seg[cur]+=(tag[cur*2].set+tag[cur*2].incr)*(ll)(mid-l+1);
	else seg[cur]+=seg[cur*2]+tag[cur*2].incr*(ll)(mid-l+1);
	
	if(tag[cur*2+1].set!=0)seg[cur]+=(tag[cur*2+1].set+tag[cur*2+1].incr)*(ll)(r-mid);
	else seg[cur]+=seg[cur*2+1]+tag[cur*2+1].incr*(ll)(r-mid);
}
void build(int l,int r,int cur){
	if(l==r){
		seg[cur]=arr[l];
		return;
	}
	int mid=(l+r)/2;
	build(l,mid,cur*2);
	build(mid+1,r,cur*2+1);
	seg[cur]=seg[cur*2]+seg[cur*2+1];
}
void modi1(int l,int r,int cur,int ml,int mr,ll val){
	if(l>mr||r<ml)return ;
	if(l>=ml&&r<=mr){
		tag[cur].incr+=val;return;
	}
	push(cur,l,r);
	int mid=(l+r)/2;
	modi1(l,mid,cur*2,ml,mr,val);
	modi1(mid+1,r,cur*2+1,ml,mr,val);
	pull(cur,l,r);
}
void modi2(int l,int r,int cur,int ml,int mr,ll val){
	if(l>mr||r<ml)return ;
	if(l>=ml&&r<=mr){
		tag[cur].incr=0;
		tag[cur].set=val;return;
	}
	push(cur,l,r);
	int mid=(l+r)/2;
	modi2(l,mid,cur*2,ml,mr,val);
	modi2(mid+1,r,cur*2+1,ml,mr,val);
	pull(cur,l,r);
}
ll que(int l,int r,int cur,int ql,int qr){
	if(l>qr||r<ql)return 0;
	if(l>=ql&&r<=qr){
		if(tag[cur].set!=0)return (tag[cur].set+tag[cur].incr)*(r-l+1);
		else return seg[cur]+(r-l+1)*tag[cur].incr;
	}
	push(cur,l,r);
	pull(cur,l,r);
	int mid=(l+r)/2;
	return que(l,mid,cur*2,ql,qr)+que(mid+1,r,cur*2+1,ql,qr);
}
int main(){
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>arr[i];
	build(1,n,1);
	while(q--){
		int tmp,a,b;cin>>tmp>>a>>b;
		if(tmp==1){
			int val;cin>>val;
			modi1(1,n,1,a,b,val);
		}else if(tmp==2){
			int val;cin>>val;
			modi2(1,n,1,a,b,val);
		}else cout<<que(1,n,1,a,b)<<endl;
	}
	return 0;
}



