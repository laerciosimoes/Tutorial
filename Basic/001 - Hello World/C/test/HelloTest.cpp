#include "../src/Hello.c"
#include <gtest/gtest.h>

TEST(HelloWordTest, isHelloWord) {


  ASSERT_EQ("Hello World", sayHello() );
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
