class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {return false;}
        long long temp=x;
        long long reverse=0;
        while(temp != 0)   {  
            long long remainder = temp % 10;  
            reverse = reverse * 10 + remainder;  
            temp = temp/10;  
        }
        if(reverse == x) {return true;}
        return false;
    }
};