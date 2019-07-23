package xc;

public class myThread implements Runnable{
	private Thread xc;
	private static int count;
	private static boolean flag = true;
	
	public synchronized void run() {
		for(int i=0;i<100;i++) {
			if(!flag) {
				try {
					wait();//等待
				} catch (InterruptedException e) {
					flag = false;
					count = count+1;
					flag = true;
					notifyAll();
					System.out.println("my name is"+xc.getName()+" count ="+count);
				}
			}
		}
		
	}
	
	public myThread(String name) {
		xc = new Thread(this,name);
	}
	
	public void start() {
		xc.start();
	}
	
	
}
