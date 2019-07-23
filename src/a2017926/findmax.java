package a2017926;

public class findmax {
	public static void main(String[] args) {
		int ar [] = new int [10];
		init(ar);
		show(ar);
		System.out.println("max:" + getMax(ar));
		
	}
	public static int getMax(int a[]) {
		int max = a[0];
		for (int i=0;i<a.length;i++) {
			if(a[i]>max)
				max=a[i];
		}
		return max;
	}
	
	public static void init(int a[]) {
		for (int i=0;i<a.length;i++) {
			a[i] = (int)(Math.random()*1000);
		}
	}
	
	public static void show(int a[]) {
		for (int i=0;i<a.length;i++) {
			System.out.print(a[i]+" ");
		}
	}
}
