// 1919A Wallet Exchange

#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        if ((a + b) % 2 == 1) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}
