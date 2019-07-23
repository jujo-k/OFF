package sxt;

public class error {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			throw new Exception();
//			System.out.println("1");
		}catch(Exception e) {
			System.out.println("2");
		}finally {
			System.out.println("3");
		}
		System.out.println("4");
	}

}
