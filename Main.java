public class Main {

	public static void main(String[] args)  throws InterruptedException {
		Clock c = new Clock(10, 20, 50);
		//c.validate();
		int a = c.hours;
		
		while(true){
			c.tick();
			System.out.println(c);
			Thread.sleep(1000);
		}
	}
	
}

