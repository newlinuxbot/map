#include "map.hpp"
#include "Pair.hpp"
#include <iostream>
#include <map>

using namespace std;

int main()
{ 
    ft::Pair <int,int> foo;
    ft::Pair <int,int> bar;

    foo = ft::make_pair (10,20);
    // bar = ft::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
//   std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

    return 0;
}