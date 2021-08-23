// Given the rating R of a person, tell which division he belongs to. The rating range for each division are given below:

// Division 1: 2000≤ Rating.
// Division 2: 1600≤ Rating <2000.
// Division 3: Rating <1600.
// Input Format
// The first line of the input contains T - the number of test cases. Then the test cases follow.
// Each testcase contains a single line of input, which contains a single integer R.
// Output Format
// For each test case, output on a single line the answer: 1 if the person belongs to Division 1, 2 if the person belongs to Division 2, and 3 if the person belongs to Division 3.

// Constraints
// 1≤T≤1000
// 1000≤R≤4500
// Sample Input 1 
// 3
// 1500
// 4000
// 1900
// Sample Output 1 
// 3
// 1
// 2
// Explanation
// Test case 1: Since the rating of the person lies in the range [1000,1600), he belongs to Division 3.

// Test case 2: Since the rating of the person lies in the range [2000,4500], he belongs to Division 1.

// Test case 3: Since the rating of the person lies in the range [1600,2000), he belongs to Division 2.

#include <iostream>
using namespace std;

int main() {
	long long t, R ,ans;
	cin >> t;
	while(t--){
	    cin >> R;
	    if(R >= 1000 && R < 1600){
	        ans = 3;
	    }
	    else if(R >= 1600 && R < 2000){
	        ans = 2;
	    }
	    else if(R >= 2000){
	        ans = 1;
	    }
	    cout << ans << endl;
	}
	return 0;
}
