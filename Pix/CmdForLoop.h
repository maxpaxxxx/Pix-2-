#pragma once
#include "Command.h"

class CmdForLoop :
    public Command
{
public:
	const char* GetName() override
	{
		return "for";
	}

	const char* GetDescription() override
	{
		return
			"for(n, x, y)\n"
			"\n"
			"- runs a command n amount of times."
			"\n"
			"- It starts drawing pixels from the given x and y and adds more to the right side n times.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

