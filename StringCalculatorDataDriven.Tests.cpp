#include "StringCalculator.h"
#include <gtest/gtest.h>
class TestDataPair{
public:
  string input;
  int expectedValue;
  TestDataPair(string_input,int_expectedValue) : input{_input}, expectedValue{_expectedValue}{
  }
};

TEST(StringCalculatorDataDrivenTestSuite,DataDrivenTestCase){
  vector<TestDataPair>dataList;
  TestDataPair pair_one {"",0};
  TestDataPair pair_two {"0",0};
  TestDataPair pair_three{"",0};
  TestDataPair pair_four {"1,2",3};
  TestDataPair pair_five {"1,2,3",6};
  dataList.push_back(pair_one);
  dataList.push_back(pair_two);
  dataList.push_back(pair_three);
  dataList.push_back(pair_four);
  dataList.push_back(pair_five);
  // Iterate using a range-based for loop
    for(TestDataPair DataPair : DataList){
    int actualValue=Add(datapair.input);
  ASSERT_EQ(actualValue,datapair.expectedValue);
}
}
