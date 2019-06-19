#pragma once

#ifdef HAZEL_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hazel Engine!\n");

	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_CORE_INFO("Hello! Var={0}", a);


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Hazel only supports Windows!
#endif
