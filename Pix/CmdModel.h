#pragma once

#include "Command.h"

class CmdModel : public Command
{
public:
	const char* GetName() override
	{
		return "Model";
	}

	const char* GetDescription() override
	{
		return
			"Model(fileName)\n"
			"\n"
			"- loads a model as vertices";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
