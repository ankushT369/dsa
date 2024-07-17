# Binary Search

## Basic Code 

```cpp
int l = -1, r = n;
while (r - l > 1) {
    int m = (l + r) / 2;
    if (k < a[m]) {
        r = m;
    } else {
        l = m;
    }
}
```

### These are the five algorithms for ascending order respectively in the order of the index of required element in array:

1) Binary Search for strictly increasing Array (Basic Binary Search)
2) Binary Search for Last element < Key
3) Binary Search Lower Bound (First Element >= Key)
4) Binary Search for Last element <= Key
5) Binary Search Upper Bound (First Element > Key)

### Their corresponding decreasing array counterparts:

1) Binary Search for strictly decreasing Array (Basic Binary Search)
2) Binary Search Last Element > Key
3) Binary Search Lower Bound (First Element <= Key)
4) Binary Search Last Element >= Key
5) Binary Search Upper Bound (First Element < Key)


#### Reference : https://cp-algorithms.com/num_methods/binary_search.html
