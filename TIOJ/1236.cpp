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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define MOD 1000000007
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

const int N = 225, INF = INT_MAX;
struct DIN{
    struct E{
        int v, c, r;
        E(int v, int c, int r):
            v(v), c(c), r(r){}
    };
    vector<E> adj[N];
    void add(int u, int v, int c){
        adj[u].emplace_back(v, c, (int) adj[v].size());
        adj[v].emplace_back(u, 0, (int) adj[u].size() - 1);
    }
    int n, s, t;
    void init(int nn, int ss, int tt){
        n = nn, s = ss, t = tt;
        for(int i = 0; i <= n; ++i)
            adj[i].clear();
    }
    int le[N], it[N];
    int bfs(){
        fill(le, le + N, -1); le[s] = 0;
        queue<int> q; q.push(s);
        while(!q.empty()){
            int u = q.front(); q.pop();
            for(auto [v, c, r]: adj[u]){
                if(c > 0 and le[v] == -1)
                    le[v] = le[u] + 1, q.push(v);
            }
        }
        return ~le[t];
    }
    int dfs(int u, int f){
        if(u == t) return f;
        for(int &i = it[u]; i < (int) adj[u].size(); ++i){
            auto &[v, c, r] = adj[u][i];
            if(c > 0 and le[v] == le[u] + 1){
                int d = dfs(v, min(c, f));
                if(d > 0){
                    c -= d;
                    adj[v][r].c += d;
                    return d;
                }
            }
        }
        return 0;
    }
    ll flow(){
        ll ans = 0, d;
        while(bfs()){
            fill(it, it + N, 0);
            while((d = dfs(s, INF)) > 0) ans += d;
        }
        return ans;
    }
} din;
 
int main(){
    int n;cin>>n;
    din.init(n*2+1,0,n*2+1);
    for(int i=1;i<=n;i++){
        int v; 
		cin>>v;
        din.add(i,i+n,v);
    }
    int m;cin>>m;
    int in[n+1],out[n+1];
    for(int i=0;i<=n;i++)in[i]=0,out[i]=0;
    for(int u,v,c;m;m--){
        cin>>u>>v;
        in[v]=1;out[u]=1;
        din.add(u+n,v,INF);
    }
    for(int i=1;i<=n;i++){
        if(!in[i])din.add(0,i,INF);
        if(!out[i])din.add(i+n,n*2+1,INF);
    }
    cout<<din.flow()<<endl;
}

