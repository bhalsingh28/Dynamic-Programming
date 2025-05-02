# 🧠 Dynamic Programming Notes

## 🧩 How to Identify if DP Can Be Used?

### Key Signs:

1. **Choice**
2. **Optimal Substructure**
   - (Max/Min/Largest...)

### Analysis:

- Total problem → Choice → Recursion → 2 Calls

- **⚠️ DP is only useful when there are subproblems. If only 1 call is made → No DP needed**

### DP Conversion:

- Recursion _(Must)_ → Memoization → **Top-Down Approach** ✅
- **Easy to create table/grid after recursion**

## 🗂️ Types of Problems

1. [**0-1 Knapsack**](#0-1-knapsack-problem-part-1) (6 variations)
2. [**Unbounded Knapsack**](#unbounded-knapsack) (5)
3. [**Fibonacci**](#fibonacci) (~7)
4. [**LCS (Longest Common Subsequence)**](#lcs-longest-common-subsequence) (17)
5. [**LIS (Longest Increasing Subsequence)**](#lis-longest-increasing-subsequence) (10)
6. [**Kadane's Algorithm**](#kadanes-algorithm) (6)
7. [**Matrix Chain Multiplication**](#matrix-chain-multiplication) (7)
8. [**DP on Trees**](#dp-on-trees) (4)
9. [**DP on Grid**](#dp-on-grid) (14)
10. [**Others**](#others) (5)

---

## Knapsack Problem

There are three types of knapsack problems:

- [Fractional Knapsack](https://www.geeksforgeeks.org/fractional-knapsack-problem/) (Greedy)
- [0-1 Knapsack](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/) (DP)
- [Unbounded Knapsack](https://www.geeksforgeeks.org/unbounded-fractional-knapsack/) (DP)

| Feature                     | Fractional Knapsack        | 0-1 Knapsack                      | Unbounded Knapsack               |
| --------------------------- | -------------------------- | --------------------------------- | -------------------------------- |
| **Approach**                | Greedy                     | Dynamic Programming (DP)          | Dynamic Programming (DP)         |
| **Item Usage**              | Can take fraction of item  | Either take the item or not (0/1) | Can take item **multiple** times |
| **Order of Items**          | Sort by value/weight ratio | No sorting required               | No sorting required              |
| **Optimal Substructure**    | No                         | Yes                               | Yes                              |
| **Overlapping Subproblems** | No                         | Yes                               | Yes                              |
| **Use Case**                | Maximize value with weight | Subset selection with constraints | Infinite supply of items         |
| **Time Complexity**         | O(n log n)                 | O(n × W)                          | O(n × W)                         |
| **Suitable For**            | Continuous items           | Discrete, one-time items          | Discrete, reusable items         |

### Variations

1. [**Subset Sum**](#1-subset-sum)
2. Equal Sum Partition
3. Count of Subset Sum
4. Minimum Subset Sum Diffrence
5. Target Sum
6. Number of subset with given diffrence

###

Details here...

---

## Unbounded Knapsack

Details here...

---

## Fibonacci

Details here...

---

## LCS Longest Common Subsequence

Details here...

---

## LIS Longest Increasing Subsequence

Details here...

---

## Kadanes Algorithm

Details here...

---

## Matrix Chain Multiplication

Details here...

---

## DP on Trees

Details here...

---

## DP on Grid

Details here...

---

## Others

Details here...

---

---

# Git Notes Index

- 📘 [Git Commands](./git-commands.md)
- 🛠️ [Tools Used](./tools-used.md)
