#pragma once
#include "input.h"


int cliar(int input, int answer) 
{
	if (input == answer) 
	{
		ture();
	}
	
	else if(input > answer)
	{
		big();
	}
	else if(input < answer)
	{
		smorl();
	}
}



