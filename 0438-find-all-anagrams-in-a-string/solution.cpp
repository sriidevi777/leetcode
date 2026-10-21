class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size(), m = p.size();

        if (m > n) return ans;

        vector<int> a(26, 0), b(26, 0);

        for (char c : p)
            a[c - 'a']++;

        for (int i = 0; i < m; i++)
            b[s[i] - 'a']++;

        for (int i = 0; i <= n - m; i++) {
            if (a == b)
                ans.push_back(i);

            if (i + m < n) {
                b[s[i] - 'a']--;
                b[s[i + m] - 'a']++;
            }
        }

        return ans;
    }
};
