# Vector Notes

## 1. Vector Access Operations

- **Adding Elements**:
  - `push_back(value);` - Adds `value` to the end of the vector.
  - `pop_back();` - Removes the last element of the vector.

- **Accessing Elements**:
  - `vec[i];` - Accesses the element at index `i`.
  - `vec.at(i);` - Same as `vec[i]`, but throws an exception if `i` is out of bounds.

- **Size and Capacity**:
  - `vec.size();` - Returns the number of elements in the vector.
  - `vec.capacity();` - Returns the size of the allocated storage.

## 2. Sorting

- **Sorting a Subrange**:
  - `sort(vec.begin() + i, vec.begin() + j);` - Sorts the elements in the range `[i, j)`.

## 3. Reversing

- **Reversing a Subrange**:
  - `reverse(vec.begin() + i, vec.begin() + j);` - Reverses the elements in the range `[i, j)`.

## 4. Rotating

- **Rotating Elements**:
  - `rotate(vec.begin() + i, vec.begin() + j, vec.begin() + k);` - Rotates the elements in the range `[i, j)` to the left, so that the element at `k` becomes the first element.

## 5. Other Useful Operations

- **Inserting Elements**:
  - `vec.insert(vec.begin() + i, value);` - Inserts `value` at index `i`.

- **Erasing Elements**:
  - `vec.erase(vec.begin() + i);` - Removes the element at index `i`.

- **Clearing the Vector**:
  - `vec.clear();` - Removes all elements from the vector.

## 6. Resizing

- **Resizing the Vector**:
  - `vec.resize(n);` - Resizes the vector to contain `n` elements. If `n` is smaller than the current size, the vector is reduced; if larger, new elements are initialized to `0`.

## 7. Capacity Management

- **Managing Capacity**:
  - `vec.reserve(n);` - Requests that the vector capacity be at least `n`, without changing the size.
  - `vec.shrink_to_fit();` - Reduces the capacity to fit the size of the vector.

## 8. Finding Index

- **Find Index of any paticular element**:
  - `distance(v.being(), it)` - The distance defines the index of the it where it is the iterator to the elelment.

## Other Functions

- **Checking Empty**:
  - `vec.empty();` - Returns `true` if the vector is empty, `false` otherwise.

- **Swapping**:
  - `swap(vec1, vec2);` - Swaps the contents of two vectors.

## Example Usage

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 9, 1, 5, 6};

    // Accessing elements
    vec.push_back(10);
    std::cout << vec[0] << std::endl;

    // Sorting
    std::sort(vec.begin(), vec.end());

    // Reversing
    std::reverse(vec.begin(), vec.end());

    // Rotating
    std::rotate(vec.begin(), vec.begin() + 2, vec.end());

    // Output the vector
    for (int v : vec) {
        std::cout << v << " ";
    }

    return 0;
}

