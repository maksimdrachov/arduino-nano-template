// Copyright (c) 2023  Zubax Robotics  <info@zubax.com>

#include <assert.h>

static void test_function_1(void)
{
    assert(1 == 1);
}

static void test_function_2(void)
{
    assert(2 == 2);
}

int main()
{
    test_function_1();
    test_function_2();
    return 0;
}