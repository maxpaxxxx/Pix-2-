#include "Graphics.h"

#include "Viewport.h"
#include "Clipper.h"
#include "Camera.h"
#include "MatrixStack.h"
#include "PrimitivesManager.h"
#include "DepthBuffer.h"
#include "LightManager.h"
#include "MaterialManager.h"
#include "PostProcessing.h"

void Graphics::NewFrame()
{
	Viewport::Get()->OnNewFrame();
	Clipper::Get()->OnNewFrame();
	Camera::Get()->OnNewFrame();
	MatrixStack::Get()->OnNewFrame();
	PrimitivesManager::Get()->OnNewFrame();
	DepthBuffer::Get()->OnNewFrame();
	LightManager::Get()->OnNewFrame();
	MaterialManager::Get()->OnNewFrame();
	PostProcessing::Get()->OnNewFrame();
}