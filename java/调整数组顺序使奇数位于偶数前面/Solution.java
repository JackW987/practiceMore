package 调整数组顺序使奇数位于偶数前面;

class Solution {
    private int temp = 0;
    public int[] exchange(int[] nums){
        int beg = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2!=0){
                swap(beg,i,nums);
                beg++;
                if(beg<=(nums.length-1)){
                    while(nums[beg]%2!=0 && beg < i){
                        if(beg == (nums.length-1)){
                            break;
                        }
                        beg++;
                    }
                }
            }
        }
        return nums;
    }
    public void swap(int i,int j,int[] nums){
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
