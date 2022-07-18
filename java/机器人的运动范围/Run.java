package 机器人的运动范围;

public class Run {
    public static void main(String[] args) {
        boolean[][] movedMtrix = new boolean[2][3];
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                System.out.print(movedMtrix[i][j]+" ");
            }
            System.out.println("");
        }
    }
}
