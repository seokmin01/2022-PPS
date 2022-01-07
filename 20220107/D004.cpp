#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n;
    while (n--) {
        list<char> L;
        auto t = L.begin();
        cin >> s;
        for (auto c : s) {
            switch (c) {
                case '<':
                    if (t != L.begin()) t--;
                    break;
                case '>':
                    if (t != L.end()) t++;
                    break;
                case '-':
                    if (t != L.begin()) {
                        t--; // 앞의 글자를 지움
                        t = L.erase(t); // erase - t가 가리키는 값을 제거, 그 다음 원소의 위치를 반환
                    }
                    break;
                default:
                    L.insert(t, c);
            }
        }
        for (auto i : L) cout << i;
        cout << '\n';
    }
}
