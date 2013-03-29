#include <gtest/gtest.h>
#include <boost/random.hpp>

TEST(turn_tests, uniform_rect)
{
   boost::mt19937 gen;
   boost::bernoulli_distribution<> coin;

   size_t res = 0;
   for (size_t l = 0; l != 50000; ++l)
      if (coin(gen))
         ++res;

   EXPECT_TRUE(res);
}

int main(int argc, char ** argv)
{
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
