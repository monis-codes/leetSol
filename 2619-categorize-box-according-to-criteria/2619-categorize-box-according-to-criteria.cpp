class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long l=length;
        long long w=width;
        long long h=height;
        long long m=mass;
        bool bulky=false;
        bool heavy=false;

        if(l>=10000||w>=10000||h>=10000||m>=10000||l*w*h>=1000000000)
             bulky=true;
         if(m>=100)
             heavy=true;
        
        if(bulky&&heavy)
           return "Both";
        else if(!bulky&&!heavy)
            return "Neither";
        else if(bulky)
           return "Bulky";
        else 
           return "Heavy";
        
        
    }
};