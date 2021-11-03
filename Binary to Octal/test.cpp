#include "pch.h"
#include "gtest/gtest.h"
#include "oct.h"

TEST(binarytooctal,check1)
{
	convert t1;
	int a = 10001;
	int b = 21;
	int c = t1.binaryToOctal(a);
	EXPECT_EQ(b, c);
}

TEST(binarytooctal, check2)
{
	convert t1;
	int a = 1000;
	int b = 10;
	int c = t1.binaryToOctal(a);
	EXPECT_EQ(b, c);
}

TEST(binarytooctal, check3)
{
	convert t1;
	int a = 111111;
	int b = 70;
	int c = t1.binaryToOctal(a);//should be 77
	EXPECT_EQ(b, c);
}
