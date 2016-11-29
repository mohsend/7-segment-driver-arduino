void setup() {
	int clock = 7; // pin number to clock
	int data = 8; // pin number to data
	seg = sevenSegment(int clock, int data); 
}

void loop {
	// show numbers from -5 to 34
	for (int i = -5; i < 35; i++) {
		seg.showHex (i);
		delay(500);
	}
	
	// to show arbitrary sign send byte
	seg.sendByte(0x12);
	delay(2000);
}