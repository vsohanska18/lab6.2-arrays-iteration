#include <gtest/gtest.h>

int sum_min_max(int a[], int n);

// Тест 1: звичайний масив
TEST(SumMinMaxTest, NormalArray)
{
    int a[20] = {
        5, -3, 10, 2, 7, 8, -6, 12, 4, 1,
        15, -8, 3, 9, 6, 11, -2, 14, 0, 20
    };

    EXPECT_EQ(sum_min_max(a, 20), 12);
}

// Тест 2: усі числа однакові
TEST(SumMinMaxTest, EqualElements)
{
    int a[20] = {
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4
    };

    EXPECT_EQ(sum_min_max(a, 20), 8);
}

// Тест 3: від'ємні та додатні числа
TEST(SumMinMaxTest, NegativeAndPositiveNumbers)
{
    int a[20] = {
        -10, 5, -3, 20, 8, -15, 7, 12, -6, 4,
        9, -2, 16, 3, -8, 11, 6, -4, 14, 1
    };

    EXPECT_EQ(sum_min_max(a, 20), 5);
}

// Тест 4: усі числа від'ємні
TEST(SumMinMaxTest, AllNegativeNumbers)
{
    int a[20] = {
        -5, -3, -10, -2, -7, -8, -6, -12, -4, -1,
        -15, -9, -13, -11, -16, -14, -18, -17, -19, -20
    };

    EXPECT_EQ(sum_min_max(a, 20), -21);
}