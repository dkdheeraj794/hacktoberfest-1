//To print the subarray with the maximum sum, we maintain indices whenever we get the maximum sum.
// C++ program to print largest contiguous array sum 
#include<iostream> 
#include<climits> 
using namespace std; 

int maxSubArraySum(int a[], int size) 
{ 
	int max_so_far = 0, max_ending_here = 0, 
	start =0, end = 0, s=0; 

	for (int i=0; i< size; i++ ) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		if (max_ending_here < 0) 
		{ 
			max_ending_here = 0; 
			s = i + 1; 
		} 

		else if (max_so_far < max_ending_here) 
		{ 
			max_so_far = max_ending_here; 
			start = s; 
			end = i; 
		} 

		
	} 
	cout << "Maximum contiguous sum is "
		<< max_so_far << endl; 
	cout << "Starting index "<< start 
		<< endl << "Ending index "<< end << endl; 
} 

/*Driver program to test maxSubArraySum*/
int main() 
{ 
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
	int n = sizeof(a)/sizeof(a[0]); 
	int max_sum = maxSubArraySum(a, n); 
	return 0; 
} 
