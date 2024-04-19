Minimize The Difference

Problem statement
You are given an array ‘A’ of length ‘N’ consisting only of positive integers and an integer ‘K’. You have to update every element of the array by increasing or decreasing its value by ‘K’ only once. Your task is to minimize the difference between maximum and minimum elements of the array after performing the increment or decrement on every element of the array.

Note: After the operation, every value of the array should remain non-negative.

For example:

Let’s say the array ‘A’ = [1, 2, 3, 4, 5] and ‘K’ = 2, then after increasing each element by ‘K’. The array ‘A’ will become [3, 4, 5, 6, 7]. So the maximum - minimum will be 7 - 3 = 4. 
Detailed explanation ( Input/output format, Notes, Images )
Constraints -
1 <= ‘T’ <= 5
1 <= ‘N’ <= 10^5
1 <= ‘K’ <= 10^9
1 <= A[i] <= 10^9, for 1 <= i <= ‘N’
Note- Sum of ‘N’ over all test cases does not exceed 10^5.

Time Limit: 1 sec
Sample Input-1
2
4 2
1 5 8 10
5 2
1 2 3 4 5
Sample Output-1
5
3
Explanation for Sample Input 1:
For test case 1:
    The final array will look like [3, 3, 6, 8]. So the difference between maximum and minimum is 8 - 3 = 5.
For test case 2:
    The final array will look like [3, 4, 1, 2, 3]. So the difference between maximum and minimum is 4 - 1 = 3.
Sample Input -2
2
1 2
8
3 2
1 3 3
Sample Output -2
0
2