class Solution(object):
    def maxScore(self, s):
        one = 0
        zero = 0
        sum = 0
        
        for c in s:
            if c == '1':
                one += 1
        
        if one == 0:
            return len(s) - 1
        
        for i in range(len(s) - 1):
            if s[i] == '0':
                zero += 1
                sum = max(sum, zero + one)
            else:
                one -= 1
                sum = max(sum, zero + one)

        return sum
        