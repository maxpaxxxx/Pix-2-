#pragma once

#include "Command.h"

class CmdSetCameraDirection : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraDirection";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraDirection(x, y, z)\n"
			"AddVertex(x, y, z)\n"
			"AddVertex(x, y, r, g, b)\n"
			"AddVertex(x, y, z, r, g, b)\n"
			"\n"
			"- add vertex to the primitives manager before render.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
#pragma once
