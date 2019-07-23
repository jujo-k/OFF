package ttt;

public class testMyException {
	public void manager() {
		try {
			regist(-100);
			System.out.println("success");
		}catch(MyException e){
			System.out.println("原因是："+e.getMessage()+"代码是"+e.getIdnumber());
		}
		
	}
	
	public void regist(int num) throws MyException{
		if(num<100) {
			throw new MyException("小于0啊啊啊啊啊",666);
		}else 
			System.out.println("asd");
	}
	
	
	public static void main(String args[]) {
		testMyException t = new testMyException();
		t.manager();
	}

}
