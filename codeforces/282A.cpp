#include <iostream>
#include<string>
using namespace std; 
int main() {
    int n,cnt=0;
    string s;
    cin >> n;
    for(int i=0;i!=n;i++){
        cin >> s;
        for(int j=0;j!=3;j++){
            if(s[j]=='+'){
                cnt++;
                break;
            }
            else if(s[j]=='-'){
                cnt--;
                break;
            }
        }
    }
    cout << cnt << "\n";
}
