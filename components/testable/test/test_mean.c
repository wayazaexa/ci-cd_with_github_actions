#include <limits.h>

#include "unity.h"
#include "testable.h"

#define countof(x) (sizeof(x) / sizeof((x)[0]))

TEST_CASE("testable_mean returns zero for an empty input", "[testable]")
{
    const int values[] = { 0 };
    TEST_ASSERT_EQUAL(0, testable_mean(values, 0));
}

TEST_CASE("testable_mean returns the mean of a vector", "[testable]")
{
    const int values[] = { 1, 3, 5, 7, 9 };
    TEST_ASSERT_EQUAL(5, testable_mean(values, countof(values)));
}

TEST_CASE("testable_mean handles integer overflow", "[testable][fails]")
{
    const int values[] = { INT_MAX, INT_MAX, INT_MAX, INT_MAX };
    TEST_ASSERT_EQUAL(INT_MAX, testable_mean(values, countof(values)));
}
