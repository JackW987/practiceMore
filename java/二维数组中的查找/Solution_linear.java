package 二维数组中的查找;

public class Solution_linear {
    class Solution {
        public boolean findNumberIn2DArray(int[][] matrix, int target) {
            if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
                return false;
            }
            int rows = matrix.length, columns = matrix[0].length;
            int row = 0, column = columns - 1;
            while (row < rows && column >= 0) {
                int num = matrix[row][column];
                if (num == target) {
                    return true;
                } else if (num > target) {
                    column--;
                } else {
                    row++;
                }
            }
            return false;
        }
    }
}
