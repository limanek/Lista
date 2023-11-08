#include <iostream>
#include <vector>
#include <list>

std::list<int> allTab;

void lista() {
    std::list<int> lista {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << lista.front() << std::endl;
    std::cout << lista.back() << std::endl;
    auto it = lista.begin();
    for (size_t i = 0; i < 9; i++){
        ++it;
    }
    std::cout << *it << std::endl;
}

std::list<int> createSortedList(std::vector<int> tab) {
    for(size_t i = 0; i < tab.size(); i++) {
        allTab.push_back(tab[i]);
        allTab.sort();
    }
    return allTab;
}

void task1() {
    // Implement createSortedList   
    // add proper include :)int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list) {
        std::cout << el << " ";
    }

}

void start() {
    lista();
    task1();
}

int main() {
    start();
    return 0;
}
