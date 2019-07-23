package xc;

public class th {
	public static void main(String[] args) {
		myThread fr,se;
		fr = new myThread("first");
		se = new myThread("second");
		
		fr.start();
		se.start();
	}
}
