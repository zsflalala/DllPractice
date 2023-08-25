#include "pch.h"
#include "MyStringDll.h"

TEST(SpringTestCase, NormalSplit1)
{
	std::vector<std::string> res{"dadf", "sdfe", "few"};
	std::vector<std::string> testRes = splitString("dadf,sdfe,few", ',');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, NormalSplit2)
{
	std::vector<std::string> res{"z", "", "s", "", "f"};
	std::vector<std::string> testRes = splitString("z,,s,,f", ',');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, EmptySplit1)
{
	std::vector<std::string> res{"", "", "Hello", "World!"};
	std::vector<std::string> testRes = splitString("  Hello World!", ' ');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, EmptySplit2)
{
	std::vector<std::string> res{"", "", "", "", ""};
	std::vector<std::string> testRes = splitString("    ", ' ');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, EmptyString)
{
	std::vector<std::string> res{""};
	std::vector<std::string> testRes = splitString("", ',');
	ASSERT_EQ(res, testRes);
}