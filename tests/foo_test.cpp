#include <foo/foo.hpp>
#include <gtest/gtest.h>

GTEST_TEST(fooTestSuite1, fooTest1)
{
    EXPECT_EQ(foo(1), 1);
    EXPECT_EQ(foo(2), 4);
    EXPECT_EQ(foo(5), 25);
}