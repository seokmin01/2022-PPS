#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string line;
    while (1) {
        getline(cin, line);
        if (line == ".") break;
        int bal = 1;
        stack<char> ST;
        for (auto c : line) {
            if (c == '(' || c == '[') ST.push(c);
            else if (c == ')') {
                if (ST.empty() || ST.top() != '(') {
                    bal = 0;
                    break;
                }
                ST.pop();
            }
            else if (c == ']') {
                if (ST.empty() || ST.top() != '[') {
                    bal = 0;
                    break;
                }
                ST.pop();
            }
        }
        if (ST.empty() && bal == 1) cout << "yes\n";
        else cout << "no\n";
    }
}
