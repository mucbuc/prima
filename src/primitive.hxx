namespace om636 {
/////////////////////////////////////////////////////////////////////////////////////////////
template <class... T>
typename std::tuple_element<0, typename primitive<T...>::value_type>::type width(const primitive<T...>& p)
{
    using namespace element;
    ASSERT(p[kright] >= p[kleft]);
    return p[kright] - p[kleft];
}

/////////////////////////////////////////////////////////////////////////////////////////////
template <class... T>
typename std::tuple_element<1, typename primitive<T...>::value_type>::type height(const primitive<T...>& p)
{
    using namespace element;
    ASSERT(p[kbottom] >= p[ktop]);
    return p[kbottom] - p[ktop];
}
}
