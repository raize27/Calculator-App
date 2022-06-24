#pragma once
#include <string>
#include "ICommand.h"

class DoMinus : public ICommand
{
public:

	DoMinus() {

	}

	int ExecuteMinus(int number1, int number2)
	{
		int result = (number1 - number2);
		return result;
	}
	int Execute(int number1, int number2)
	{
		return ExecuteMinus(number1, number2);
	}
};

