package 数组中的第K个最大元素;

public class Solution {
    public int findKthLargest(int[] nums, int k) {
        sort_nums(nums);
        int len = nums.length-k;
        return nums[len];
    }
    public void sort_nums(int[] nums){
        int mid = 0;
        for(int i=0;i<nums.length;i++){
            for(int j=i;j<nums.length;j++){
                if(nums[i]>=nums[j]){
                    mid = nums[j];
                    nums[j] = nums[i];
                    nums[i] = mid;
                }
            }
        }
    }
}
