//  WAP to print the factorial of first 25 Natural number and modulo the result by 10^9 + 7.
#include <iostream>
using namespace std;
int main() {
    const long long MOD = 1000000007LL;
    long long ans = 1;
    for (int i = 1; i <= 25; ++i) {
        ans = (ans * i) % MOD;
    }
    cout << ans << '\n';
    return 0;
}