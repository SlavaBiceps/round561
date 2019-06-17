#include <bits/stdc++.h>

using namespace std;

bool b[50][20000];

int main() {
    int n,m,k,x;
    cin >> n >> m;
    for (long long i=0;i<n;i++){
        cin >> k;
        for (long long j=0;j<k;j++){
            cin >> x;
            b[i][x]=1;
        }
    }
    for (long long i=0;i<n;i++){
        for (long long j=i+1;j<n;j++){
            long long f=0;
            for (long long z=0;z<20000;z++){
                if (b[i][z]==b[j][z]&&b[i][z]==1){
                    f=1;
                }
            }
            if(f==0) {
                cout << "impossible";
                return 0;
            }
        }
    }
    cout << "possible";
}