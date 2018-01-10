#include "../src/Hello.cpp"
#include <gtest/gtest.h>

using namespace std;

TEST(HelloWordTest, isHelloWord) {

  Hello hello;

  ASSERT_EQ("Hello World", hello.sayHello() );
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}