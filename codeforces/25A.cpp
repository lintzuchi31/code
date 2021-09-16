#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,dt[101],odd=0,even=0;
    bool check;
    cin >> n;
    for(int i=0;i!=n;i++){
        cin >> dt[i];
    }
    for(int i=0;i!=n;i++){
        if(dt[i]%2) odd++;
        else even++;
        if(odd == 2){
            check = true;
            break;
        }
        if(even == 2){
            check = false;
            break;
        }
    }
    int tar=0;
    for(int i=0;i!=n;i++){
        if(!check && dt[i]%2==1){
            tar = i+1;
            break;
        }
        else if(check && dt[i]%2==0){
            tar = i+1;
            break;
        }
    }
    cout << tar << '\n';
}   
