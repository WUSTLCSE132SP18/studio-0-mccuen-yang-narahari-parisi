
public class Heartbeat {

	public static void main(String[] args) {
		int s =0;
	while(true) {	
	try {
	
		Thread.sleep(1000);
		s=s+1;
		
		System.out.println(s + " second have elapsed");
	} catch (InterruptedException e) {
	
		e.printStackTrace();
	}
	}	  
	
	

	}

}
