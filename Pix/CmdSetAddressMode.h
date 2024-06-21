#pragma once

#include "Command.h"

class CmdSetAddressMode : public Command
{
public:
	const char* GetName() override
	{
		return "SetAddressMode";
	}

	const char* GetDescription() override
	{
		return
			"SetAddressMode(<addressMode>)\n"
			"\n"
			"- Sets the address mode to render textures (clamp, wrap, mirror, border).";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
