package 手撕快速排序;

import java.util.Random;

public class Solution {
    public int[] sortArray(int[] nums) {
        randomQuickSort(nums,0,nums.length - 1);
        return nums;
    }
    // 递归主体
    public void randomQuickSort(int[] nums,int l,int r){
        if(l<r){
            int pos = randomOrder(nums,l,r);
            // 递归调用方法
            randomQuickSort(nums,l,pos-1);
            randomQuickSort(nums,pos+1,r);
        }
    }
    // 随机取主元并排序
    public int randomOrder(int[] nums,int l ,int r){
        int randomPos = new Random().nextInt(r - l + 1) + l;
        // 将需要排序的值先放置在数组末尾
        swap(nums,randomPos,r);
        int pos = reorder(nums, l, r);
        return pos;
    }
    // 排序主体
    public int reorder(int[] nums,int l,int r){
        int i=l-1;
        for(int j = l;j<=r-1;j++){
            if(nums[j]<=nums[r]){
                i = i+1;
                swap(nums,i,j);
            }
        }
        i = i+1;
        swap(nums,i,r);
        return i;
    }

    // 将数组中两个值换位
    public void swap(int[] nums,int i,int j){
        int temp = 0;
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
