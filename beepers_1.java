import stanford.karel.*;

public class beepers_1 extends Karel {
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
		int k = 0;
		if (beepersPresent()) {
			while (beepersPresent()) {
				pickBeeper();
				k++;
			}
			while (k > 0) {
				putBeeper();
				putBeeper();
				k--;

			}
		}
	}

}
