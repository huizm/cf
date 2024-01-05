// 1917B Erase First or second letter

#include <iostream>
#include <set>

using namespace std;

int main (void) {
    int caseCount;
    cin >> caseCount;

    for (int i = 0; i < caseCount; i++) {
        int len;
        cin >> len;
        string s;
        cin >> s;

        int ans = 0;
        set<char> set;
        for (int j = 0; j < len; j++) {
            set.insert(s[j]);
            ans += set.size();
        }

        cout << ans << endl;
    }
    return 0;
}
