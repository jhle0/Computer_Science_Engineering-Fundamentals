# 🧠 Algorithms

This repository contains my study notes on **Algorithms** for programming contests.

Each topic is written in both **Korean** and **English**, following the same bilingual structure as my other CS notes.

---

## 📑 Table of Contents

### 1. Foundations: Concepts, Complexity, Implementation, Recursion

- **Time Complexity**: Big-O, Big-Theta, Big-Omega; worst/average case thinking.
- **Correctness Basics**: Why “it works” needs reasoning; invariants and proof sketches for contest solutions. 
- **Implementation Toolkit**: Arrays, vectors, maps/sets, sorting, hashing, I/O, overflow, edge cases. 
- **Recursion**: Base case, recurrence structure, recursion tree intuition, stack depth
- **Focus**: Build a reliable **problem-solving loop**: define → implement safely → estimate complexity → validate edge cases.

---

### 2. Graphs & Trees


- **Graph Modeling**: adjacency list/matrix, directed/undirected, weighted/unweighted. 
- **Graph Traversal**: DFS/BFS templates, visited handling, component counting. 
- **Tree Basics**: rooted tree, parent/child, depth/height, subtree, traversal (pre/in/post). 
- **Union-Find (DSU)**: disjoint sets, path compression, union by rank.
- **Focus**: See graphs/trees as **models**; master traversal as the default building block for many problems.

---

### 3. Brute Force & Backtracking


- **Brute Force Mindset**: enumerate, prune, and optimize only after correctness is secured. 
- **Backtracking**: state definition, recursion order, pruning conditions, duplicate handling.
- **Common Patterns**: permutations/combinations/subsets, constraint satisfaction, search ordering heuristics.
- **Focus**: Turn problems into **state-space search**, then control explosion with pruning and constraints.

---

### 4. Bitmasking


- **Bit Operations**: set/clear/toggle/test, lowbit, iterate subsets, popcount. 
- **Subset Enumeration**: (1<<n) loops, submask iteration, bit DP preparation.
- **State Compression**: encode small sets/states to reduce memory and simplify transitions.
- **Focus**: Use bits as a **compact representation** that makes enumeration and DP feasible.

---

### 5. Greedy, Line Sweeping, Two Pointers


- **Greedy Strategy**: choose locally optimal steps with a global proof idea.
- **Correctness for Greedy**: exchange argument, cut property, invariants
- **Two Pointers / Sliding Window**: maintain window invariants, monotonicity, O(n) scanning. 
- **Line Sweeping**: sort events, maintain active set, interval counting/overlap.
- **Focus**: Master **invariant-driven scanning** (two pointers/sweep) and be able to justify greedy choices.

---

### 6. Binary Search & LIS

- **Binary Search**: lower/upper bound, boundary conditions, “first true” pattern.
- **Parametric Search**: optimization → decision (monotone predicate).
- **LIS**: O(n²) DP vs O(n log n) patience/binary-search method; reconstruction ideas.
- **Focus**: Treat binary search as a **framework** for monotone conditions, not just searching sorted arrays.

---

### 7. Dynamic Programming (DP)

- **DP Core**: state, transition, base case, order of computation, answer extraction.
- **DP Techniques**: optimization tricks, dimensionality reduction, reconstruction, memoization vs tabulation. 
- **Common Families**: knapsack-like, interval DP, grid DP, DAG DP, state compression DP. 
- **Focus**: Build DP by **definition discipline**—if the state is right, the solution follows.

---

### 8. Fenwick / Segment Tree & Shortest Paths

- **Range Query DS**: prefix sums, Fenwick tree (BIT), segment tree; point update / range query. 
- **Priority Queue**: heap operations and usage in graph algorithms.
- **Shortest Paths**:
    - Dijkstra (non-negative weights)
    - Bellman-Ford (negative edges)
    - Floyd-Warshall (all-pairs, O(n³))
        
- **Focus**: Combine **log-time data structures** and **path algorithms** to handle large constraints efficiently.
