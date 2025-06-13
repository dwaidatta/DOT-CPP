#include <iostream>

namespace first {
    int x = 10;
}

namespace second {
    int x = 20;
}

namespace test101 {
    int y = 555;
}


int main(){

    /*
        NAMESPACE

        provides a solution for preventing name conflicts
        every entity needs a unique name
        namespace allows indetically named entities as long as namespaces are different
    */

    using namespace test101;

    int x = 0;

    std::cout << x <<'\n'; // local x
    std::cout << first::x <<'\n'; // namespace -> first
    std::cout << second::x <<'\n'; // namespace -> second

    std::cout << y <<'\n'; // namespace -> test101 already specified -> using namespace test101

    
    return 0;
}
