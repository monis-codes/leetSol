class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sum;
        for (int i = 0 ; i < nums.size() ; ++i) {
            int cursum=0;
            for (int j = i ; j < nums.size() ; ++j) {
                cursum += nums[j];
                sum.push_back(cursum);
            }
        }
        sort(sum.begin(),sum.end());
        int ans = 0 ;
        int MOD = 1000000007;
        for(int a = left-1 ; a < right ; a++) {
           
            ans = (ans+sum[a])%MOD;
        }
        return ans;
    }
        
    };
