#pragma once
#include <string>
#include "ICommand.h"

class DoSum : public ICommand 
{
public:

	DoSum() {

	}

	int ExecuteSum(int number1, int number2) 
	{
		int result = (number1 + number2);
		return result;
	}
	int Execute(int number1, int number2)
	{
		return ExecuteSum(number1, number2);
	}
};

