#include "pch.h"
#include "gtest/gtest.h"
#include "time1.h"


TEST(TestTime, Time0)
{
	Time t1;
	Time t2;
	EXPECT_TRUE(t1.hour == t2.hour);
	EXPECT_TRUE(t1.minute == t2.minute);
	EXPECT_TRUE(t1.second == t2.second);

	t1.print();
	t2.print();
}
TEST(TestTime, Time1) 
{
	Time t1;
	Time t2(1, 15, 30);
    EXPECT_FALSE(t1.hour==t2.hour);
    EXPECT_FALSE(t1.minute == t2.minute);
    EXPECT_FALSE(t1.second== t2.second);

    t1.print();
    t2.print();
}
TEST(TestTime, Time2)
{
	Time t1(12,15,30);
	Time t2(12, 15, 30);
	EXPECT_TRUE(t1.hour == t2.hour);
	EXPECT_TRUE(t1.minute == t2.minute);
	EXPECT_TRUE(t1.second == t2.second);

	t1.print();
	t2.print();
}