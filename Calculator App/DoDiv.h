#pragma once
#include <string>
#include "ICommand.h"
#include <sstream>
#include <iostream>

class DoDiv : public ICommand
{
public:


	DoDiv() {

	}

	int ExecuteDiv(int number1, int number2)
	{
		try
		{
			if (number2 != 0)
			{
				int result = (number1 / number2);
				return result;
			}
			else throw number2;
		}
		catch (...)
		{
			return MAXINT;
		}
	}
	int Execute(int number1, int number2)
	{
		return ExecuteDiv(number1, number2);
	}
};

