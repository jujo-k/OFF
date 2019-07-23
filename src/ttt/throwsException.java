package ttt;

public class throwsException {
	public  static void main(String[] args){
		try {
			creatException();
		}catch(Exception e) {
			System.out.println("这是在main方法中捕获的"+e);
		}
	}
	
	public static void creatException() throws Exception {
		double a = Math.random();
		try {
		if(a>0.5) {
			System.out.println(a);
		}else {
			throw new Exception();
		}
		
	}catch(Exception e) {
		System.out.println("这是在方法中捕获的"+e.getMessage());
		int s[]= new int[1];
		s[2]=9;
		for(int i=0;i<10;i++) {
			System.out.println(i);
		}
	}
	
}
}
