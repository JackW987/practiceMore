package 无重复字符的最长子串;

import java.util.HashMap;
import java.util.Map;

public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.lengthOfLongestSubstring("abba"));
    }
    public int lengthOfLongestSubstring(String s) {
        int start = 0;
        int end = 0;
        int max = 0;
        int count = 0;
        char[] char_s  =s.toCharArray();
        Map<Character,Integer> map = new HashMap<>();
        for(int i=0;i<s.length();i++){
            if(map.containsKey(char_s[end])){
                start = Math.max(map.get(char_s[end]),start);
            }
            map.put(char_s[end],end+1);
            count = end - start + 1;
            if(count>=max){
                max = count;
            }
            end = end + 1;
        }
        return max;
    }
}
