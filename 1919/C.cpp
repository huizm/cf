// 1919C Grouping Increases
// #define DEBUG
#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int first;
        cin >> first;
        int last[2] = { first }; // s, t
        int penalty = 0;

        int precount = 1;
        while (precount < n) {
            cin >> first;
            precount++;
            if (first <= last[0]) {
                last[0] = first;
            } else {
                last[1] = first;
                break;
            }
        }

        for (int i = precount; i < n; i++) {
            int max = last[0] >= last[1] ? 0 : 1;
            int next;
            cin >> next;
#ifdef DEBUG
            cout << last[0] << last[1] << next << endl;
#endif
            if (next > last[max]) {
                penalty++;
                last[(max + 1) % 2] = next;
            } else {
                last[(max + 1) % 2] = next;
            }
        }

        cout << penalty << endl;
    }
    return 0;
}
