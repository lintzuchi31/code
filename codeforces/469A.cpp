#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int temp,n,k,dt[101];
    cin >> n;
    for(int i=1;i!=n+1;i++){
        dt[i]=1;
    }
    cin >> k;
    while(k--){
        cin >> temp;
        dt[temp]=0;
    }
    cin >> k;
    while(k--){
        cin >> temp;
        dt[temp]=0;
    }
    for(int i=1;i!=n+1;i++){
        if(dt[i]){
            cout << "Oh, my keyboard!" << '\n';
            break;
        }
        if(i==n) cout << "I become the guy." << '\n';
    }
}

