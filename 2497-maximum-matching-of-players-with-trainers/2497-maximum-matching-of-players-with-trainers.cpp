class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
       sort(trainers.begin(),trainers.end());
       int index =0,cnt=0;
       while(index<trainers.size() && cnt<players.size()){
           if(trainers[index]>=players[cnt])cnt++;
           index++;
       }
    return cnt;
    }
};