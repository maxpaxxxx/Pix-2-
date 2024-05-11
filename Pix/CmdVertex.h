#pragma once

#include "Command.h"

class CmdVertex : public Command
{
public:
	const char* GetName() override
	{
		return "Vertex";
	}

	const char* GetDescription() override
	{
		return
			"AddVertex(x, y)\n"
			"AddVertex(x, y, z)\n"
			"AddVertex(x, y, r, g, b)\n"
			"AddVertex(x, y, z, r, g, b)\n"
			"\n"
			"- add vertex to the primitives manager before render.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
#pragma once
