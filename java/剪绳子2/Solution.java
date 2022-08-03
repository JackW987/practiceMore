package 剪绳子2;

class Solution {
    public int cuttingRope(int n) {
        // 基于两个数学推论
        // 绳子被均分时乘积最大
        // 绳子以3划分时乘积最大
        if(n<=3){
            return n-1;
        }
        int part = n/3;
        int mol = n%3;
        if(mol==0){
            return (int)(molCount(part) % 1000000007);
        }else if(mol==1){
            return (int)(molCount(part - 1) * 4 % 1000000007);
        }else{
            return (int)(molCount(part) * mol % 1000000007);
        }
    }
    public long molCount(int part){
        long result = 1;
        for(int i=0;i<part;i++){
            result = result * 3;
            result = result % 1000000007;
        }
        return result;
    }
}
