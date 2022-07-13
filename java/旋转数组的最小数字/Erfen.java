package 旋转数组的最小数字;

public class Erfen {
    public int minArray(int[] numbers) {
        int len = numbers.length;
        int low = 0;
        int high = len - 1;
        int mid = 0;
        while(low<high){
            mid = low+(high - low)/2;
            if(numbers[mid]>numbers[high]){
                low = mid+1;
            }else if(numbers[mid]<numbers[high]){
                high = mid;
            }else if(numbers[high]==numbers[mid]){
                high--;
            }
        }
        return numbers[low];
    }
}
