// 1917C Watering an array

#include <iostream>

using namespace std;

int score(int a[], const int v[], const int n, const int k, \
          const int currentDay, const int d);
void add(int a[], const int bi);
int count(int a[], const int n);

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, d;
        cin >> n >> k >> d;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int v[k];
        for (int j = 0; j < k; j++) {
            cin >> v[j];
        }

        int ans = score(a, v, n, k, 0, d);
        cout << ans << endl;
    }
    return 0;
}

int score(int a[], const int v[], const int n, const int k, \
          const int currentDay, const int d) {
    int c = count(a, n);
    if (currentDay == d - 1) return c;
    int zeros[n] = { 0 };
    add(a, v[currentDay % k]);

    int first = score(a, v, n, k, currentDay + 1, d);
    int second = c + score(zeros, v, n, k, currentDay + 1, d);
    return first >= second ? first : second;
}

void add(int a[], const int bi) {
    for (int i = 0; i < bi; i++) {
        a[i] += 1;
    }
}

int count(int a[], const int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == i + 1) c += 1;
    }
    return c;
}
