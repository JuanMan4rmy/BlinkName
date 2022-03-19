
const pin_t MY_LED = D7;


SYSTEM_THREAD(ENABLED);


void setup()
{

	pinMode(MY_LED, OUTPUT);
}


void Dit() 
{
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    digitalWrite(MY_LED, LOW);
    delay(250ms);
}
    

void Dah() 
{
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
}


void N() 
{
    Dah();
    Dit();
}


void I() 
{
    Dit();
    Dit();
}


void T() 
{
    Dah();
}


void loop()
{
	N();
	I();
	T();
	I();
	N();
	delay(2s);
}