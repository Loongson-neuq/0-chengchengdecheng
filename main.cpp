#include ".assignment/test.h"
#include <algorithm>

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    result.min = a;
    result.mid = b;
    result.max = c;

    std::sort(&result.min,&result.max + 1);
}
