#pragma once
#include <string>
#include "cMain.h"
#include "ButtonFactory.h"

class CalculatorProcessor
{
private:

	CalculatorProcessor() {}

	static CalculatorProcessor* _processor;

public:

	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;

	void operator=(const CalculatorProcessor& other) = delete;

	std::string DoSum(int number1, int number2)
	{
		auto answer = number1 + number2;
		
		std::string result = std::to_string(answer);
		return result;
	}
	std::string DoMinus(int number1, int number2)
	{
		std::string result = std::to_string(number1 - number2);
		return result;
	}
	std::string DoMult(int number1, int number2)
	{
		std::string result = std::to_string(number1 * number2);
		return result;
	}
	std::string DoDiv(int number1, int number2)
	{
		std::string result = std::to_string(number1 / number2);
		return result;
	}
	std::string GetDecimal(int number1)
	{
		return std::to_string(number1);
	}
	std::string GetHexadecimal(int number1) 
	{
		std::string results = "";
		while (number1 > 0) 
		{
			int mod = number1 % 16;
			if (mod < 10)
			{
				results = std::to_string(mod) + results;
			}
			else if (mod == 10)
			{
				results = "A" + results;
			}
			else if (mod == 11)
			{
				results = "B" + results;
			}
			else if (mod == 12)
			{
				results = "C" + results;
			}
			else if (mod == 13)
			{
				results = "D" + results;
			}
			else if (mod == 14)
			{
				results = "E" + results;
			}
			else if (mod == 15)
			{
				results = "F" + results;
			}
			number1 = number1 / 16;
		}
		results = "0x" + results;

		return results;
	}
	std::string GetBinary(int number1)
	{
		std::string results = "";
		for (int i = 0; i < 28; i++)
		{
			if (number1 % 2 == 0)
			{
				results = "0" + results;
			}
			else
			{
				results = "1" + results;
			}
			number1 = number1 / 2;
		}
		return results;
	}
	std::string GetMod(int number1, int number2) 
	{
		std::string result = std::to_string(number1 % number2);
		return result;
	}
	std::string MakeNegative(int number1)
	{
		std::string result = std::to_string(number1 * -1);
		return result;
	}
};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

