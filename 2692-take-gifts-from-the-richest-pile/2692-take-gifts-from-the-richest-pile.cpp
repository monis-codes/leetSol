class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;int n=gifts.size();
        for(int i =0 ; i<n ; i++) {
            pq.push(gifts[i]);
        }
        while (k--) {
            int largest = pq.top(); 
            pq.pop();
            int reduced = floor(sqrt(largest)); 
            pq.push(reduced); 
        }

        long long ans = 0;
        while (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};