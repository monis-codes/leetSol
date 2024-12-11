class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map <int,int> m;
        int ans=0;
        for(int& i : nums) {
            m[i-k]++;
            m[i+k+1]--;
        }
        int max_p = 0;
        int count = 0;
        for(auto& i : m){
            count += i.second;
            ans=max(ans,count);
        }
        return ans;
    }
};