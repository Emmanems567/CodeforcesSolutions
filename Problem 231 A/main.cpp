#include <iostream>
using namespace std;

int main() {

    int n, P, V, T, N;
    cin >> n;

    while (n--){

        cin >> P >> V >> T;

        if (P + V + T >= 2)
        {
            N ++;
        }

    }
    
    cout << N << endl;

    return 0;
}