#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

long long res(long long a){
    long long b=0;
    for (long long j=0;j<a;j++){
        b+=j;
    }
    return b;
}
long long n,kol=0;
long long bu[1000];

int main() {
    string s;
    cin >> n;
    for (long long i=0;i<n;i++){
        cin >> s;
        bu[s[0]]++;
    }
    for (long long i=0;i<1000;i++){
        long long aa=bu[i]/2;
        long long bb=bu[i]%2;
        kol+=res(aa)+res(bu[i]-aa);
    }
    cout << kol;
    return 0;
}