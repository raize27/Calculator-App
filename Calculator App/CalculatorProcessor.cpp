#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "CalculatorProcessor.h"

static CalculatorProcessor* _processor;


CalculatorProcessor* CalculatorProcessor::GetInstance() {

	if (_processor == nullptr)
	{
		_processor = new CalculatorProcessor();
	}
	return _processor;

}


