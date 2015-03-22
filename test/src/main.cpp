#include <iostream>
#include <tuple>
#include <plank/src/test.h>

#include <lib/prime/src/point.h>

int main(int argc, const char * argv[])
{
    using namespace om636;
	using namespace std;

	point<int, int> p( std::make_tuple(0, 10) );
	point<int, int, int> q( std::make_tuple(0, 11, 90) );
	
	cout << p << ":" << q << endl;

	return 0;
}