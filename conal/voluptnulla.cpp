#include <iostream>
#include <vector>

int main() {
    std::vector<int> items = {10, 20, 30, 40, 50};
    int mark;
    for (size_t i = 0; i < items.size(); ++i) {
        mark = items[i];
        std::cout << "mark is now: " << mark << std::endl;
    }
    return 0;
}
