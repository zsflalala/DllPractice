#include "pch.h"
#include "MyStringDll.h"

std::vector<std::string> splitString(const std::string& vInput, char vSeperator)
{
	std::vector<std::string> result;
	int subIndex = 0;
	for (int i = 0; i < vInput.size(); i++)
	{
		if (vInput[i] == vSeperator) {
			result.push_back(vInput.substr(subIndex, i - subIndex));
			subIndex = i + 1;
		}
	}
	result.push_back(vInput.substr(subIndex));
	return result;
}
