#include <iostream>
using namespace std;

int main() {

    int n, k , l , c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toast = min(min(k * l / nl, c * d), p / np) / n;

    cout << toast;

    return 0;
}