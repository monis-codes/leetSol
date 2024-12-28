class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       sort(trainers.begin() , trainers.end());
        sort(players.begin() , players.end());
        int i = 0, j = 0;
        int ans = 0;
        while(j < trainers.size() && i < players.size()){
            if(players[i] > trainers[j]){
                j++;
            }
            else{
                ans++;
                i++;
                j++;
            }
            
        }

        return ans;
    }
};