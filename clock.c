#include<stdio.h>
#include <windows.h>

struct Clock {
	int hours;
	int mins;
	int secs;
};

void tick(struct Clock *c)
{
	c->secs += 1;

	if (c->secs > 59) 
	{ 
		c->mins += 1; 
		c->secs = 0; 
	}

	if (c->mins > 59) 
	{ 
		c->hours += 1; 
		c->mins = 0; 
	}

	if (c->hours > 12) 
	{ 
		c->hours = 1; 
		c->mins = 0; 
		c->secs = 0; 
	} 
}

void printClock(struct Clock c)
{
	printf("\n Clock");
	printf("\n%02d:%02d:%02d", c.hours, c.mins, c.secs);
}

void validate(struct Clock *c)
{
	if (c->hours > 12 || c->mins > 60 || c->secs > 60)
	{ 
		c-> hours = 0;
		c-> mins = 0;
		c-> secs = 0;
	} 
}

int main()
{
	struct Clock c = { 10, 12, 23 };
	validate(&c);
	
	while (1)
	{
		tick(&c);
		printClock(c);
		Sleep(1000);
	}
	return 0;
}
