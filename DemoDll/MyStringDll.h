#pragma once
#include <vector>
#include <string>
#define BUILD_MYSTRINGDLL

#ifdef BUILD_MYSTRINGDLL
#define API_SYMBOL __declspec(dllexport)
#else
#define API_SYMBOL __declspec(dllimport)
#endif // BUILD_MYSTRINGDLL

// 导出函数，需要dllexport有效，需要在头文件之前定义宏
extern "C++" API_SYMBOL std::vector<std::string> splitString(const std::string & vInput, char vSeperator);