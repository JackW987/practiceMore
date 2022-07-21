package 剪绳子;

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
            return (int)Math.pow(3,part);
        }else if(mol==1){
            return (int)Math.pow(3,part-1) * 4;
        }else{
            return (int)Math.pow(3,part) * mol;
        }
    }
}