class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> cnt;
        for (auto& ch : text) {
            if (ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n') ++cnt[ch];
        }
        return min({ cnt['b'], cnt['a'], cnt['l'] / 2, cnt['o'] / 2, cnt['n'] });
    }
};