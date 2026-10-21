class Solution {
public:
    vector<string> ans;

    void generate(string s, int i) {
        if (i == s.size()) {
            ans.push_back(s);
            return;
        }

        if (isalpha(s[i])) {
            s[i] = tolower(s[i]);
            generate(s, i + 1);

            s[i] = toupper(s[i]);
            generate(s, i + 1);
        } else {
            generate(s, i + 1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        generate(s, 0);
        return ans;
    }
};
