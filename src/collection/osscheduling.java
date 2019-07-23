package collection;

import java.util.*;

public class osscheduling {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		osCompare comp = new osCompare();
		PriorityQueue<osjob> priQue =new PriorityQueue<osjob>(20,comp);
		System.out.println("请依次输入时间，0结束");
		
		boolean goon = true;
		int time;
		
		for(int cnt=1;goon;cnt++) {
			System.out.println("作业"+cnt+"所需时间：");
			time = in.nextInt();
			if(time>0) {
				priQue.add(new osjob(cnt,time));
			}else {
				goon = false;
			}
			
		}
		System.out.println("作业调度的顺序是：");
		while(priQue.size()>0) {
			osjob t;
			t = priQue.poll();
			System.out.println("作业编号是"+t.getNumber()+"所需时间"+t.getSpend());
		}
		
		
		
	}

}
