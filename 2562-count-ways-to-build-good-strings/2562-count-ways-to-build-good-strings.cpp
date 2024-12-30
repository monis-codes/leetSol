class Solution {
public:
    int mod = 1e9 + 7; // Modulo value
    unordered_map<int, int> dp; // Memoization map

    int dfs(int length, int low, int high, int zero, int one) {
        if (length > high) return 0; 
        
        if (dp.find(length) != dp.end()) return dp[length];
        
        dp[length] = (length >= low) ? 1 : 0;
        dp[length] += dfs(length + zero, low, high, zero, one) + dfs(length + one, low, high, zero, one);
        dp[length] %= mod; 

        return dp[length];
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        return dfs(0, low, high, zero, one);
    }
};
