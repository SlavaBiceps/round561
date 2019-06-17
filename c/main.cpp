#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n,res=0;
    cin >> n;
    long long mas[200002];
    for(long long i=0;i<n;i++){
        cin >> mas[i];
        mas[i]=abs(mas[i]);
    }
    sort(mas,mas+n);
    for(long long i=0;i<n;i++) {
        res+=upper_bound(mas,mas+n,mas[i]*2)-mas-i-1;
    }
    cout << res;
    return 0;
}