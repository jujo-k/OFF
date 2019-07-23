package book;

import java.util.Scanner;

public class huishu {
	private static Scanner sc;

	public static void main(String[] args) {
		sc = new Scanner(System.in);
		int num = sc.nextInt();
		int answer=0;
		while(num!=0) {
			answer = answer*10 + num%10;
		}
		System.out.println(answer);
		if(answer == num) {
			System.out.println(num);
		}else 
			System.out.println("not the huishu!");
	}
	
}
