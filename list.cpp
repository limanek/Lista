#include <iostream>
#include <vector>
#include <list>

int main() {
    std::list<int> list {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << list.front() << std::endl;
    std::cout << list.back() << std::endl;
    return 0;
}
