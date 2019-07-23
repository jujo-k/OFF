package book;

public class chicken {
	public static void main(String[] args) {
		for(int man=0;man<20;man++) {
			for(int women=0;women<34;women++) {
				int chicken = 100-man-women;
				if(5*man+3*women+chicken/3==100 && chicken%3==0) {
					System.out.println("公鸡："+man+"母鸡："+women+"小鸡"+chicken);
				}
			}
		}
	}
	
}
