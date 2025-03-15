#include "question1.h"
#include <gtest/gtest.h>

TEST(FibSequenceTest, CorrectOutputForFive) {
    EXPECT_EQ(get_fib_sequence(5), "0 1 1 2 3 5");
}

TEST(FibSequenceTest, CorrectOutputForSeven) {
    EXPECT_EQ(get_fib_sequence(7), "0 1 1 2 3 5 8");
}

TEST(FibSequenceTest, CorrectOutputForTen) {
    EXPECT_EQ(get_fib_sequence(10), "0 1 1 2 3 5 8 13 21 34 55");
}

TEST(FibSequenceTest, CorrectOutputForTwelve) {
    EXPECT_EQ(get_fib_sequence(12), "0 1 1 2 3 5 8 13 21 34 55 89 144");
}

TEST(FibSequenceTest, EmptyStringForNonPositiveInput) {
    EXPECT_EQ(get_fib_sequence(0), "");
    EXPECT_EQ(get_fib_sequence(-5), "");
}
