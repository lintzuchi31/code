#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n,a,b,c,cnt=0;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a+b+c>1) cnt++;
    }
    cout << cnt << "\n";
}
