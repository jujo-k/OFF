package ttt;

public class test {
	public static void main(String args[]) {
		try {
			throw new Exception();
			//System.out.println("1");
		}catch(Exception e) {
			System.out.println("2");
		}finally {
			System.out.println("3");
		}
		System.out.println("4");
	}
}
