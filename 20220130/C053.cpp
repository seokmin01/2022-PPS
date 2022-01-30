class Solution {
public:
    string removeDuplicates(string s, int k) {
        deque<pair<char, int>> dq;
        for (auto c : s) {
            if (dq.empty() || dq.back().first != c)
                dq.push_back(make_pair(c, 1));
            else {
                dq.back().second++;
                if (dq.back().second >= k)
                    dq.pop_back();
            }
        }
        string answer = "";
        while (!dq.empty()) {
            for (int i = 0; i < dq.front().second; i++)
                answer += dq.front().first;
            dq.pop_front();
        }
        return answer;
    }
};
