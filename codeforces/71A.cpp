#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.length()>10){
            cout << s[0] << s.length()-2 << s[s.length()-1] << "\n";
        }
        else cout << s << "\n";
    }
}

