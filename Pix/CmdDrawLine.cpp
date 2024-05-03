#include "CmdDrawLine.h"
#include "Rasterizer.h"

bool CmdDrawLine::Execute(const std::vector<std::string>& params)
{
    if (params.size() != 4)
        return false;

    int x1 = std::stoi(params[0]);
    int y1 = std::stoi(params[1]);
    int x2 = std::stoi(params[2]);
    int y2 = std::stoi(params[3]);

    Rasterizer* rasterizer = Rasterizer::Get();

    if (x1 == x2) {
        if (y1 > y2)
            std::swap(y1, y2);

        for (int y = y1; y <= y2; ++y) {
            rasterizer->DrawPoint(x1, y);
        }
    }
    else if (y1 == y2) {
        if (x1 > x2)
            std::swap(x1, x2);

        for (int x = x1; x <= x2; ++x) {
            rasterizer->DrawPoint(x, y1);
        }
    }
    else {
        return false;
    }

    return true;
}
