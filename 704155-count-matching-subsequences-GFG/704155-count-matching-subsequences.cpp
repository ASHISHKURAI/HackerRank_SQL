class Solution {
public:
    int countWays(string &s1, string &s2) {
        int m = s1.length();
        int n = s2.length();
        int MOD = 1e9 + 7;

        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (int j = 0; j < m; j++) {
            for (int i = n; i >= 1; i--) {
                if (s2[i - 1] == s1[j]) {
                    dp[i] = (dp[i] + dp[i - 1]) % MOD;
                }
            }
        }

        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna