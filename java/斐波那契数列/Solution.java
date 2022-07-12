package 斐波那契数列;

import java.util.ArrayList;
import java.util.List;

class Solution {
    // public int fib(int n) {
    //     // 终止条件
    //     if(n==0){
    //         return 0;
    //     }
    //     if(n==1){
    //         return 1;
    //     }
    //     return (fib(n-1) + fib(n-2));
    // }
    public int fib(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        List<Long> arr = new ArrayList<>();
        arr.add(0L);
        arr.add(1L);
        Long mid = 0L;
        for(int i=2;i<=n;i++){
            mid = arr.get(i-1) + arr.get(i-2);
            if(mid>1000000007){
                mid = mid%1000000007;
            }
            arr.add(mid);
        }
        Long result = arr.get(n);
        if(result==1000000008){
            return 1;
        }
        result = result%1000000007;
        return Integer.parseInt(String.valueOf(result));
    }
}
