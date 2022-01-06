#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed;
    cout.precision(3);
    int n, i, student, s, sum, cnt;
    double avg, rate;
    cin >> n;
    while (n--) {
        cin >> student;
        sum = 0, cnt = 0;
        vector<int> score;
        for (i = 0; i < student; i++) {
            cin >> s;
            score.push_back(s);
            sum += s;
        }
        avg = (double)sum / student;
        for (i = 0; i < student; i++)
            if (score[i] > avg) cnt++;
        rate = (double)cnt / student;
        cout << rate * 100 << "%\n";
    }
}
