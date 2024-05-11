#pragma once

#include "Command.h"

class CmdSetCameraPosition : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraPosition";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraPosition(x, y, z)\n"
			"AddVertex(x, y, z)\n"
			"AddVertex(x, y, r, g, b)\n"
			"AddVertex(x, y, z, r, g, b)\n"
			"\n"
			"- add vertex to the primitives manager before render.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
#pragma once
