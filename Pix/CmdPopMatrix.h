#pragma once

#include "Command.h"

class CmdPopMatrix : public Command
{
public:
	const char* GetName() override
	{
		return "PopMatrix";
	}

	const char* GetDescription() override
	{
		return
			"PushTranslation(x, y, z)\n"
			"\n"
			"- add vertex to the primitives manager before render.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
