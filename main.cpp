#include <iostream>
#include <vector>
#include <memory>
#include <unordered_set>

int main() {

    //Task 1:
    for (auto i : {1, 2, 3, 4, 5})
    {
        std::cout << i << " ";
    }

    //Task 2:
    std::vector<int> numberVector {1, 2, 3, 4, 2, 4, 5, 7, 6, 8, 6};
    auto getUnique = [&](auto i)->std::unique_ptr<std::vector<int>>
    {
        std::unordered_set<int> unorderedSet;
        for (auto i : numberVector)
        {
            unorderedSet.insert(i);
        }
        for (auto i : unorderedSet)
        {
            std::cout << unorderedSet.
        }


    };

    return 0;
}
