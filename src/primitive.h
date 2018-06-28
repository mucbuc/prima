/* 
 objective:
    collection of simple "geometric" primitives: 
        - point: 2 dimensional vector 
        - rect: has noting to do with a rectangle, vertical and horizontal range, right >= left, top >= bottom
            currently rect is implemented as a matrix, i think it should be a vector of ranges. 
 */

#ifndef PRIMITIVE_H_HLMMPPD6837764
#define PRIMITIVE_H_HLMMPPD6837764

#include <tuple>

#include <lib/context/src/interface.h>
#include <lib/numbro/src/range.h>
#include <lib/numbro/src/vec.h>

namespace om636 {
template <class... T>
using primitive = om636::context<std::tuple<T...>, om636::vec>;

namespace element {
    static index<0> kx;
    static index<1> ky;
    static index<0> kleft;
    static index<1> ktop;
    static index<2> kright;
    static index<3> kbottom;
}

template <typename... T>
typename std::tuple_element<0, typename primitive<T...>::value_type>::type width(const primitive<T...>&);

template <typename... T>
typename std::tuple_element<1, typename primitive<T...>::value_type>::type height(const primitive<T...>&);

template <class... T>
bool contains(const primitive<T...>&, const primitive<T...>&);

template <class... T, class... U>
bool contains(const primitive<T...>&, const primitive<U...>&);

} // om636

#include "primitive.hxx"

#endif // PRIMITIVE_H_HLMMPPD6837764
