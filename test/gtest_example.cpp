#include <gtest/gtest.h>
#include "example.cpp"

TEST(AddTest, Test1)
{
	    ASSERT_EQ(2, add(1, 1));
}
