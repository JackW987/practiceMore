package 二进制中1的个数;

import java.util.Arrays;

public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int count = 0;
        String a = Integer.toBinaryString(5);
        System.out.println(a);
         char[] bins = Integer.toBinaryString(n).toCharArray();
         System.out.println(Arrays.toString(bins));
         for(int i=0;i<bins.length;i++){
             if(bins[i] == '1'){
                 count += 1;
             }
         }
        return count;
    }
}
