#include <iostream>

using namespace std;

long long n,a,b;

int main() {
    cin >> n;
    for(long long i=2;i<n/2;i++) {
        if (n%i==0&&i>4&&(n/i)>4){
            a=i;
            b=n/i;
        }
    }
    if (a==0||b==0) {
        cout << "-1";
        return 0;
    }
    if (a<5||b<5){
        cout << "-1";
        return 0;
    }
    long long k=0;
    string s="aeiou";
    for (long long i=0;i<a;i++){
        k=i%5;
        for (long long j=0;j<b;j++){
            cout << s[k];
            k=(k+1)%5;
        }
    }
    return 0;
}