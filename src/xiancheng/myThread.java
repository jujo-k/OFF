package xiancheng;

public class myThread extends Thread {
	private static int count = 0;
	public myThread(String name) {
		super(name);
	}
	public void run() {
		int i;
		for(i=0;i<100;i++) {
			count = count +1;
			System.out.println("My name is "+getName()+" count"+count);
			try {
				sleep(5);
			}catch(InterruptedException e) {
				
			}
		}
	}
}
