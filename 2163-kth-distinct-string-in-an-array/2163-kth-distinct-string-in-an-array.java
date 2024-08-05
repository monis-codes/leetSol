class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap <String , Integer > hs = new HashMap <>();
        for (String a : arr) {
            hs.put(a,hs.getOrDefault(a,0)+1);
        }
        for (String v : arr) {
            if (hs.get(v) == 1) {
                --k;
                if (k == 0) {
                    return v;
                }
            }
        }
        return "";
    }
}