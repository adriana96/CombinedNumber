#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
    CombinedNumber cn;
};

TEST_F(CombinedNumberTests, whenEmptyListIsGivenEmptyListShouldBeReturned)
{
    auto result = cn.constructGreatestNumber({});
    ASSERT_EQ(result, "");
}

TEST_F(CombinedNumberTests, when1IsGivenString1IsReturned)
{
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}

TEST_F(CombinedNumberTests, when1And1AreGivenString1And1IsReturned)
{
    auto result = cn.constructGreatestNumber({1,1});
    ASSERT_EQ(result, "11");
}
