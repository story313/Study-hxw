在C++中，`vector` 是一个动态数组的实现，属于标准模板库（STL）的一部分。它提供了灵活的数组功能，可以根据需要自动调整大小。下面是关于 `vector` 的详细用法，包括基本操作和常用方法的示例代码，附有详细注释。

```cpp
#include <iostream>
#include <vector> // 引入vector头文件

int main() {
    // 创建一个空的vector，存储整数类型
    std::vector<int> numbers;

    // 使用push_back()方法向vector中添加元素
    numbers.push_back(10); // 添加10
    numbers.push_back(20); // 添加20
    numbers.push_back(30); // 添加30

    // 输出vector的大小
    std::cout << "Size of vector: " << numbers.size() << std::endl; // 输出3

    // 访问vector中的元素
    std::cout << "First element: " << numbers[0] << std::endl; // 输出10
    std::cout << "Second element: " << numbers.at(1) << std::endl; // 输出20

    // 使用迭代器遍历vector
    std::cout << "Elements in vector: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " "; // 输出10 20 30
    }
    std::cout << std::endl;

    // 删除最后一个元素
    numbers.pop_back(); // 删除30
    std::cout << "Size after pop_back: " << numbers.size() << std::endl; // 输出2

    // 清空vector
    numbers.clear(); // 清空所有元素
    std::cout << "Size after clear: " << numbers.size() << std::endl; // 输出0

    // 重新添加元素
    numbers.push_back(40);
    numbers.push_back(50);

    // 使用范围for循环遍历vector
    std::cout << "Elements after re-adding: ";
    for (const int& num : numbers) {
        std::cout << num << " "; // 输出40 50
    }
    std::cout << std::endl;

    // 其他常用方法
    std::cout << "Is vector empty? " << (numbers.empty() ? "Yes" : "No") << std::endl; // 输出No
    std::cout << "First element: " << numbers.front() << std::endl; // 输出40
    std::cout << "Last element: " << numbers.back() << std::endl; // 输出50

    // 重新设置vector的大小
    numbers.resize(5, 100); // 将vector大小调整为5，新增元素初始化为100
    std::cout << "Elements after resize: ";
    for (const int& num : numbers) {
        std::cout << num << " "; // 输出40 50 100 100 100
    }
    std::cout << std::endl;

    return 0;
}
```

### 代码解释

1. **引入头文件**：使用 `#include <vector>` 来引入 `vector` 的定义。

2. **创建 `vector`**：使用 `std::vector<int> numbers;` 创建一个存储整数的空 `vector`。

3. **添加元素**：使用 `push_back()` 方法向 `vector` 中添加元素。

4. **获取大小**：使用 `size()` 方法获取 `vector` 中元素的数量。

5. **访问元素**：
   - 使用下标访问元素，例如 `numbers[0]`。
   - 使用 `at()` 方法访问元素，提供边界检查。

6. **遍历 `vector`**：使用迭代器和范围 `for` 循环遍历 `vector` 中的元素。

7. **删除元素**：使用 `pop_back()` 方法删除 `vector` 中的最后一个元素。

8. **清空 `vector`**：使用 `clear()` 方法清空 `vector` 中的所有元素。

9. **检查是否为空**：使用 `empty()` 方法检查 `vector` 是否为空。

10. **访问首尾元素**：使用 `front()` 和 `back()` 方法访问 `vector` 的第一个和最后一个元素。

11. **调整大小**：使用 `resize()` 方法调整 `vector` 的大小，并可以指定新元素的初始值。

### 总结
`vector` 是一个非常灵活和强大的数据结构，适用于需要动态数组的场景。通过上述示例，你可以了解 `vector` 的基本用法和常用方法。
