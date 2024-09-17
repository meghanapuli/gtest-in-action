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
