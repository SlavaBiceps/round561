#include <bits/stdc++.h>

using namespace std;

int main() {
    long long q,a,b,m,i=0;
    cin >> q;
    for (long long j=q;j>0;j--){
        cin >> a >> b >> m;
        if (a == b) { cout << 1 << " " << a << endl; continue; }
        i=0;
        while (b<(a+m)*pow(2,i)){
            i++;
        }
        if ((a+1)*pow(2,i)>b){ cout << -1 << endl; continue; }
        cout << i+2 << " ";
        cout << a << " ";
        for (int j=i-1;j>=0;j--){
            cout << (long long)(((b>>j)+1)>>1) << " ";
    }
        cout << b << endl;
    }
    return 0;
}