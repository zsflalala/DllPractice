#pragma once
#include <vector>
#include <string>
#define BUILD_MYSTRINGDLL

#ifdef BUILD_MYSTRINGDLL
#define API_SYMBOL __declspec(dllexport)
#else
#define API_SYMBOL __declspec(dllimport)
#endif // BUILD_MYSTRINGDLL

// ������������Ҫdllexport��Ч����Ҫ��ͷ�ļ�֮ǰ�����
extern "C++" API_SYMBOL std::vector<std::string> splitString(const std::string & vInput, char vSeperator);