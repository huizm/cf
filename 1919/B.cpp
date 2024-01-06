// 1919B

#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        char c;
        cin >> n;

        stack<bool> s;
        cin >> c;
        s.push(c == '+');
        for (int j = 1; j < n; j++) {
            cin >> c;
            bool cb = (c == '+');
            if (!s.empty() && cb != s.top()) s.pop();
            else s.push(c == '+');
        }

        cout << s.size() << endl;
    }
    return 0;
}
