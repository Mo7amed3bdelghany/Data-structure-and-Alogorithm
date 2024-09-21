# KMP Algorithm

The Knuth-Morris-Pratt (**KMP**) algorithm is an efficient string matching algorithm that finds occurrences of a *pattern* string within a *text* string. It preprocesses the pattern to create a longest prefix-suffix (**LPS**) array, which helps avoid unnecessary comparisons.    

## Explanation of the Code
1. LPS Array Calculation:   
The LPS function generates the LPS array for the given pattern. This array is used to skip unnecessary comparisons in the pattern during the search.     
<img  height=150px alt="LPS Array" src="https://github.com/user-attachments/assets/7da67dd2-44c4-43dd-a421-0203fc3e48eb" />


1. KMP Search:    
  - The KMP function takes the text and pattern as input.
  - It uses two indices, i (for the text) and j (for the pattern), to traverse the text and pattern.
  - When characters match, both indices are incremented. If a complete match of the pattern is found, it prints the starting index.
  - If characters do not match, it uses the LPS array to skip some comparisons.   
<img  width="400" height=200px alt="KMP search" src="https://github.com/user-attachments/assets/8d24c09d-bd0d-4c8f-9eec-9c1fe6a1816a" />

## Time Complexity
  - **Preprocessing:** O(m), where m is the length of the pattern
  - **Searching:** O(n),  where n is the length of the text.
  - **Overall:** O(n + m)

