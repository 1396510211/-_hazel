#pragma once
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreatApplication();
#include <iostream>
int main(int argc,char** argv) {
	std::cout << "hello";
	auto app = Hazel::CreatApplication();
	app->run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS
