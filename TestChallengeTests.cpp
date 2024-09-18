#include <gtest/gtest.h>
#include "TestChallenge.h"
#include<gmock/gmock.h>

//Stub - Fake Dependency
class NetworkAlerterStub:public INetworkAlerter{
public:
      int  alert(float celcius) override{
          return 500;
      }

};

// mock implemantion
class NetworkAlertMock::public INetworkAlerter{
public:
            MOCK_METHOD(int ,alert,(float celcius));
};
TEST(NetworkAlerterTestSuite,StateBasedTest){
  NetworkAlerterStub stub;
    int failureCount=  alertInCelciusFacade(400,&stub);
    ASSERT_EQ(failureCount,1);
}
