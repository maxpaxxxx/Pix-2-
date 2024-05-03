#include "CmdForLoop.h"
#include "Rasterizer.h"

bool CmdForLoop::Execute(const std::vector<std::string>& params)
{
	if (params.size() < 3)
		return false;

	int n = stoi(params[0]);

	int positionX = stoi(params[1]);
	int positionY = stoi(params[2]);

	// Draw the pixel
	for (int i = 0; i < n; i++)
		Rasterizer::Get()->DrawPoint(positionX + i, positionY);
	return true;
}
