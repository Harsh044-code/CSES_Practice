# 🚀 C++ STL: `insert()` Method

## 1️⃣ Insert a Single Element

📌 **Syntax:**
```cpp
vector.insert(position, value);
```

📌 **Example:**
```cpp
vector<int> v = {1, 2, 4, 5};
v.insert(v.begin() + 2, 3);  // Inserts '3' at index 2

// Result: {1, 2, 3, 4, 5}
```
✅ Adds a single element at the specified position.

---

## 2️⃣ Insert Multiple Copies of an Element

📌 **Syntax:**
```cpp
vector.insert(position, count, value);
```

📌 **Example:**
```cpp
vector<int> v = {1, 2, 5};
v.insert(v.begin() + 2, 3, 4);  // Inserts '4' three times at index 2

// Result: {1, 2, 4, 4, 4, 5}
```
✅ Useful for inserting multiple copies of the same element.

---

## 3️⃣ Insert a Range from Another Vector

📌 **Syntax:**
```cpp
vector.insert(position, start_iterator, end_iterator);
```

📌 **Example:**
```cpp
vector<int> v1 = {1, 2, 5};
vector<int> v2 = {10, 20, 30};

v1.insert(v1.begin() + 2, v2.begin(), v2.end());  // Inserts all elements of v2 at index 2

// Result: {1, 2, 10, 20, 30, 5}
```
✅ Efficient for merging sequences without loops.

---

## 4️⃣ Insert Using an `initializer_list`

📌 **Syntax:**
```cpp
vector.insert(position, {value1, value2, ...});
```

📌 **Example:**
```cpp
vector<int> v = {1, 2, 5};
v.insert(v.begin() + 2, {10, 20, 30});

// Result: {1, 2, 10, 20, 30, 5}
```
✅ Quick way to insert multiple elements.

---

## 5️⃣ Insert in `list` or `deque`

📌 **Example with `list`:**
```cpp
list<int> l = {1, 2, 5};
auto it = l.begin();
advance(it, 2); // Move iterator to index 2
l.insert(it, {10, 20, 30});

// Result: {1, 2, 10, 20, 30, 5}
```
✅ Works for `list` and `deque` as well

---

## 🔑 Key Takeaways

✔ **Single element** → `insert(pos, value)`  
✔ **Multiple copies** → `insert(pos, count, value)`  
✔ **Range from another container** → `insert(pos, start, end)`  
✔ **Initializer list** → `insert(pos, {val1, val2, ...})`  

💡 **Now you can efficiently use `insert()` in different scenarios!** 🚀
