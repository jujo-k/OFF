package xiancheng;

public class mulThread {
	public static void main(String[] args) {
		myThread trFirst,trSecond;
		trFirst = new myThread("First Thread");
		trSecond = new myThread("Second Thread");
		
		try{
		trFirst.start();
		trSecond.start();
		trFirst.join();
		trSecond.join();
		}catch(InterruptedException e) {
			System.out.println("主线程被中断");
		}
		System.out.println("主线程结束");
		}
}
