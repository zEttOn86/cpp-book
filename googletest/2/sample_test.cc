#include <gtest/gtest.h>
#include "sample.h"

TEST(ISEvenTest, Negative){
    EXPECT_FALSE(IsEven(-1));
    EXPECT_TRUE(IsEven(-2));
}

TEST(ISEvenTest, Zero){
    EXPECT_TRUE(IsEven(0));
}

TEST(IsEvenTest, Positive){
    EXPECT_FALSE(IsEven(1));
    EXPECT_TRUE(IsEven(2));
}

