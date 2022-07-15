package 矩阵中的路径;

class Solution {
    public boolean exist(char[][] board, String word) {
        int m = board.length;
        int n = board[0].length;
        int k = 0;
        // 用于记录状态的数组
        boolean[][] status = new boolean[m][n];
        // 执行回溯
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                boolean flag = moveCheck(board,status,i,j,word,k);
                if(flag){
                    return true;
                }
            }
        }
        return false;
    }



    public boolean moveCheck(char[][] board,boolean[][] status,int i,int j,String word,int k){
        // 终止条件
        if(board[i][j]!=word.charAt(k)){
            return false;
        }else if(k == word.length()-1){
            return true;
        }
        // mxn的数组记录状态需要确定当前i,j是合理的情况下才记录
        status[i][j] = true;
        // 上下左右四个方向
        int[][] dirc = {{1,0},{-1,0},{0,-1},{0,1}};
        for(int[] dir : dirc){
            int movei = i+dir[0];
            int movej = j+dir[1];
            if(movei>=0 && movei<=(board.length-1) && movej>=0 && movej<=(board[0].length-1)&&!status[movei][movej]){
                boolean flag = moveCheck(board,status,movei,movej,word,k+1);
                if(flag){
                    return true;
                }
            }
        }
        status[i][j] = false;
        return false;
    }
}
