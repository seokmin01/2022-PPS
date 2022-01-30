class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for (int i = 0; i <= n; i++) {
            int cnt = 0, a = i;
            while (a > 0) {
                if (a % 2 == 1) cnt++;
                a /= 2;
            }
            v.push_back(cnt);
        }
        return v;
    }
};
