#pragma once

#ifdef HZ_PLATFORM_WINODWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Halze only support windows!
#endif // HZ_BUILD_DLL
