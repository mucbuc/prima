#include <iostream>
#include <tuple>
#include <plank/src/test.h>

#include <lib/prime/src/primitive.h>

int main(int argc, const char * argv[])
{
    using namespace om636;
	using namespace std;

	primitive<int, int> p( make_tuple(0, 10) );
	primitive<int, int, int> q( make_tuple(0, 11, 90) );
	
	cout << p << ":" << q << endl;

	return 0;
}