#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s -> push(6);
  EXPECT_EQ(6, s -> peek());
  delete s;
}

TEST(StackTest, PushOutOfBounds) {
  Stack* s = new Stack();
  int max = 1000;
  for (int i = 0; i < max; ++i){
    s->push(i);
  }

  EXPECT_EQ(max - 1, s->peek());

  delete s;
}


