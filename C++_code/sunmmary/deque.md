# duque

`deque`（双端队列）是 C++ STL（标准模板库）中的一种容器，用于在序列的两端快速插入和删除元素。其全称是 "double-ended queue"，即双端队列。C++ 中的 `deque` 是一个动态数组的变种，相较于 `vector`，`deque` 在两端的插入和删除操作的复杂度是常数时间 O(1)。

### 主要特点

1. **双端插入和删除**：
   `deque` 允许在容器的两端进行高效的插入和删除操作（如 `push_front`, `push_back`, `pop_front`, `pop_back`）。

2. **动态大小**：
   `deque` 是动态大小的容器，可以在运行时根据需求进行扩展或收缩。

3. **随机访问**：
   `deque` 支持通过下标进行随机访问，类似于 `vector`，但在性能上可能会略有差异。

4. **元素存储**：
   `deque` 在内存中不是连续存储的，而是由多个小块组成，因此在频繁插入或删除大量数据时，可能会比 `vector` 更有效。

5. **迭代器**：
   `deque` 支持双向迭代器，因此可以双向遍历容器中的元素。

### 成员函数

- **构造函数**：
  ```cpp
  std::deque<Type> d;                 // 默认构造
  std::deque<Type> d(n);              // 创建一个包含 n 个元素的 deque
  std::deque<Type> d(n, value);       // 创建一个包含 n 个元素，值为 value 的 deque
  ```

- **基本操作**：
  ```cpp
  d.push_back(value);                  // 在尾部插入元素
  d.push_front(value);                 // 在头部插入元素
  d.pop_back();                        // 删除尾部元素
  d.pop_front();                       // 删除头部元素
  ```

- **访问元素**：
  ```cpp
  Type& at(size_t index);              // 访问指定位置的元素
  Type& operator[](size_t index);      // 类似于 at，但不进行边界检查
  Type& front();                       // 访问头部元素
  Type& back();                        // 访问尾部元素
  ```

- **Size 和空状态**：
  ```cpp
  size_t size();                       // 返回元素个数
  bool empty();                        // 判断 deque 是否为空
  ```

- **插入和删除**：
  ```cpp
  d.insert(iterator pos, value);      // 在指定位置插入元素
  d.erase(iterator pos);               // 删除指定位置的元素
  d.clear();                           // 清空 deque
  ```

- **其他操作**：
  ```cpp
  void swap(deque& other);            // 与其他 deque 交换内容
  void resize(size_t count);          // 调整大小
  void assign(size_t count, const Type& value); // 赋值
  ```

### 使用示例

下面是一个简单的示例，展示了 `deque` 的基本用法：

```cpp
#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // 插入元素
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);

    // 访问元素
    std::cout << "Front: " << dq.front() << std::endl; // 输出 0
    std::cout << "Back: " << dq.back() << std::endl;   // 输出 2

    // 遍历
    std::cout << "Elements: ";
    for (const auto& elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 删除元素
    dq.pop_front();
    dq.pop_back();

    std::cout << "After popping front and back: ";
    for (const auto& elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### 总结

`deque` 是一个功能强大且灵活的序列容器，适用于需要频繁在两端插入和删除元素的场景。在选择使用 `deque` 还是 `vector` 时，通常要考虑操作的特性和性能需求。
```cpp


#include <iostream>  
#include <deque> // 引入deque头文件  

int main() {  
    // 创建一个空的deque，存储整数类型  
    std::deque<int> numbers;  

    // 使用push_back()方法向deque的尾部添加元素  
    numbers.push_back(10); // 添加10  
    numbers.push_back(20); // 添加20  
    numbers.push_back(30); // 添加30  

    // 使用push_front()方法向deque的头部添加元素  
    numbers.push_front(5); // 添加5到头部  
    numbers.push_front(1); // 添加1到头部  

    // 输出deque的大小  
    std::cout << "Size of deque: " << numbers.size() << std::endl; // 输出5  

    // 访问deque中的元素  
    std::cout << "First element: " << numbers.front() << std::endl; // 输出1  
    std::cout << "Last element: " << numbers.back() << std::endl; // 输出30  

    // 使用迭代器遍历deque  
    std::cout << "Elements in deque: ";  
    for (std::deque<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {  
        std::cout << *it << " "; // 输出1 5 10 20 30  
    }  
    std::cout << std::endl;  

    // 删除最后一个元素  
    numbers.pop_back(); // 删除30  
    std::cout << "Size after pop_back: " << numbers.size() << std::endl; // 输出4  

    // 删除第一个元素  
    numbers.pop_front(); // 删除1  
    std::cout << "Size after pop_front: " << numbers.size() << std::endl; // 输出3  

    // 清空deque  
    numbers.clear(); // 清空所有元素  
    std::cout << "Size after clear: " << numbers.size() << std::endl; // 输出0  

    // 重新添加元素  
    numbers.push_back(40);  
    numbers.push_back(50);  

    // 使用范围for循环遍历deque  
    std::cout << "Elements after re-adding: ";  
    for (const int& num : numbers) {  
        std::cout << num << " "; // 输出40 50  
    }  
    std::cout << std::endl;  

    // 其他常用方法  
    std::cout << "Is deque empty? " << (numbers.empty() ? "Yes" : "No") << std::endl; // 输出No  
    std::cout << "First element: " << numbers.front() << std::endl; // 输出40  
    std::cout << "Last element: " << numbers.back() << std::endl; // 输出50  

    // 重新设置deque的大小  
    numbers.resize(5, 100); // 将deque大小调整为5，新增元素初始化为100  
    std::cout << "Elements after resize: ";  
    for (const int& num : numbers) {  
        std::cout << num << " "; // 输出40 50 100 100 100  
    }  
    std::cout << std::endl;  

    return 0;  
}
```