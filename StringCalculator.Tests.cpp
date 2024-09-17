#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
  string input="";
  int expectedValue=0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_oneInputString_SameIsExpected){
string input="5";
int expectedValue=5;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_ZeroInputString_ZeroIsExpected){
  string input="0";
  int expectedValue=0;
  int actualValue=Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_twocomma_numbers_SumIsExpected){
  string input="1,2";
  int expectedValue=3;
  int actualValue=Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_Multiple_comma_numbers_SumIsExpected){
  string input="1,2,3,4";
  int expectedValue=10;
  int actualValue=Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_negativenumber_SumIsExpected){
  string input="1,-3,4";
  int expectedValue=2;
  int actualValue=Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}



