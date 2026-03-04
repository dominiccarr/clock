public class Clock {
	
	public int hours;
	private int mins;
	private int secs;
	
	public Clock(int h, int m, int s){
		hours = h;
		mins = m;
		secs = s;
		validate();
	}
	
	private void validate(){
		if (hours > 12 || mins > 60 || secs > 60){ 
			hours = 0;
			mins = 0;
			secs = 0;
		}
	}
	
	public void tick(){
		secs += 1;

		if (secs > 59){ 
			mins += 1; 
			secs = 0; 
		}

		if (mins > 59){ 
			hours += 1; 
			mins = 0; 
		}

		if (hours > 12){ 
			hours = 1; 
			mins = 0; 
			secs = 0; 
		} 
	}


	public String toString() {
		return hours+":"+mins+":"+secs;
	}

}