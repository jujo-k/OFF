package xiancheng;

public class ThreadImRunnable implements Runnable {
	private static int count = 0;
	private Thread trval;
	public void run() {
		int i;
		for(i=0;i<100;i++) {
			count = count +1;
			System.out.println("My name is "+trval.getName()+" count"+count);
			try {
				trval.sleep(500);
			}catch(InterruptedException e) {
				
			}
		}
			
	}
	public ThreadImRunnable(String name) {
		trval = new Thread(this,name);
	}
	public void start() {
		trval.start();
	}

}
