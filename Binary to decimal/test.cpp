#include "pch.h"
#include "gtest/gtest.h"
#include "conv.h"

TEST(numberconv, check1)
{
	conv t1;
	int a = 4;
	int c = 100;
	int b = t1.binaryToDecimal(c);
	EXPECT_TRUE(a==b);
	cout << "Decimal of " << c << ":" << b;
}

TEST(numberconv, check2)
{
	conv t1;
	int a = 8;
	int c = 1000;
	int b = t1.binaryToDecimal(c);
	EXPECT_EQ(a, b);
	cout << "Decimal of " << c << " : " << b;
}

TEST(numberconv, check3)
{
	conv t1;
	int a = 20;
	int c = 1000;
	int b = t1.binaryToDecimal(c);
	EXPECT_FALSE(a==b);
	cout << "Decimal of " << c << " : " << b;
}

TEST(numberconv, check4)
{
	conv t1;
	int a = 15;
	int c = 1111;
	int b = t1.binaryToDecimal(c);
	EXPECT_EQ(a, b);
	cout << "Decimal of " << c << ":" << b;
}