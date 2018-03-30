#include<avr/io.h>
#include<util/delay.h>
#define on MyLeds
#define On MyLeds1
void MyLeds(int x, int y)
{

	DDRD=1<<y;
	PORTD=1<<y;
	DDRC=1<<x;
    _delay_ms(0.00001);
    PORTD&=0;
}
void MyLeds1(int x, int y)
{

	DDRD=1<<y;
	PORTD=1<<y;
	DDRC=1<<x;
    _delay_ms(2);
    PORTD&=0;
}
void move()
{
	//center is (4,3
	for( int i=9;i>=-2;i--)
	{
		on(3,i-2);
		on(4,i-2);
		on(5,i-2);
		on(6,i-2);
		on(2,i-1);
		on(2,i);
		on(2,i+1);
		on(2,i+2);
		on(3,i+2);
		on(4,i+2);
		on(5,i+2);
		on(6,i+2);
		on(5,i-2);
		on(5,i-1);
		on(5,i);
		on(5,i+1);
		on(5,i+2);
	}
	for(int j=9;j>=-2;j--)
	{
		On(1,j-2);
		On(1,j-1);
		On(1,j);
		On(1,j+1);
		On(1,j+2);
		On(2,j);
		On(3,j);
		On(4,j);
		On(5,j);
	}
}

int main()
{

	while(1)
	{
		move();
	}

	return 1;
}
