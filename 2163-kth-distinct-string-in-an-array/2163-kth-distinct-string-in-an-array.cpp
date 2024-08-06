#include <unordered_map>
#include <string>
#include <vector>

class Solution {
public:
    std::string kthDistinct(std::vector<std::string>& arr, int k) {
        std::unordered_map<std::string, int> hs;
        for (const std::string& a : arr) {
            hs[a]++;
        }
        for (const std::string& v : arr) {
            if (hs[v] == 1) {
                --k;
                if (k == 0) {
                    return v;
                }
            }
        }
        return "";
    }
};

