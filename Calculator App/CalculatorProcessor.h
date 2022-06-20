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
};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

