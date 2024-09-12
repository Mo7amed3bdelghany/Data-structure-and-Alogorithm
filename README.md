<div align=center>
<img src="https://readme-typing-svg.herokuapp.com?color=%236FDA44&size=32&center=true&vCenter=true&width=600&height=50&lines=Data+Structures+and+Algorithms" alt="Headline" />
<img align="right" width=150 height=200px alt="side_sticker" src="https://media.giphy.com/media/TEnXkcsHrP4YedChhA/giphy.gif" />
</div>

## 


#### Data Structures and Algorithms are the building blocks of computer science. They are the tools you'll use to build software systems.

## Data Structures
*A Data Structurs* is a way of storing/organising data in the memory in such a way tha access, management and modification of data become efficient.   
   
### Type of data structures-
- Linear
- Non-Linear

- [ ] Linear Data Structures :
  
    - **Array:** A collection of elements of the same type stored in contiguous memory locations.

    - **String:** A sequence of characters.
    - **Linked List:** A linear data structure where elements are not stored in contiguous memory locations.
    - **Stack:** A linear data structure that follows the Last In First Out (LIFO) principle.
    - **Queue:** A linear data structure that follows the First In First Out (FIFO) principle.
- [ ] Non-Linear Data Structures :

   - **Graph:** A non-linear data structure consisting of vertices and edges.
   - **Tree:** A non-linear data structure used to store data hierarchically.
   - **Trie:** A tree-like data structure used to store a dynamic set of strings.   
  
<br>

<div align ="center">

| Linear Data Stuctures              |   None-Linear Data Stuctures           |
| :-------------------:              | :---------------------------:          | 
| sequential                         | None-Sequential                        | 
| All items present in single layer  |  In multiple layers                    |
| Inefficient memory utilization     | Relatively efficient memory utilization|
| Time complexity increases with data| Time complexity remains the same       |
| Traversed in a single run          |  Requires multiple runs                |

</div>
<br>

## Algorithms 
*Algorithms* are step-by-step procedures designed to perform a specific task or solve a particular problem or perform computations.  
Here are some common algorithms you should be familiar with:    
- **Sorting:** Methods like Quick Sort, Merge Sort, and Bubble Sort that rearrange elements in a specific order.
  
- **Searching:** Techniques like Binary Search and Linear Search used to find elements within a data structure.
- **Recursion:** A technique where a function calls itself to solve a smaller instance of the same problem.
- **Dynamic Programming:** Solving problems by breaking them down into smaller subproblems.
- **Greedy Algorithms:** Making locally optimal choices at each step.
- **Divide and Conquer:** Solving problems by breaking them down into smaller subproblems.
- **Brute Force:** Solving problems by trying all possible solutions.
- **Bit Manipulation:** Algorithmically manipulating bits or binary digits.
- **Graph Algorithms:** Solving problems on graphs such as Dijkstra’s for finding the shortest path in a graph.
- **String Matching:** Finding a substring within a string.
  
### Components of an Algorithm
1. **Input:** The data provided to the algorithm to process.
2. **Output:** The result produced by the algorithm after processing the input.
3. **Process/Steps:** A sequence of operations or instructions that transform the input into the output.

### Importance of Algorithms

Algorithms are fundamental to computer science and programming, as they provide the blueprint for solving problems efficiently and effectively. They are essential for tasks ranging from simple calculations to complex data processing in software applications.  

## Introduction to Time Complexity
### What is Time Complexity?
**Time complexity** is a way to measure the amount of time an algorithm takes to complete as a function of the length of the input. It provides a high-level understanding of the algorithm's efficiency and helps compare the performance of different algorithms.   

For Example, If i asked you for the sum of the all number from 1 to n .... There are two ways to solve it, and you decide for yourself after that.  

sol1
```c++
int sum_n(int n){
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += i;
    }
    return res;
}
```
sol2
```c++
int sum_n(int n){
    return (n*(n+1)/2);
}
```
Both methods will give tha same result but with different algorithms. So which do you think is better ??  
<br>


### <p id="Big O">Big O Notation</p>
Big O notation is a mathematical notation used to describe the upper bound of an algorithm's runtime. It provides a worst-case scenario for the time complexity of an algorithm.

