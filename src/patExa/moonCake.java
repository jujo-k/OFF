package patExa;

import java.text.DecimalFormat;
import java.util.Scanner;

public class moonCake {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int D = in.nextInt();
        int temp = 0;
        double sum = 0.0;
        int[] weight = new int[N];
        int[] price = new int[N];
        double[] pre = new double[N];
        double maxPre = 0.0;

        for (int i = 0; i < N; i++) {
            weight[i] = in.nextInt();
        }
        for (int i = 0; i < N; i++) {
            price[i] = in.nextInt();
        }

        for (int i = 0; i < N; i++) {
            pre[i] =(double) price[i]/(double) weight[i];
            if (pre[i]>maxPre) {
                maxPre = pre[i];
                temp = i;
            }
        }



        boolean flag = true;
        //当需求量大时，找单价最高的商品，直到需求为0
       while(flag){
        if (weight[temp]>D){
            sum = sum + (double) D/(double) weight[temp]*price[temp];
            break;
        }else{
            D = D - weight[temp];
            sum = sum + price[temp];
            pre[temp]=0;
            maxPre = 0.0;
            for (int i = 0; i <N ; i++) {
                if (pre[i]>maxPre) {
                    maxPre = pre[i];
                    temp = i;
                }
            }
        }
       }

        DecimalFormat df = new DecimalFormat("###.00");
        System.out.println(df.format(sum));
    }
}
