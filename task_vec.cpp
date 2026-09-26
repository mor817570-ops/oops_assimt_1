#include <iostream>
#include <vector>

void print(const std::vector<int>& values) {
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    // Create a vector and assign values
    std::vector<int> numbers{10, 20, 30};
    numbers = {10, 20, 30};             // operator=

    // Element access
    std::cout << "at(1): " << numbers.at(1) << '\n';
    std::cout << "numbers[0]: " << numbers[0] << '\n';
    std::cout << "front(): " << numbers.front() << '\n';
    std::cout << "back(): " << numbers.back() << '\n';
    std::cout << "data()[0]: " << numbers.data()[0] << '\n';

    // Iterators
    std::cout << "Forward: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
        std::cout << *it << ' ';
    std::cout << "\nReverse: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    // Const iterators
    std::cout << "Const iteration: ";
    for (auto it = numbers.cbegin(); it != numbers.cend(); ++it)
        std::cout << *it << ' ';
    std::cout << "\nConst reverse iteration: ";
    for (auto it = numbers.crbegin(); it != numbers.crend(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    // Capacity
    std::cout << "empty(): " << std::boolalpha << numbers.empty() << '\n';
    std::cout << "size(): " << numbers.size() << '\n';
    std::cout << "max_size(): " << numbers.max_size() << '\n';
    std::cout << "capacity(): " << numbers.capacity() << '\n';
    numbers.reserve(10);                 // Ensure capacity for at least 10 elements
    std::cout << "capacity after reserve(): " << numbers.capacity() << '\n';
    numbers.shrink_to_fit();             // Request capacity reduction
    (void)numbers.get_allocator();       // Obtain the vector's allocator

    // Modifiers
    numbers.push_back(40);
    numbers.emplace_back(50);
    numbers.insert(numbers.begin() + 1, 15);
    numbers.emplace(numbers.begin() + 2, 17);
    numbers.erase(numbers.begin() + 2);
    numbers.erase(numbers.begin() + 1, numbers.begin() + 2);
    numbers.resize(6, 99);
    numbers.pop_back();
    print(numbers);

    numbers.assign({1, 2, 3});           // Replace all elements
    print(numbers);

    std::vector<int> other{7, 8};
    numbers.swap(other);                 // Exchange contents
    std::cout << "numbers after swap: ";
    print(numbers);

    numbers.clear();                     // Remove all elements
    std::cout << "empty after clear(): " << numbers.empty() << '\n';

    return 0;
}
