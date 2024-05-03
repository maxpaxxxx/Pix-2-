#pragma once

#include "Command.h"

class CmdDrawLine : public Command
{
public:
    const char* GetName() override
    {
        return "DrawLine";
    }

    const char* GetDescription() override
    {
        return
            "DrawLine(x1, y1, x2, y2)\n"
            "\n"
            "- Draws multiple pixels as a line from (x1 y1) to (x2, y2), must have x1 = x2 or y1 = y2";
    }

    bool Execute(const std::vector<std::string>& params) override;
};
