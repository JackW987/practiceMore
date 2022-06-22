package 三数之和;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> results = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                for(int k=j+1;k<nums.length;k++){
                    if((nums[i]+nums[j]+nums[k])==0){
                        List<Integer> mid_resluts = new ArrayList<>();
                        mid_resluts.add(nums[i]);
                        mid_resluts.add(nums[j]);
                        mid_resluts.add(nums[k]);
                        results.add(mid_resluts);
                    }
                }
            }
        }
        System.out.println(results);
        for(int i=0;i< (results.size()-1);i++){
            for(int j=i+1;j<results.size();j++){
                if(results.get(i).containsAll(results.get(j)) && results.get(j).containsAll(results.get(i))){
                    results.get(j).clear();
                }
            }
        }
        for(int i=(results.size()-1);i>0;i--){
            if(results.get(i).isEmpty()){
                results.remove(i);
            }
        }
        return results;
    }
}
