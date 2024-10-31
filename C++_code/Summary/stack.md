在C++中，`stack` 是一种后进先出（LIFO，Last In First Out）的数据结构，属于标准模板库（STL）的一部分。它提供了基本的栈操作，如入栈、出栈和查看栈顶元素。下面是关于 `stack` 的详细用法，包括基本操作和常用方法的示例代码，附有详细注释。

```cpp
#include <iostream>
#include <stack> // 引入stack头文件

int main() {
    // 创建一个空的stack，存储整数类型
    std::stack<int> numbers;

    // 使用push()方法向stack中添加元素
    numbers.push(10); // 添加10
    numbers.push(20); // 添加20
    numbers.push(30); // 添加30

    // 输出stack的大小
    std::cout << "Size of stack: " << numbers.size() << std::endl; // 输出3

    // 访问栈顶元素
    std::cout << "Top element: " << numbers.top() << std::endl; // 输出30

    // 使用pop()方法删除栈顶元素
    numbers.pop(); // 删除30
    std::cout << "Top element after pop: " << numbers.top() << std::endl; // 输出20

    // 再次删除栈顶元素
    numbers.pop(); // 删除20
    std::cout << "Top element after another pop: " << numbers.top() << std::endl; // 输出10

    // 检查stack是否为空
    std::cout << "Is stack empty? " << (numbers.empty() ? "Yes" : "No") << std::endl; // 输出No

    // 删除最后一个元素
    numbers.pop(); // 删除10
    std::cout << "Is stack empty after popping all elements? " << (numbers.empty() ? "Yes" : "No") << std::endl; // 输出Yes

    return 0;
}
```

### 代码解释

1. **引入头文件**：使用 `#include <stack>` 来引入 `stack` 的定义。

2. **创建 `stack`**：使用 `std::stack<int> numbers;` 创建一个存储整数的空 `stack`。

3. **添加元素**：使用 `push()` 方法向 `stack` 中添加元素。

4. **获取大小**：使用 `size()` 方法获取 `stack` 中元素的数量。

5. **访问栈顶元素**：使用 `top()` 方法访问 `stack` 的栈顶元素。

6. **删除栈顶元素**：使用 `pop()` 方法删除 `stack` 中的栈顶元素。

7. **检查是否为空**：使用 `empty()` 方法检查 `stack` 是否为空。

### 总结
`stack` 是一个非常简单而有效的数据结构，适用于需要后进先出（LIFO）操作的场景。通过上述示例，你可以了解 `stack` 的基本用法和常用方法。
