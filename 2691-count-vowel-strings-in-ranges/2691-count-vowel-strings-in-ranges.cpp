class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> isVowel(n, 0); 
        vector<int> answer(queries.size()) ; 
 
        for (int i = 0; i < n; ++i) {
            string s = words[i];
            int a = s.length()-1;
            if((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u' )&& (s[a] == 'a' || s[a] == 'e' || s[a] == 'i' || s[a] == 'o' || s[a] == 'u')) {
                isVowel[i] = 1;  // Mark as valid
            } 
        }

        // Compute prefix sums
        for (int i = 1; i < n; ++i) {
            isVowel[i] = isVowel[i - 1] + isVowel[i];
            cout<<isVowel[i]<<endl;
        }
        
        for(int i = 0 ; i<queries.size() ; i++) {
            vector<int> lr= queries[i];
            answer[i] = isVowel[lr[1]] - (lr[0] == 0 ? 0 : isVowel[lr[0] - 1]);
        }
    return answer;;
    }
};