package xiancheng;

public class demoPri {
	public static void main(String[] args) {
		cliker trHigh,trLow;
		//创建两个线程对象
		trHigh = new cliker();
		trLow = new cliker();
		//分别设置优先级
		trHigh.setPriority(Thread.NORM_PRIORITY+2);
		trLow.setPriority(Thread.NORM_PRIORITY-2);
		//启动两个线程
		trHigh.start();
		trLow.start();
		try {
			Thread.sleep(1000);
		}catch(InterruptedException e) {
			
		
		}
		//结束两个子线程
		trLow.normalstop();
		trHigh.normalstop();
		try{
			trHigh.join();
			trLow.join();
		}catch(InterruptedException e) {
			
		}
		System.out.println("trHigh的循环次数为"+trHigh.getClick());
		System.out.println("trLow的循环次数为"+trLow.getClick());
	}
}
