// 1919D 01 Tree

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        int largestIndex = 0;
        int largest = -1;
        for (int j = 0; j < n; j++) {
            int next;
            cin >> next;
            v[j] = next;
            if (next > largest) {
                largest = next;
                largestIndex = j;
            }
        }

        v[largestIndex] = -1;
        int pi = largestIndex - 1, pj = largestIndex + 1;
        bool noFlag = false;
        for (int find = largest - 1; find >= 1; find--) {
            if (pi >= 0 && v[pi] == find) {
                v[pi] = -1;
                if (pi >= 0) pi--;
                continue;
            }

            if (pj < n && v[pj] == find) {
                v[pj] = -1;
                if (pj < n) pj++;
                continue;
            }

            noFlag = true;
            break;
        }

        if (noFlag) cout << "NO" << endl;
        else {
            int zeroCount = 0;
            int oneCount = 0;
            for (int k = 0; k < n; k++) {
                if (v[k] == 0) {
                    zeroCount++;
                    if (zeroCount > 1) {
                        noFlag = true;
                        break;
                    }
                } else if (v[k] == 1) {
                    oneCount++;
                    break;
                } else if (v[k] != -1) {
                    noFlag = true;
                    break;
                }
            }
            
            if (zeroCount == 0) noFlag = true;
            // if (oneCount < 1) noFlag = true;

            if (noFlag) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}
