package sxt;

public class hasException {
	public static void main(String[] args){
//		int a=10/0;
		int[] s = new int[10];
		
			for(int i=11;i>0;i--) {
				try {
				System.out.println(s[i]+i+"abnomal");	
				}catch(ArrayIndexOutOfBoundsException e) {
//					e.printStackTrace();
					System.out.println("数组越界");
				}finally {
					System.out.println("/n这是FINALL");
				}
			}
		
		
	}
}
