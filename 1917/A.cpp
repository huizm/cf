// 1917A Least product

#include <iostream>

using namespace std;

int main(void) {
    int caseCount;
    cin >> caseCount;
    for (int i = 0; i < caseCount; i++) {
        int numCount;
        cin >> numCount;

        int negativeCount = 0;
        bool zeroFlag = false;
        for (int j = 0; j < numCount; j++) {
            int num;
            cin >> num;
            if (num == 0) {
                zeroFlag = true;
            } else if (num < 0) {
                negativeCount++;
            }
        }

        if (zeroFlag == true || negativeCount % 2 == 1) {
            cout << 0 << endl;
        } else {
            cout << 1 << "\n" << numCount << " " << 0 << endl;    
        }
    }
    return 0;
}
