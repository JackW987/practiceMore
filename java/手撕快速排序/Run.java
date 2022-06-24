package 手撕快速排序;

import java.util.Arrays;
import java.util.Random;

public class Run {
    public static void main(String[] args) {
        int[] nums = {5,2,3,1};
        Solution solution = new Solution();
        solution.sortArray(nums);
        System.out.println(Arrays.toString(nums));
    }
}
