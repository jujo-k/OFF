package a2017926;

//nlogn
//public class no1 {
//	public boolean Find(int [][] array,int target) {
//		for(int i=0;i<array.length;i++) {
//			int low = 0;
//			int high = array[i].length-1;
//			
//			while(low <= high) {
//				int mid = (low + high)/2;
//				if(target>array[i][mid]) 
//					low = mid +1;
//				else if(target < array[i][mid]) 
//					high = mid-1;
//				else return true;
//			}
//		}
//		return false;
//	}
//}

public class no1 {
    public boolean Find(int [][] array, int target) {
    	int row = 0;
    	int col = array[0].length-1;
    	while(row<=array.length-1	&&	col>=0) {
    		if(target == array[row][col])
    			return true;
    		else if(target > array[row][col])
    			row++;
    		else 
    			col--;
    	}
    	return false;
    }
}

