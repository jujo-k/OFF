package a20170928;

//public class n1 {
//	public int MoreThanHalfNum_Solution(int [] array) {
//		int length = array.length;
//		if(array == null || length<=0) {
//			return 0;
//		}
//		
//		if(length==1) {
//			return array[0];
//		}
//		
//		int[] tempArray = new int[length];
//		
//		for(int i=0;i<length;i++) {
//			tempArray[i] = array[i];
//		}
//		
//		for(int i=0;i<length;i++) {
//			if(tempArray[i]==0) {
//				continue;
//			}
//			
//			for(int j=i+1;j<length;j++) {
//				if(tempArray[i] != tempArray[j]	&&	tempArray[j]!=0) {
//					tempArray[i]=0;
//					tempArray[j]=0;
//					break;
//				}
//			}
//			
//			
//		}
//		
//		for(int i=0;i<length;i++) {
//			System.out.print(tempArray[i]);
//		}
//		
//		int result = 0;
//		for(int i=0;i<length;i++) {
//			if(tempArray[i]!=0) {
//				result = tempArray[i];
//				break;
//			}
//		}
//		
//		int times = 0;
//		for(int i=0;i<length;i++) {
//			if(result == array[i]) {
//				times++;
//			}
//		}
//		
//		if(times*2<=length) {
//			result = 0;
//		}
//		return result;
//		
//		
//		
//		
//		
//	}
//}


public class n1 {
    public int MoreThanHalfNum_Solution(int [] array) {
        int length = array.length;
        if(array==null || length <= 0) {
        	return 0;
        }
    	
    	if(length==1) {
    		return array[0];
    	}
    	
    	int solider = array[0];
    	int flag = 1;
    	for(int i=1;i<length;i++) {
    		if(flag == 0) {
    			solider = array[i];
    			flag =1;
    		}else if(solider == array[i]) {
    			flag++;
    		}else
    			flag--;
    	}
    	
    	flag=0;
    	for(int i=0;i<array.length;i++) {
    		if(array[i]==solider) {
    			flag++;
    		}
    		
    	}
    	
    	return (flag*2 > array.length )?solider:0;
    	
    
    }
}
