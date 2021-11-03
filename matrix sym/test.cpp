#include "pch.h"
#include "gtest/gtest.h"
#include "matrix.h"

TEST(symmetricMat,check1)
{
	matrix m;
	ASSERT_TRUE(m.checkSym());
}