#include <iostream>
using namespace std;

int main() {

    int n;
    int total;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
            total++;
    }

    cout << total;
    

    return 0;
}