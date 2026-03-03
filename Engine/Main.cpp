#include "Core/Engine.h"
using namespace Craft;

// 엔진 실행 함수.
void LaunchEngineStartup(HINSTANCE instance)
{
	Engine engine;
	engine.Initialize(instance);
	engine.Run();
}

int main()
{
	LaunchEngineStartup(GetModuleHandle(nullptr));
}