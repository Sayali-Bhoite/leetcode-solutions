class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }
    vector<pair<char, int>> v(freq.begin(), freq.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });
    string ans = "";
    for (auto &p : v) {
        ans += string(p.second, p.first);
    }
    return ans;
}
};