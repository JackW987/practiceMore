package 三数之和;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> results = new ArrayList<>();
        // 当数组为0或者长度小于2都return
        if(nums==null || nums.length<=2){
            return results;
        }
        // 先对数组进行排序
        Arrays.sort(nums);
        for(int i=0;i<nums.length-2;i++){
            // 排序后第一个i应该是最小值，如果i > 0 跳过循环
            if(nums[i]>0){
                continue;
            }
            // 第一个值去重
            if(i > 0 && nums[i]==nums[i-1]){
                continue;
            }
            // 定义目标
            int target = -nums[i];
            int left = i+1;
            int right = nums.length - 1;
            // 双指针移动
            while(left < right){
                if(nums[left]+nums[right]==target){
                    results.add(new ArrayList<>(Arrays.asList(nums[i],nums[left],nums[right])));
                    left++;
                    right--;
                    // 移动第二大的指针
                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                    // 移动末尾指针
                    while(left < right && nums[right] == nums[right+1]){
                        right--;
                    }
                }else if(nums[left]+nums[right]<target){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return results;
    }
}
