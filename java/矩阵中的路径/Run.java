package 矩阵中的路径;

public class Run {
    public static void main(String[] args) {
        int num = 36;
        int count = 0;
        while(num>0){
            count +=num%10;
            num = num/10;
        }
        System.out.println(count);
    }
}
