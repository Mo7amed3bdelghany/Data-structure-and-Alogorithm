**An array** is a data structure that stores a collection of elements, typically of the same data type, in a contiguous block of memory. Each element in the array can be accessed using an index, which usually starts at zero.

### Key Features of Arrays:
  - **Fixed Size:** In many programming languages, the size of an array is defined when it is created and cannot be changed.
  - **Indexed Access:** Elements can be accessed directly using their index, allowing for efficient retrieval and modification.
  - **Homogeneous:** Arrays usually store elements of the same data type (e.g., all integers, all strings).

<div align="center">
<img   src="https://github.com/user-attachments/assets/a0ea7a6d-0f2b-4dd3-a2b7-f44df08bc800" width="600" />

</div>
<br>

### To maintain and process the list in an array, we need the following three variables
  - The array holding the list elements.
  - A variable to store the length of the list, in other world (The maximum number of elements currently in the array).
  - A variable to store the size of the list, in other world (The maximum number of elements that can be stored in the array).   

### Function
  - **max():**  Return the maximum value on the list.
  - **min():**  Return the minimum value on the list.
  - **isfull():** Return True if the list is full. otherwise, return False.
  - **isempty():** Return True if the list is empty. otherwise, return False.
  - **Getlength():** Return the length of the list.
  - **Getsize():** Return the max size of the list.
  - **print():** Print the whole of the list from begin to end.
  - **partition(l, r):** Print the elements from **l** to **r** of the list.
  - **clear():** Remove all the elements from the list, so the length became zero.
  - **removeDubble():** Remove all duplicate numbers from the list.
  - **reverse():** Reverse the list from begin to end.
  - **reverse(l, r):** Reverse the list from **l** to **r**
  - **append(item):** Insert **item** at end of the list.
  - **insert(indix, item):** Insert **item** at **indix** of the list.
  - **at(indix):** Return the value in the **indix**.
  - **replace(indix, item):** Replace the value in the **indix** with **item**. 
  - **remove_at(indix):** Remove the element in the **indix**.
  - **remove(item):** Find its indix and then deletes it.
  - **count(item):** Return the number **item** in the list.
  - **search(item):** Search about the **item** and if found it return its indix. otherwise return -1.
  - **indix(item):** The same thing **search** does.
  - **sum():** Return the sum of all numbers in the list.
 #### Copy Constructor :
  * list = {a,b,c,d}
  * list (otherlist)
  * list = otherlist

#### Destructor:
  - **~ArrayADT()**

### Time Complexity Of List Operations
| Function   | Time-Complexity    | 
| :-----:  | :-------:| 
| isempty   |O(1)   |
| isfull  | O(1)      |  
| Getlength  | O(1)      |  
| Getsize | O(1)      |  
| clear  | O(1)      |  
| Destructor  | O(1)      |  
| at  | O(1)      |  
| replace  | O(1)      |  
|append | O(1)      |  
| Copy Constructor  | O(n)      |  
| max  | O(n)      |  
| min  | O(n)      |  
|print | O(n)      |  
| partition| O(n)      |  
|removeDubble | O(n)      |  
|reverse | O(n)      |  
|remove | O(n)      |  
|count | O(n)      |  
|indix | O(n)      |  
|sum | O(n)      |  
|search | O(n)      |  
|insert | O(n)      |  


### Applications
1. Data Storage
  - **Lists and Collections:** Arrays serve as the underlying structure for lists, sets, and other collections in programming languages.
2. Image Processing
  - **Pixel Representation:** Images are often represented as 2D arrays of pixels, where each pixel can contain color information.
3. Mathematics and Statistics
  - **Matrices:** Arrays are used to represent matrices in linear algebra for operations such as addition, multiplication, and inversion.
4. Game Development
  - **Game Boards:** Arrays can represent game grids (like chessboards or tic-tac-toe) and manage game states.
5. Database Management
  - **Indexed Storage:** Arrays can be used to implement indexes for faster data retrieval in databases.
6. Signal Processing
  - **Time Series Data:** Arrays can represent sequences of audio or sensor data for analysis and processing.
7. Machine Learning
  - **Feature Representation:** In machine learning, datasets are often represented as arrays, where each row is a data point and each column is a feature.
8. Sorting and Searching
  - **Efficient Algorithms:** Arrays are used in algorithms like quicksort and binary search to manage and operate on collections of data efficiently.
9.   Text Processing
  - **Character Arrays:** Strings can be represented as arrays of characters, allowing for various string manipulation operations.


Enjoy🤗