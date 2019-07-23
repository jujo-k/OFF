package a2017926;

public class YanghuiTri {
	private int tri[][];
	public static final int defaultLine = 10;
	
	public YanghuiTri(int line) {
		tri = new int [line][];
		for(int i=0;i<line;i++) 
			tri[i] = new int[i+1];
		fill();
	}
	public YanghuiTri() {
		this(defaultLine);
	}
	
	private void fill() {
		int i,j;
		for(i=0;i<tri.length;++i) 
			tri[i][0] = tri[i][i] = 1;
		for(i=2;i<tri.length;i++) 
			for(j=1;j<tri[i].length-1;j++) 
				tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
	}
	
	public void show () {
		int i, j;
		for(i=0;i<tri.length;i++) {
			for(j=0;j<tri[i].length;j++) {
				System.out.print(tri[i][j]+"  ");
				}
			System.out.println();
		}
		
	}
	public static void main(String[] args) {
		YanghuiTri yang =new YanghuiTri(7);
		yang.show();
	}
}
