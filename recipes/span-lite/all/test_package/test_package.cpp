#include "nonstd/span.hpp"
#include <array>
#include <vector>
#include <iostream>

std::ptrdiff_t size( nonstd::span<const int> spn )
{
    return spn.size();
}

int main()
{
    int arr[] = { 1, };
    
    std::cout << 
        "C-array:" << size( arr ) <<
#if span_CPP11_OR_GREATER
        " array:"  << size( std::array <int, 2>{ 1, 2, } ) <<
#endif        
        " vector:" << size( std::vector<int   >( 3, 0)   );
        
    return 0;
}