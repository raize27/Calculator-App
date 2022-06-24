#pragma once
#include <string>
#include "ICommand.h"

class DoMult : public ICommand
{
public:

	DoMult() {

	}

	int ExecuteMult(int number1, int number2)
	{
		int result = (number1 * number2);
		return result;
	}
	int Execute(int number1, int number2)
	{
		return ExecuteMult(number1, number2);
	}
};


