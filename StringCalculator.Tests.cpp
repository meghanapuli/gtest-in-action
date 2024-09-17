#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculator.TestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
  string input="";
  int expectedValue=0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue,expectedValue);
}
