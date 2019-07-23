package book;

public class yinzi {
	public static void main(String[] args) {
		for(int i=1;i<1000;i++) {
			
			if(res(i) == i) {
				System.out.println(i);
			}
		}
	}

	public static  int res(int num) {
			int sum=0;
			for(int i=1;i<num;i++) {
				if(num%i==0) {
//					System.out.print(i+" ");
					sum+=i;
				}
					
			}
			return sum;
		}
}
