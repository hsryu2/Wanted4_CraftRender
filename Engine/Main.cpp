#include "Core/Engine.h"


using namespace Craft;

// 엔진 실행 함수.
void LaunchEngineStartUp(HINSTANCE instance)
{
	Engine engine;
	engine.Initialize(instance);
	engine.Run();
}

//int main()
//{
//	
//}

int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nShowCmd)
{
    LaunchEngineStartUp(GetModuleHandle(nullptr));
    return 0;
}