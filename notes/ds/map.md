# Map Notes

## 1. Overview

- **`map`**: A sorted associative container that contains key-value pairs. Elements are always arranged in a specific order based on the keys.
- **`unordered_map`**: An associative container that contains key-value pairs but does not maintain any order. It is implemented using a hash table.

## 2. Common Operations

### a. Insertion

- **`map::insert`**:
  - **Syntax**: `m.insert({key, value});`
  - **Time Complexity**: O(log n) due to tree structure.

- **`unordered_map::insert`**:
  - **Syntax**: `um.insert({key, value});`
  - **Time Complexity**: O(1) on average, O(n) in the worst case due to collisions.

### b. Accessing Elements

- **Using `[]` operator**:
  - **`map`**: `value = m[key];`
  - **`unordered_map`**: `value = um[key];`
  - **Time Complexity**: O(log n) for `map`, O(1) for `unordered_map`.

- **Using `at()` method**:
  - **Syntax**: `value = m.at(key);`
  - **Time Complexity**: O(log n) for `map`, O(1) for `unordered_map`.

### c. Erasing Elements

- **Syntax**: `m.erase(key);` or `um.erase(key);`
- **Time Complexity**: O(log n) for `map`, O(1) on average for `unordered_map`.

### d. Searching

- **Syntax**: `m.find(key);` or `um.find(key);`
- **Time Complexity**: O(log n) for `map`, O(1) on average for `unordered_map`.

### e. Size and Capacity

- **Check Size**:
  - **Syntax**: `m.size();` or `um.size();`
  - **Time Complexity**: O(1) for both.

- **Check Empty**:
  - **Syntax**: `m.empty();` or `um.empty();`
  - **Time Complexity**: O(1) for both.

## 3. Additional Functions

### a. Iterators

- **Iterating through `map`**:
  ```cpp
  for (auto it = m.begin(); it != m.end(); ++it) {
      std::cout << it->first << ": " << it->second << std::endl;
  }

## 5. Summary of Time Complexities

| Operation              | `map`         | `unordered_map` |
|------------------------|---------------|-----------------|
| Insertion              | O(log n)      | O(1) average    |
| Access                 | O(log n)      | O(1) average    |
| Deletion               | O(log n)      | O(1) average    |
| Search                 | O(log n)      | O(1) average    |
| Iteration              | O(n)          | O(n)            |
| Size                   | O(1)          | O(1)            |
| Clear                  | O(n)          | O(n)            |

