#include <gtest/gtest.h>
#include "sample.h"
#include<iostream>
using namespace std;

TEST(ISEvenTest, AssertPositive){
    ASSERT_FALSE(IsEven(1));
    cout << "中断により，この文字列は出力されない" << endl;
    ASSERT_TRUE(IsEven(2));
}

TEST(IsEvenTest,ExpectPositive){
    EXPECT_FALSE(IsEven(1));
    cout << "続行のため、この文字列は出力される" << endl;
    EXPECT_TRUE(IsEven(2));
}

