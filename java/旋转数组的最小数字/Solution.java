package 旋转数组的最小数字;

class Solution {
    public int minArray(int[] numbers) {
        int min = 0;
        if(numbers[0]>=numbers[numbers.length-1]){
            min = numbers[numbers.length-1];
            for(int i=numbers.length-2;i>=0;i--){
                if(numbers[i]<min){
                    min = numbers[i];
                }
                if(numbers[i]>min){
                    break;
                }
            }
        }else{
            min = numbers[0];
            for(int i=1;i<numbers.length;i++){
                if(numbers[i]<min){
                    min = numbers[i];
                }
                if(numbers[i]>min){
                    break;
                }
            }
        }
        return min;
    }
}
