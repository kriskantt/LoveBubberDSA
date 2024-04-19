#include <bits/stdc++.h>
int minimizeIt(vector<int> A, int K)
{
	// Write your code here.
	if(A.size()==1) {
		return 0;
	}

	int min_diff = INT_MAX;
	sort(A.begin(), A.end());

	for(int reversePt=1;reversePt<A.size();reversePt++) {
		vector<int> extremeVal;
		if(reversePt==A.size()-1) {
			extremeVal.push_back(A[0]+K);
			extremeVal.push_back(A[reversePt] + K);
		}
		else {
			extremeVal.push_back(A[0]+K);
			extremeVal.push_back(A[reversePt] + K);
			extremeVal.push_back(A[reversePt + 1] - K);
			extremeVal.push_back(A[A.size() - 1] - K);
        }
		sort(extremeVal.begin(), extremeVal.end());
		if(extremeVal[0]<0) {
			continue;
		}
		int min = extremeVal[0], max = extremeVal[extremeVal.size()-1];
		int diff = max-min;

		if(min_diff>diff) {
			min_diff = diff;
		}
    }

	return min_diff;
}

/*
    Time Complexity: O(N).
    Space Complexity: O(1).

    Where 'N' is the length of the array.
*/

// int minimizeIt(vector<int> A, int K)
// {
//     int n = A.size();
//     sort(A.begin(), A.end());
//     int ans = A[n - 1] - A[0];
//     int minimum = A[0] + K;
//     int maximum = A[n - 1] - K;
//     int current_minimum, current_maximum;
//     for (int i = 0; i < n - 1; i++)
//     {
//         // Finding the minimum and the maximum value if we perform the decrement operation on all the
//         // indexes greater than index ‘i’ and increment operation until the index ‘i’.
//         current_minimum = min(A[i + 1] - K, minimum);
//         current_maximum = max(A[i] + K, maximum);
//         // Checking if minimum value is non-negative or not.
//         if (current_minimum >= 0)
//         {
//             ans = min(ans, current_maximum - current_minimum);
//         }
//     }
//     return ans;
// }