#include <sstream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <tuple>

#define pb push_back

static const int binary = 0b00000111;

template <typename... T> auto foo(T&&... args)
{
    return std::make_tuple(args...);
}

void std_alg(const std::vector<int> &mylist) {
    auto res = std::vector<int>{};
    std::copy_if(mylist.begin(), mylist.end(), std::back_inserter(res), [](int x) {
        return x >= 0;
    });
}

auto lambda_adder(int amount) {
    return [=](int x) {
        return x + amount;
    };
}

void tuples()
{
    auto triple = std::make_tuple(5, 6, 7);
    auto triple2 = foo(5,6,7);
    std::cout << std::get<0>(triple) << std::endl;

    int x,y,z;

    std::tie(x, y, z) = triple;;
}

void uniform_initialization()
{
    auto mylist = std::vector<int>{1,2,3,4,5};
    mylist.pb(1);
    for (auto x : mylist)
        std::cout << x;
    
    auto mydict = std::unordered_map<int, const char*> { {5, "asdf"}, {6, "pre" } };
    std::cout << mydict[5] << std::endl;
}


int main(int argc, char *argv[])
{
    // Alternatives:
    // Could use function objects (functors)
    // You could use a function pointer

    // readability
    // express
    // local to your usages (no global function)

    // good examples are predicates for std algorithms
    // find/sort
    // for_each

    uint32_t x = 0;
    uint32_t y = 0;

    std::vector<uint32_t> v;
    auto print = [&]() {
        std::cout << "X: " << x << ", y: " << y << std::endl;
    };

    uint32_t i=5;
    while (i--) v.push_back(i);

    print();
    std::for_each(begin(v), end(v), [=] (uint32_t elem) mutable {
        x += elem;
        y += elem;
    });

    print();
    std::for_each(begin(v), end(v), [&] (uint32_t elem) mutable {
        x += elem;
        y += elem;
    });

    print();

    return 0;
}
