class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        int n =nums.size()-1; 
        vector<long long> prefix(nums.size());

        prefix[0]=nums[0];
        for(int i=1 ; i< nums.size() ; i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }

        for(int i =0; i < prefix.size()-1 ; i++) {
            if(prefix[i] >= (prefix[n]-prefix[i])) {
                ans++;
            }
        }
        return ans;
    }
};