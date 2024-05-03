#include "CmdDrawPixels.h"
#include "Rasterizer.h"

bool CmdDrawPixels::Execute(const std::vector<std::string>& params)
{
    // Need pairs of params for x, y coordinates
    if (params.size() % 2 != 0)
        return false;

    Rasterizer* rasterizer = Rasterizer::Get();

    for (size_t i = 0; i < params.size(); i += 2)
    {
        int positionX = std::stoi(params[i]);
        int positionY = std::stoi(params[i + 1]);

        // Draw the pixel at each pair of coordinates
        rasterizer->DrawPoint(positionX, positionY);
    }

    return true;
}
