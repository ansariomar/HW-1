// simple piezo speaker tone
// speaker is attached to pin A5 and analog ground

int piezoPin = A5;

void setup() {

}//close setup

// delay time must be at least 2x the length of duration of tone in order to hear audible pause between multiple tones
// lowest accurate tone possible is 31 hz although values are unsigned integers audible from 0 to 65,535
// cannot use analogWrite() on pin # 3 & 11 while using the tone function because tone function uses the same built-in timer that analog write uses for pin # 3 & 11

void loop() {

  /*tone needs 2 arguments to work, but can take three
     1) Pin#
     2) Freq - value in hertz
  */

  //create a tone
  tone(piezoPin, 100, 500);

  delay (1000);

  tone(piezoPin, 31 , 500);

  delay (1000);

}


