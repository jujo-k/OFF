package patExa;

import java.util.Scanner;

public class Djinzhi {
    public static void main(String[] args) {
        int result = 0;
        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();
        int d = in.nextInt();

        int x = a+b;
        StringBuilder s =new StringBuilder();
        while (x != 0){
            int temp = x%d;
            s = s.append(temp) ;
            x= x/d;
        }
        System.out.println(s.reverse());
    }


}
