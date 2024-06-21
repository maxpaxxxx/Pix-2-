#pragma once

#include "Command.h"

class CmdVarBool : public Command
{
public:
	const char* GetName() override
	{
		return "bool";
	}

	const char* GetDescription() override
	{
		return
			"Declares a bool variable.\n"
			"\n"
			"syntax: float $<name> = <value>, <speed>, <min>, <max>\n"
			"\n"
			"e.g.\n"
			"  float $angle = 3.14\n"
			"  float $color = 0.47, 0.01, 0, 1\n";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
