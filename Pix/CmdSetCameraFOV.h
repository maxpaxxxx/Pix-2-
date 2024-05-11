#pragma once

#include "Command.h"

class CmdSetCameraFOV : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraFOV";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraFOV(fov)\n"
			"\n"
			"- sets the fov of the camera";
	}

	bool Execute(const std::vector<std::string>& params) override;
};
#pragma once
