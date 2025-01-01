class Solution {
public:
    int maxScore(string s) {
        int one =0; int zero=0; int sum=0;
        for(char c : s) {
            if(c=='1') {
                one+=1;
            }
        }
        if(one==0) {return s.size()-1;}
        // if(one==s.size()) {return s.size()-1;}
        for(int i = 0 ; i<s.size()-1 ; i++) {
            if (s[i] == '0') {
                zero++;
                sum = max(sum, zero+one);
            } else {
                one--;
                sum = max(sum, zero+one);
            }
        }

        return sum;
    }
};