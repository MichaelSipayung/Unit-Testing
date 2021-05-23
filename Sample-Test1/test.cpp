#include "pch.h"
#include <iostream>
int Factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
TEST(FactorialTest, HandlesZeroInput) {
	EXPECT_EQ(Factorial(0), 1);
	//EXPECT_EQ(Factorial(1), 100);

}
TEST(FactorialTest, HandlesPositiveInput) {
	EXPECT_EQ(Factorial(1), 1);
	EXPECT_EQ(Factorial(2), 2);
	EXPECT_EQ(Factorial(3), 6);
	//EXPECT_EQ(Factorial(8), 4038820);
}

