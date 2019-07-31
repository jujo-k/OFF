package patExa;

import java.util.Scanner;

public class kexuejishufa {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        //确定符号
        if (s.charAt(0)=='-'){
            System.out.print("-");
        }
        //找E
        int temp = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i)=='E'){
                temp = i;
                break;
            }
        }

        //截取小数
        String nums = s.substring(1,temp);
        String[] number = nums.split("\\.");


        //截取指数
        String zhis = s.substring(temp+2,s.length());
        int zhi = new Integer(zhis);

        //运算，判断放大缩小
        //缩小判断缩小多少
        if (s.charAt(temp+1)=='-'){

            if(zhi<number[0].length()){
                System.out.print(s.substring(0,number[0].length()-zhi-1));
                System.out.print(".");
                System.out.print(s.substring(number[0].length()-zhi,number[0].length()));
                System.out.print(number[1]);
            }else{
                System.out.print("0.");
                while ((zhi - number[0].length())>0){
                    System.out.print("0");
                    zhi--;
                }
                System.out.print(number[0]+number[1]);
            }
        }else{
           if (zhi<number[1].length()){
               System.out.print(number[0]);
               System.out.print(number[1].substring(0,zhi-1));
               System.out.print(".");
               System.out.print(number[1].substring(zhi,number[1].length()));
           }else{
               System.out.print(number[0]+number[1]);
               for (int i = 0; i < zhi-number[1].length(); i++) {
                   System.out.print("0");
               }
           }
        }

    }
}
