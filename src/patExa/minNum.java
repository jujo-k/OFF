package patExa;

import java.util.Scanner;
import java.util.regex.Pattern;

public class minNum {
    public static void main(String[] args) {
        int[] numb = new int[10];
        Scanner in = new Scanner(System.in);

        for (int i = 0; i <10 ; i++) {
            numb[i] = in.nextInt();
        }

        //确定首位
        for (int i = 1; i < 10; i++) {
            if (numb[i]>0){
                System.out.print(i);
                numb[i] --;
                break;
            }
        }
        //一次填充别的位置
        for (int i = 0; i < numb.length; i++) {
            while (numb[i]>0){
                System.out.print(i);
                numb[i]--;
            }

        }

    }
}
