#ifndef POINT_H_OWSYPK34G9D7K3
#define POINT_H_OWSYPK34G9D7K3

#include <lib/context/src/interface.h>
#include <lib/numbro/src/vec.h>

namespace om636
{
	
    template<class ... T>
    using point = om636::vec< std::tuple< T ... > >;
}

#include "point.hxx"

#endif // POINT_H_OWSYPK34G9D7K3