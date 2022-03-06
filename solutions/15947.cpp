#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> v = {
        "baby", "sukhwan", "tururu", "turu",
        "very", "cute", "tururu", "turu",
        "in", "bed", "tururu", "turu",
        "baby", "sukhwan"
    };
    int idx = (n - 1) % 14;
    string ret = v[idx];
    if (ret == "tururu" || ret == "turu") {
        for (int i = 0; i < n / 14; i++)
            ret += "ru";
        if (ret.length() >= 12)
            ret = "tu+ru*" + to_string((ret.length() - 2) / 2);
    }
    cout << ret;
}
