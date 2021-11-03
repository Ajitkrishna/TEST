#include "pch.h"
#include "gtest/gtest.h"
#include "inchto.h"


TEST(TestInches, check1)
{
	convertTO t1;
	int a = 12;
	int b = 1;
	int c = t1.inchToFeet(a);
	ASSERT_EQ(b, c);
}

TEST(TestInches, check2)
{
	convertTO t1;
	int a = 120;
	int b = 12;
	int c = t1.inchToFeet(a);
	ASSERT_FALSE(b==c);
}



TEST(TestInches, check3)
{
	convertTO t1;
	int a = 120;
	int c = t1.inchToFeet(a);
	ASSERT_TRUE(c>0);
}