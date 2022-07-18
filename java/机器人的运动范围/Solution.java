package 机器人的运动范围;

class Solution {
    int count = 0;
    public int movingCount(int m, int n, int k) {
        // 保存遍历过的状态
        boolean[][] movedMatrix = new boolean[m][n];
        // 用一个中间变量保存结果
        // 从某一个位置开始移动,遍历完所有位置
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                move(0,0,k,movedMatrix);
            }
        }
        return count;
    }
    public void move(int i,int j,int k,boolean[][] movedMatrix){
        int flag = countNum(i)+countNum(j);
        if(flag>k){
            return;
        }else if(movedMatrix[i][j]==true){
            return;
        }
        movedMatrix[i][j] = true;
        count += 1;
        int[][] dirs = {{1,0},{-1,0},{0,-1},{0,1}};
        for(int[] dir:dirs){
            int newi = i+dir[0];
            int newj = j+dir[1];
            if(newi >= 0 && newi < movedMatrix.length && newj >= 0 && newj < movedMatrix[0].length){
                move(newi,newj,k,movedMatrix);
            }
        }
    }
    public int countNum(int num){
        int numDig = 0;
        while(num>0){
            numDig += num%10;
            num = num/10;
        }
        return numDig;
    }
}