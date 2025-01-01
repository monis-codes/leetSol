class Solution {
    public int maxScore(String s) {
        int one = 0;
        int zero = 0;
        int sum = 0;
        
        for (char c : s.toCharArray()) {
            if (c == '1') {
                one += 1;
            }
        }
        
        if (one == 0) {
            return s.length() - 1;
        }
        
        for (int i = 0; i < s.length() - 1; i++) {
            if (s.charAt(i) == '0') {
                zero++;
                sum = Math.max(sum, zero + one);
            } else {
                one--;
                sum = Math.max(sum, zero + one);
            }
        }

        return sum;
    }
}

