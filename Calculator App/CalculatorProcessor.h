#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "cMain.h"
#include "ButtonFactory.h"
#include "ICommand.h"
#include <vector>
//#include "CalculatorProcessor.cpp"


class CalculatorProcessor
{
private:

	//static CalculatorProcessor* _processor;

	int _number1 = 0, _number2 = 0, _operator = 0;

public:
	CalculatorProcessor() {	}
	std::vector<ICommand*> commands;
	std::vector<int> numbers;
	//static CalculatorProcessor* GetInstance();
	static CalculatorProcessor* GetInstance();
	/*{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}*/

	CalculatorProcessor(CalculatorProcessor& other) = delete;

	void operator=(const CalculatorProcessor& other) = delete;

	//Getters

	int GetNumber1()
	{
		return _number1;
	}
	int GetNumber2()
	{
		return _number2;
	}
	int GetOperator()
	{
		return _operator;
	}

	//Setters

	void SetNumber1(int number1)
	{
		_number1 = number1;
	}
	void SetNumber2(int number2)
	{
		_number2 = number2;
	}
	void SetOperator(int operators)
	{
		_operator = operators;
	}

	std::string DoSum()
	{
		std::string result = std::to_string(_number1 + _number2);
		return result;
	}
	std::string DoMinus()
	{
		std::string result = std::to_string(_number1 - _number2);
		return result;
	}
	std::string DoMult()
	{
		std::string result = std::to_string(_number1 * _number2);
		return result;
	}
	std::string DoDiv()
	{
		std::string result = std::to_string(_number1 / _number2);
		return result;
	}
	std::string GetDecimal()
	{
		return std::to_string(_number1);
	}
	std::string GetHexadecimal()
	{
		std::string results = "";
		while (_number1 > 0)
		{
			int mod = _number1 % 16;
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
			_number1 = _number1 / 16;
		}
		results = "0x" + results;

		return results;
	}
	std::string GetBinary()
	{
		std::string results = "";
		for (int i = 0; i < 28; i++)
		{
			if (_number1 % 2 == 0)
			{
				results = "0" + results;
			}
			else
			{
				results = "1" + results;
			}
			_number1 = _number1 / 2;
		}
		return results;
	}
	std::string GetMod()
	{
		std::string result = std::to_string(_number1 % _number2);
		return result;
	}
	std::string MakeNegative()
	{
		std::string result = std::to_string(_number1 * -1);
		return result;
	}

	//CalculatorProcessor* CalculatorProcessor::_processor = nullptr;
};



