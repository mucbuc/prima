#include <iostream>
#include <tmp/src/test.h>
#include <tuple>

#include <lib/prima/src/primitive.h>

void run_primitive_tests()
{
    using namespace om636;
    using namespace std;

    primitive<int, int> p(make_tuple(0, 10));
    primitive<int, int, int, int> q(make_tuple(0, 11, 90, 110));

    ASSERT(width(q) == 90);
    ASSERT(height(q) == 99);

    FOOTER;
}

int main(int argc, const char* argv[])
{
    run_primitive_tests();
    return 0;
}