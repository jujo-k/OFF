package xiancheng;

public class cliker extends Thread{
	private int click = 0;
	private volatile boolean running = true;
	public int getClick() {
		return click;
	}
	public void run() {
		while(running)
		click = click +1;
	}
	public void normalstop() {
		running = false;
	}
}
