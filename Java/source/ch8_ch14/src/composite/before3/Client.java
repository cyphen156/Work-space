package composite.before3;

public class Client {
	public static void main(String[] args) {
		Computer computer = new Computer() ;
		Body body = new Body(100, 70) ;
		Keyboard keyboard = new Keyboard(5, 2) ;
		Monitor monitor = new Monitor(20, 30) ;
		Speaker speaker = new Speaker(10, 10) ;
		
		// body에 CPU, HardDisk, MainMemory 추가하는 것이 필요함
		
		computer.addBody(body) ;
		computer.addKeyboard(keyboard) ;
		computer.addMonitor(monitor) ;
		computer.addSpeaker(speaker) ;
		
		int computerPrice = computer.getPrice() ;
		int computerPower = computer.getPower() ;
		
		System.out.println("Computer Power: " + computerPower + " W") ;
		System.out.println("Computer Price: " + computerPrice + " 만원") ;	
	}
}
