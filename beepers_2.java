import stanford.karel.Karel;

public class beepers_2 extends Karel {
	public void run() {
		for (int i = 0; i < 9; i++) {
			moveToTheEnd();
			if (i % 2 == 0) {
				switchRow(true);
			} else {
				switchRow(false);
			}
		}
		moveToTheEnd();

	}

	public void moveToTheEnd() {

		beeperCheckAndDouble();

		while (frontIsClear()) {
			move();
			beeperCheckAndDouble();
		}

	}

	public void switchRow(boolean row) {
		if (row) {
			turnLeft();
			move();
			turnLeft();
		} else {
			turnRight();
			move();
			turnRight();
		}

	}

	public void turnRight() {
		turnLeft();
		turnLeft();
		turnLeft();

	}

	public void beeperCheckAndDouble() {

		if (beepersPresent()) {
			while (beepersPresent()) {
				pickBeeper();
				move();
				putBeeper();
				moveback();
			}
			move();
			doubleBeeper();

		}
	}

	public void moveback() {
		turnLeft();
		turnLeft();
		move();
		turnLeft();
		turnLeft();
	}

	public void doubleBeeper() {
		
		beeperDouble();
		
		

	}
	public void beeperDouble()
	{
		if (beepersPresent()) {
			while (beepersPresent()) {
				pickBeeper();
				turnLeft();
				turnLeft();
				move();
				putBeeper();
				putBeeper();
				turnLeft();	
				turnLeft();
				move();
				}
		}
	}	
}
			