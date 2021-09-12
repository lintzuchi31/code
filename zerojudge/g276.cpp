#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int INF = 1e6;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k,x[502],y[502],vx[502],vy[502],c[501],g[101][101],b[101][101];
    cin >> n >> m >> k;
    for(int i=0;i!=k;i++){
        cin >> x[i] >> y[i] >> vx[i] >> vy[i];
        c[i]=0;
        g[x[i]][y[i]]++;
        b[x[i]][y[i]]++;
    }
    int cnt=k;
    while(cnt){
        for(int i=0;i!=k;i++){
            if(c[i]) continue;
            g[x[i]][y[i]]--;
            x[i]+=vx[i];
            y[i]+=vy[i];
            if(x[i]<0 || x[i]>n-1 || y[i]<0 || y[i]>m-1){
                cnt--;
                c[i]=1;
                continue;
            }
            g[x[i]][y[i]]++;
        }
        for(int i=0;i!=n;i++){
            for(int j=0;j!=m;j++){
                if(b[i][j] && g[i][j]){
                    cnt-=g[i][j];
                    for(int f=0;f!=k;f++){
                        if(x[f]==i && y[f]==j){
                            c[f]=1;
                        }
                    }
                    b[i][j]=0;
                    g[i][j]=0;
                }
                if(g[i][j]) b[i][j]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i!=n;i++){
        for(int j=0;j!=m;j++){
            ans+=b[i][j];
        }
    }
    cout << ans << "\n";
}
