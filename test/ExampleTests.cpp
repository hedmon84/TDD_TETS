#include <gtest/gtest.h>
#include "../Example.hpp"
// bool f()
// {
//     return false;
// }

TEST(ExampleTests, MAC)
{
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldsum = sum;
    int expectedNewSum = oldsum + x * y;
    // EXPECT_TRUE(true);

    EXPECT_EQ(

        oldsum + x * y,
        MAC(x, y, sum)

    );

    EXPECT_EQ(

        expectedNewSum,
        sum

    );

    // const bool result = f();
    // EXPECT_EQ(true, result) << "hello , world";
}

TEST(ExampleTests, Square)
{
    int x = 5;
    int expectedSquare = x * x;

    EXPECT_EQ(
        expectedSquare,
        Square(x)

    );
}