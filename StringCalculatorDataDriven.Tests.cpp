#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <vector>
class TestDataPair{
public:
  string input;
  int expectedValue;
  TestDataPair(string _input,int _expectedValue) : input{_input}, expectedValue{_expectedValue}{
  }
};
class StringCalculatorDataDrivenFixture:public testing::Test{
protected:
  vector<TestDataPair*> datalist;
//before each testcase
void SetUp(){
  datalist.push_back(new TestDataPair {"",0});
  datalist.push_back(new TestDataPair {"0",0});
  datalist.push_back(new TestDataPair {"1",1});
  datalist.push_back(new TestDataPair {"1,2",3});
  datalist.push_back(new TestDataPair {"1,2,3",6});
}
// after each test case
void TearDown(){
  
};

TEST_F(StringCalculatorDataDrivenFixture,DataDrivenTestCase){
  for(TestDataPair* dataPairPtr :datalist){
   int actualValue=Add(dataPairPtr->input);
        ASSERT_EQ(actualValue,dataPairPtr->expectedValue);
    }
}


TEST(StringCalculatorDataDrivenTestSuite,DataDrivenTestCase){
  // vector<TestDataPair>datalist;
  TestDataPair pair_one {"",0};
  TestDataPair pair_two {"0",0};
  TestDataPair pair_three {1,1};
  TestDataPair pair_four {"1,2",3};
  TestDataPair pair_five {"1,2,3",6};
  
  dataList.push_back(pair_one);
  dataList.push_back(pair_two);
  dataList.push_back(pair_three);
  dataList.push_back(pair_four);
  dataList.push_back(pair_five);
  // Iterate using a range-based for loop
    for(TestDataPair DataPair : datalist){
        int actualValue=Add(DataPair.input);
        ASSERT_EQ(actualValue,DataPair.expectedValue);
    }
  
}
