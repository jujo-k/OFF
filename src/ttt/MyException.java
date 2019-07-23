package ttt;

public class MyException extends Exception{
	int idnumber;
	MyException(){
		super();
	}
	MyException(String message,int id){
		super(message);
		idnumber = id;
	}
	public int getIdnumber(){
		return idnumber;
	}
}
