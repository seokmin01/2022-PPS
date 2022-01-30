class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while (n != 1) {
            int sum = 0;
            string s = to_string(n);
            for (auto c : s)
                sum += (c - '0') * (c - '0');
            if (s.find(sum) != s.end())
                return false;
            s.insert(sum);
            n = sum;
        }
        return true;
    }
};
