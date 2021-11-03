#include "pch.h"
#include "gtest/gtest.h"
#include "stringckeck.h"

TEST(stringtest, check1) 
{
	stringCheck s;
	string s1, s2;
	s1 = "helloWorld";
	s2 = "hello";
	EXPECT_TRUE(s.checkString(s1, s2));
	
}


TEST(stringtest, check2)
{
	stringCheck s;
	string s1, s2;
	s1 = "helloWorld";
	s2 = "HELLO";
	EXPECT_FALSE(s.checkString(s1, s2));

}

TEST(stringtest, check3)
{
	stringCheck s;
	string s1, s2;
	s1 = "youngjustice";
	s2 = "justiceleague";
	EXPECT_FALSE(s.checkString(s1, s2));

}
TEST(stringtest, check4)
{
	stringCheck s;
	string s1, s2;
	s1 = "Myname";
	s2 = "name";
	EXPECT_TRUE(s.checkString(s1, s2));

}