### Common Time Complexities
1. **Constant Time:** O(1)
    - The execution time does not change with the input size.
    - Example: Accessing an element in an array.
2. **Logarithmic Time:** O(log(n))
    - The execution time grows logarithmically as the input size increases.
    - Example: Binary search in a sorted array.
3. **Linear Time:** O(n)
    - The execution time grows linearly with the input size.
    - Example: Linear search in an unsorted array.
4. **Linearithmic Time:** O(n log(n))
    - The execution time grows as n multiplied by the logarithm of n 
    - Example: Efficient sorting algorithms like Merge Sort and Quick Sort.
  
5. **Quadratic Time:** O(n<sup>2</sup>)
    - Execution time grows quadratically as input size increases.
    - Example: Bubble Sort, where two nested loops iterate through the input.
6. **Cubic Time:** O(n<sup>3</sup>)
    - Execution time grows cubically with the input size.
    - Example: Certain dynamic programming solutions.
7. **Exponential Time:** O(2<sup>n</sup>)
   - Execution time doubles with each additional input element.
   - Example: Solving the Traveling Salesman Problem using brute-force.

8. **Factorial Time:** O(n!)
   - Execution time grows factorially with the input size.
   - Example: Generating all permutations of a set.   

<div align ="center">
<img  src="https://github.com/user-attachments/assets/34e6dd8f-e272-466c-8388-6625e328cb34" alt="Time Complexity graph" width="350"/>
</div>

In fact, there are two other types besides *Big O Notation*:
- [ ] **Big Omega Notation** (<span>Ω</span>)
- [ ] **Big Theta Notation** (<span>Θ</span>)   

Big O notation, Big Theta notation, and Big Omega notation are all mathematical concepts used to describe the time complexity of algorithms, but they serve different purposes. Here’s a comparison of each:

- <a href="#Big O" title ="Go to Big O">**Big O Notation** (O)</a>
  
- **Big Omega Notation** (<span>Ω</span>)
   - **Definition:** Big Omega notation describes the lower bound of an algorithm's running time. It provides a best-case scenario for how the algorithm performs.
   - **Usage:** Used to express the minimum time an algorithm will take.
- **Big Theta Notation** (<span>Θ</span>)
   - **Definition:** Big Theta notation provides a tight bound on the running time of an algorithm. It describes both the upper and lower bounds, meaning it provides an asymptotically tight estimate.
   - **Usage:** Used when the algorithm's running time grows at the same rate for both upper and lower bounds.

#### Summary of Comparison
| Notation                    | Definition        |  Purpose             | Example                |
| :-----:                     | :-------:         |    :---------:       |  :--------:              |
| Big O  (O)                | Upper bound (worst case)|Maximum time   |       O(n<sup>2</sup>)     |
| Big Omega (<span>Ω</span>)  | Lower bound (best case)   |  Minimum time | <span>Ω</span>(n)              |
|Big Theta  (<span>Θ</span>)  |Tight bound (both upper and lower)           |         Exact asymptotic growth            |             <span>Θ</span>  (n log(n))           |


### When to Use Each
- **Big O:** When you want to describe how an algorithm performs in the worst-case scenario.  
- **Big Omega:** When you want to convey the best-case performance of an algorithm.
- Big Theta: When you need to provide a precise characterization of the algorithm’s growth rate, indicating that it behaves consistently in both upper and lower bounds.
  
In practice, **Big O** is the most commonly used notation, but understanding the other two notations is crucial for a comprehensive analysis of algorithm performance.

<br>

## How to Calculate Time Complexity
1. **Identify the Basic Operations:** Determine the most significant operations in the algorithm (e.g., comparisons, assignments) that contribute to its running time.

2. **Count the number of times these operations:** Analyze loops, recursive calls, and other structures to count how many times the basic operations are executed as a function of the input size n.

3. **Express this count using Big O notation:** Simplify the count to its most significant term, ignoring constant factors and lower-order terms.

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## Repo Structure
After each topic, l will post problems on it, most of which are from leetcode (Easy, Med. ,Hard), and l will strive to upload my solations to those problems in c++ and later it may be in  python.

Happy coding❤ Happy Learning❤💡


