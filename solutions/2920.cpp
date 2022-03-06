#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr(8);
    vector<int> ascending  = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> descending = {8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 8; i++)
        cin >> arr[i];
    if (arr == ascending)
        cout << "ascending";
    else if (arr == descending)
        cout << "descending";
    else
        cout << "mixed";
}
