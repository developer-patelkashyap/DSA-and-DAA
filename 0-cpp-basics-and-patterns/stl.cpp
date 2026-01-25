#include <iostream>     // Input/output streams
#include <vector>       // Vector container
#include <algorithm>    // Algorithms (sort, find, etc.)
#include <string>       // String class
#include <utility>      // Pair, make_pair
#include <set>          // Set, multiset
#include <unordered_set>// Unordered set
#include <map>          // Map, multimap
#include <queue>        // Queue, priority_queue
#include <stack>        // Stack
#include <deque>        // Double-ended queue
#include <list>         // Doubly linked list
#include <bitset>       // Bitset
#include <functional>   // Function objects
#include <iterator>     // Iterators
#include <cmath>        // Math functions
#include <cstdlib>      // General utilities
#include <ctime>        // Time functions
#include <numeric>      // Common mathematical functions and types

using namespace std;

void print_vec_int(vector<int> &v) {
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

template <typename Container>
void print_container(const Container& c) {
    for (const auto& val : c) {
        cout << val << " ";
    }
    cout << endl;
}

// template <typename K, typename V>
// void print_map(const map<K,V>& m) {
//     for (auto &p : m)
//         cout << p.first << ":" << p.second << " ";
//     cout << endl;
// }

template <typename MapType>
void print_map(const MapType& m) {
    for (const auto& p : m)
        std::cout << p.first << ":" << p.second << " ";
    std::cout << std::endl;
}

int main() {
    // pair
    // use cases: return multiple values, store key-value pairs, ...
    pair<int, int> p1(10, 20);
    pair<int, char> p2 = {5, 'A'};

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    auto p3 = make_pair(3.14, "PI");
    cout << p3.first << " " << p3.second << endl;

    // comparison (lexicographical)
    pair<int, int> a(1, 2);
    pair<int, int> b(1, 3);
    cout << (a < b) << endl;  // true (compares first, then second)

    // vectors
    // dynamic array with automatic resizing
    vector<int> v; // empty vector
    vector<int> v1(5); // 5 elements initialized to 0
    vector<int> v2(5, 10); // 5 elements, all 10
    vector<int> v3 = {1, 2, 3, 4, 5};

    // internals: Three pointers - start, end, capacity end
    // [start | end | capacity_end]
    // when size == capacity, reallocation happens (usually 2x)

    v3.push_back(6); // add to end
    print_vec_int(v3);

    v3.pop_back(); // remove from end
    print_vec_int(v3);

    cout << v3.size() << endl; // current elements
    cout << v3.capacity() << endl; // allocated memory
    
    v3.reserve(100); // pre-allocate memory
    cout << v3.capacity() << endl;

    print_vec_int(v3);
    cout << v3.at(2) << endl;
    cout << v3.front() << endl;
    cout << v3.back() << endl;

    for (auto it = v3.begin(); it != v3.end(); ++it) {
        cout << *it << " ";
    }

    v3.insert(v3.begin() + 1, 15); // insert at position
    print_vec_int(v3);

    v3.insert(v3.begin() + 2, 3, 25); // insert multiple copies
    print_vec_int(v3);

    vector<int> v4 = {100, 200};
    v3.insert(v3.end(), v4.begin(), v4.end()); // append v4
    print_vec_int(v3);

    cout << v3.size() << endl;
    cout << v3.capacity() << endl;
    v3.shrink_to_fit();  // reduce capacity to size
    cout << v3.capacity() << endl;

    print_vec_int(v3);
    print_vec_int(v4);
    v3.swap(v4); // swap contents
    print_vec_int(v3);
    print_vec_int(v4);

    v3 = {10, 20, 30, 40, 50, 60, 70};
    
    v3.erase(v3.begin() + 2); // remove element at position
    print_vec_int(v3);
    
    v3.erase(v3.begin() + 1, v3.begin() + 3); // remove range
    print_vec_int(v3);
    
    v3.clear();
    print_vec_int(v3);

    // list
    list<int> l = {1, 2, 3, 3, 4, 4, 5, 5, 4};

    // advantages over vector:
    // - efficient insert/delete anywhere: O(1)
    // - no reallocation
    // - bidirectional iteration
    // disadvantages:
    // - no random access: O(n) for accessing element
    // - more memory per element (pointers)

    l.push_front(0); // add to front
    print_container(l);

    l.pop_front(); // remove from front
    print_container(l);

    l.remove(3); // remove all 3s
    print_container(l);

    l.unique(); // remove consecutive duplicates
    print_container(l);

    l.reverse(); // reverse list
    print_container(l);

    l.sort(); // sort list
    print_container(l);

    list<int> l2 = {10, 20, 30};
    l.merge(l2); // merge two sorted lists
    print_container(l);

    l.splice(l.begin(), l2); // transfer elements from l2 to l
    print_container(l);
    print_container(l2);

    // deque
    deque<int> dq = {1, 2, 3, 4, 5};

    // combines vector and list features:
    // - random access: O(1)
    // - insert/delete at both ends: O(1)
    // - insert/delete in middle: O(n)
    // internally: Multiple fixed-size arrays
    // more complex than vector but more flexible
    // use when need efficient front/back operations

    dq.push_front(0); // add to front
    print_container(dq);

    dq.push_back(6); // add to back
    print_container(dq);

    dq.pop_front(); // remove from front
    print_container(dq);

    dq.pop_back(); // remove from back
    print_container(dq);

    // stack
    stack<int> s;

    // LIFO (Last In First Out) principle
    s.push(10); // add to top
    s.push(20);
    s.push(30);

    cout << s.top() << endl; // view top

    s.pop(); // remove top

    cout << s.size() << endl;
    cout << s.empty() << endl;

    // can use different underlying containers
    stack<int, vector<int>> s2; // using vector
    stack<int, list<int>> s3; // using list

    // queue
    queue<int> q;

    // FIFO (First In First Out) principle
    q.push(10); // add to back
    q.push(20);
    q.push(30);

    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop(); // remove front

    // underlying containers: deque (default) or list
    queue<int, list<int>> q2;

    // priority queue
    // max-heap by default (largest element at top)
    priority_queue<int> pq;

    pq.push(30);
    pq.push(10);
    pq.push(20);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // min-heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    
    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(20);
    cout << min_pq.top() << endl;

    // custom comparator
    // struct Compare {
    //     bool operator()(int a, int b) {
    //         return a > b;   // For min-heap
    //     }
    // };
    // priority_queue<int, vector<int>, Compare> custom_pq;

    // set

    // properties:
    // - unique elements (no duplicates)
    // - ordered (sorted)
    // - no random access
    // - bidirectional iterators

    // ordered unique elements (balanced BST - usually Red-Black Tree)
    set<int> s4 = {5, 2, 8, 1, 9};

    print_container(s4); // automatic sorting

    s4.insert(3); // O(log n)
    print_container(s4);

    s4.erase(5); // O(log n)
    print_container(s4);

    auto it = s4.find(8); // O(log n), returns iterator or end()
    cout << s4.count(2) << endl; // 1 (exists) or 0

    // multiset
    // allows duplicates, ordered
    multiset<int> ms = {5, 2, 5, 8, 1, 5};

    print_container(ms);

    // all set operations work
    ms.insert(5); // adds another 5
    print_container(ms);

    ms.erase(5); // removes ALL 5s (use iterator to remove specific)
    print_container(ms);
    
    // to remove only one occurrence:
    auto it_ms = ms.find(5);
    if (it != ms.end()) ms.erase(it);
    print_container(ms);

    // count returns number of occurrences
    cout << ms.count(5) << endl;

    // unordered set
    // hash table implementation (average O(1) operations)
    unordered_set<int> us = {5, 2, 8, 1, 9};

    print_container(us); // no ordering

    // operations (average O(1), worst O(n))
    us.insert(3);
    print_container(us);

    us.erase(5);
    print_container(us);

    auto it_us = us.find(8);  // O(1) average
    cout << *it_us << endl;

    us.count(2);           // O(1) average
    print_container(us);

    // bucket interface
    cout << us.bucket_count() << endl;   // number of buckets
    cout << us.load_factor() << endl;    // elements/buckets
    // us.rehash(100);              // reserve buckets

    // map
    // key-value pairs, ordered by key (BST)
    map<string, int> m;

    // insertion
    m["Alice"] = 90; // O(log n)
    m.insert({"Bob", 85}); // O(log n)
    m.emplace("Charlie", 95); // O(log n)
    print_map(m);

    // access
    cout << m["Alice"] << endl;
    cout << m.at("Bob") << endl;

    // iteration
    for (auto& [name, score] : m) {
        cout << name << ": " << score << " | ";
    }

    // find
    auto it_m = m.find("Alice"); // O(log n)
    if (it_m != m.end()) {
        cout << it_m->first << ": " << it_m->second;
    }

    // count occurrences of key
    cout << m.count("Alice") << endl; // 1 or 0

    // multimap
    // allows duplicate keys
    multimap<string, int> mm;

    mm.insert({"Alice", 90});
    mm.insert({"Alice", 95});
    print_map(mm);

    // find all values for a key
    auto range = mm.equal_range("Alice");
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }

    // count total pairs with key
    cout << endl << mm.count("Alice") << endl;

    // unordered map
    // hash table implementation
    unordered_map<string, int> um;

    // average O(1) operations
    um["Alice"] = 90;
    um.insert({"Bob", 85});
    print_map(um);

    // bucket interface
    cout << um.bucket_count() << endl;
    cout << um.load_factor() << endl;
    // um.rehash(100);

    // algorithms
    vector<int> v_ = {5, 2, 8, 1, 9, 3};
    print_container(v_);

    sort(v_.begin(), v_.end());
    print_container(v_);

    sort(v_.begin(), v_.end(), greater<int>());
    print_container(v_);

    // partial sort (first k elements)
    v_ = {5, 2, 8, 1, 9, 3};
    print_container(v_);
    partial_sort(v_.begin(), v_.begin() + 3, v_.end());
    print_container(v_);

    // stable_sort(v.begin(), v.end()); // stable sort (preserves order of equal elements)
    
    // generate all permutations
    v_ = {1, 2, 3};
    print_container(v_);
    do {
        for (int x : v_) cout << x << " ";
        cout << " | ";
    } while (next_permutation(v_.begin(), v_.end()));

    v_ = {5, 2, 8, 1, 9, 3};

    // find iterator to max element
    auto max_it = max_element(v_.begin(), v_.end());
    cout << *max_it << endl;
    cout << distance(v_.begin(), max_it) << endl;

    // find iterator to min element
    auto min_it = min_element(v_.begin(), v_.end());
    cout << *min_it << endl;
    cout << distance(v_.begin(), min_it) << endl;

    cout << binary_search(v_.begin(), v_.end(), 5) << endl;
    
    // accumulate
    int sum = accumulate(v_.begin(), v_.end(), 0);
    cout << sum << endl;

    // reverse
    print_container(v_);
    reverse(v_.begin(), v_.end());
    print_container(v_);

    return 0;
}