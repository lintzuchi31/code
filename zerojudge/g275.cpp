#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100],b[100];
    cin >> n;
    while(n--){
        for(int i=1;i!=8;i++){
            cin >> a[i];
        }
        for(int i=1;i!=8;i++){
            cin >> b[i];
        }
        bool A=false,B=false,C=false;
        if(a[2]==a[4] || b[2]==b[4] || a[2]!=a[6] || b[2]!=b[6]) A=!A;
        if(a[7]!=1 || b[7]!=0) B=!B;
        if(a[2]==b[2] || a[4]==b[4] || a[6]==b[6]) C=!C;
        if(A) cout << "A";
        if(B) cout << "B";
        if(C) cout << "C";
        if(!A && !B && !C) cout << "None";
        cout << '\n';
    }
}
