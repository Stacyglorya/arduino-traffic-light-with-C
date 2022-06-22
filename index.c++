// C++ code

/*
 * The function of this code is to make a preemptive traffic light.
 * WRITTEN BY: Group A
 * VERSION 1.0
 * DATE: 22/JUNE/2022
 */

// declare and assign variables to their terminals
int Red = 12;
int Yellow = 9;
int Green = 5;

void setup()
{
  pinMode(Red, OUTPUT); // This means that Red is connected to pin12 of arduino board
  pinMode(Yellow, OUTPUT); // This means that Yellow is connected to pin9 of arduino board
  pinMode(Green, OUTPUT); // This means that Green is connected to pin5 of arduino board
}

void loop()
{
  //  Red light starts glowing
  digitalWrite(Red, HIGH);
  delay(3000); // Wait for 3 seconds)
  digitalWrite(Red, LOW); //switches OFF the Red LED
  delay(10);// Wait for 10 millisecond(s)

  //Yellow light starts glowing
  digitalWrite(Yellow, HIGH);
  delay(1000); // Wait for 1 second
  digitalWrite(Yellow, LOW);//switches OFF the Yellow LED

  //Yellow light starts glowing:
  digitalWrite(Green, HIGH);
  delay(3000); // Wait for 3 seconds
  digitalWrite(Green, LOW);//Switches OFF the Green LED
  delay(10);// Wait for 10 millisecond(s)

}