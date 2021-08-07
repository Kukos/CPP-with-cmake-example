#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <mathClass.hpp>

struct TestMathParams
{
    int a;
    int b;
    int res;
};

class TestMathClass : public ::testing::TestWithParam<TestMathParams>
{

};

TEST_P(TestMathClass, addParam)
{
    const auto& param = GetParam();
    MathClass mc {std::make_shared<Adder>(param.a, param.b)};
    EXPECT_EQ(mc.add(), param.res);
}

INSTANTIATE_TEST_SUITE_P(addParam, TestMathClass, ::testing::Values(
    TestMathParams{1, 1, 2},
    TestMathParams{10, -10, 0},
    TestMathParams{100, 0, 100}
));


// MOCK
class MockAdder : public Adder
{
public:
    MockAdder(int a, int b) :Adder{a, b} { }
    MOCK_CONST_METHOD0(add, int());
};

class TestMathMockClass : public ::testing::TestWithParam<TestMathParams>
{

};

TEST_P(TestMathMockClass, addParamMock)
{
    const auto& param = GetParam();
    std::shared_ptr<MockAdder> adder  = std::make_shared<MockAdder>(param.a, param.b);
    MathClass mc {adder};
    EXPECT_CALL(*adder, add()).Times(1).WillOnce(testing::Return(param.res));
    mc.add();
}

INSTANTIATE_TEST_SUITE_P(addParamMock, TestMathMockClass, ::testing::Values(
    TestMathParams{1, 1, 2},
    TestMathParams{10, -10, 0},
    TestMathParams{100, 0, 100}
));