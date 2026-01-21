# 🧠 Algorithms

This repository contains my study notes on **Algorithms** for programming contests.

Each topic is written in both **Korean** and **English**, following the same bilingual structure as my other CS notes.

---

## 📑 Table of Contents

### 1. Foundations: Concepts, Complexity, Implementation, Recursion

- **Time Complexity**: Big-O, Big-Theta, Big-Omega; worst/average case thinking. *(Book: Ch.4)*
- **Correctness Basics**: Why “it works” needs reasoning; invariants and proof sketches for contest solutions. *(Book: Ch.5)*
- **Implementation Toolkit**: Arrays, vectors, maps/sets, sorting, hashing, I/O, overflow, edge cases. *(Book: Ch.18, 19)*
- **Recursion**: Base case, recurrence structure, recursion tree intuition, stack depth. *(Book: Ch.7 as recursion-style extension)*
- **Focus**: Build a reliable **problem-solving loop**: define → implement safely → estimate complexity → validate edge cases.

---

### 2. Graphs & Trees


- **Graph Modeling**: adjacency list/matrix, directed/undirected, weighted/unweighted. *(Book: Ch.27)*
- **Graph Traversal**: DFS/BFS templates, visited handling, component counting. *(Book: Ch.28, 29)*
- **Tree Basics**: rooted tree, parent/child, depth/height, subtree, traversal (pre/in/post). *(Book: Ch.21)*
- **Union-Find (DSU)**: disjoint sets, path compression, union by rank. *(Book: Ch.25)*
- **Focus**: See graphs/trees as **models**; master traversal as the default building block for many problems.

---

### 3. Brute Force & Backtracking


- **Brute Force Mindset**: enumerate, prune, and optimize only after correctness is secured. *(Book: Ch.6)*
- **Backtracking**: state definition, recursion order, pruning conditions, duplicate handling. *(Book: Ch.11)*
- **Common Patterns**: permutations/combinations/subsets, constraint satisfaction, search ordering heuristics.
- **Focus**: Turn problems into **state-space search**, then control explosion with pruning and constraints.

---

### 4. Bitmasking


- **Bit Operations**: set/clear/toggle/test, lowbit, iterate subsets, popcount. *(Book: Ch.16)*
- **Subset Enumeration**: (1<<n) loops, submask iteration, bit DP preparation. *(Book: Ch.11, 17 as supplements)*
- **State Compression**: encode small sets/states to reduce memory and simplify transitions.
- **Focus**: Use bits as a **compact representation** that makes enumeration and DP feasible.

---

### 5. Greedy, Line Sweeping, Two Pointers


- **Greedy Strategy**: choose locally optimal steps with a global proof idea. *(Book: Ch.10)*
- **Correctness for Greedy**: exchange argument, cut property, invariants. *(Book: Ch.5)*
- **Two Pointers / Sliding Window**: maintain window invariants, monotonicity, O(n) scanning. *(Book: Ch.17 as closest support)*
- **Line Sweeping**: sort events, maintain active set, interval counting/overlap. *(Book: Ch.15 as optional extension)*
- **Focus**: Master **invariant-driven scanning** (two pointers/sweep) and be able to justify greedy choices.

---

### 6. Binary Search & LIS

- **Binary Search**: lower/upper bound, boundary conditions, “first true” pattern.
- **Parametric Search**: optimization → decision (monotone predicate). *(Book: Ch.12)*
- **LIS**: O(n²) DP vs O(n log n) patience/binary-search method; reconstruction ideas. *(Book: Ch.8/9 as support)*
- **Focus**: Treat binary search as a **framework** for monotone conditions, not just searching sorted arrays.

---

### 7. Dynamic Programming (DP)

- **DP Core**: state, transition, base case, order of computation, answer extraction. *(Book: Ch.8)*
- **DP Techniques**: optimization tricks, dimensionality reduction, reconstruction, memoization vs tabulation. *(Book: Ch.9)*
- **Common Families**: knapsack-like, interval DP, grid DP, DAG DP, state compression DP. *(Book: Ch.16/17 as supplements)*
- **Focus**: Build DP by **definition discipline**—if the state is right, the solution follows.

---

### 8. Fenwick / Segment Tree & Shortest Paths

- **Range Query DS**: prefix sums, Fenwick tree (BIT), segment tree; point update / range query. *(Book: Ch.24 as main reference)*
- **Priority Queue**: heap operations and usage in graph algorithms. *(Book: Ch.23)*
- **Shortest Paths**:
    - Dijkstra (non-negative weights)
    - Bellman-Ford (negative edges)
    - Floyd-Warshall (all-pairs, O(n³))
        
        *(Book: Ch.30)*
        
- **Focus**: Combine **log-time data structures** and **path algorithms** to handle large constraints efficiently.
