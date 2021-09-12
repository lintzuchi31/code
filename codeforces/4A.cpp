#include<iostream>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    while(cin >> n){
        if(n<=2) cout << "NO" << "\n";
        else{
            if(n%2==0){
                cout << "YES" << "\n";
            }
            else cout << "NO" << "\n";
        }
    }
}
