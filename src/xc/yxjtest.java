package xc;

public class yxjtest {
	public  static void main(String[] args) {
		yxj high,low;
		
		high = new yxj();
		low = new yxj();
		
		high.setPriority(Thread.NORM_PRIORITY+2);
		low.setPriority(Thread.NORM_PRIORITY-2);
		
		high.start();
		low.start();
		
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		try {
			high.join();
			low.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			System.out.println(high.getClick());
			System.out.println(low.getClick());
		}
		
		
	}
}
