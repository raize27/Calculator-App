#pragma once
#include <string>
class ICommand
{
public:

	virtual int Execute(int number1, int number2) = 0;

};

