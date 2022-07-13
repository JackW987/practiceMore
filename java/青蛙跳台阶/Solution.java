package 青蛙跳台阶;

class Solution {
    public int numWays(int n) {
        if(n==0 || n==1){
            return 1;
        }
        int a = 0;
        int b = 1;
        int res = 0;
        for(int i=0;i<n;i++){
            if(res==1000000008){
                return 1;
            }
            res = (a+b)%1000000007;
            a = b;
            b = res;
        }
        return res;
    }
}
