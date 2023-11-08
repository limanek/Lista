#include <iostream>
#include <vector>
#include <list>

void lista() {
    std::list<int> list {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << list.front() << std::endl;
    std::cout << list.back() << std::endl;
    auto it = list.begin();
    for (size_t i = 0; i < 9; i++){
        ++it;
    }
    std::cout << *it << std::endl;
}

void start() {
    lista();
}

int main() {
    start();
    return 0;
}
