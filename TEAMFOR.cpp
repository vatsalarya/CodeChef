// A programming competition will be held in Chef's city which only accepts teams of size 2. At least one person in a team should know a programming language and at least one person should know about the English language. It is possible that one person in a team knows both programming and the English language. Then the qualification of the other teammate is not important i.e. he may or may not know programming and English. Now Chef has N students and wants to send maximum number of teams to the competition.

// You are given an integer N and two binary strings S and T of length N. Si= '1' denotes that the ith student knows a programming language, and Si= '0' denotes otherwise; similarly, Ti= '1' denotes that the ith student knows English language, and Ti= '0' denotes otherwise. Determine the maximum number of teams Chef can form.

// Input Format
// The first line of input contains a single integer Q denoting the number of test cases. The description of Q test cases follows.
// Each test case contains 3 lines of input.
// The first line of each test case contains an integer N.
// The second line of each test case contains a string S.
// The last line of each test case contains a string T.
// Output Format
// For each test case, print a single line containing one integer - the maximum number of teams that Chef can form.

// Constraints
// 1≤Q≤1000
// 1≤N≤100
// S and T contains only characters '0' and '1'
// Sample Input 1 
// 4
// 3
// 101
// 001
// 4
// 1010
// 0110
// 3
// 000
// 110
// 2
// 10
// 11
// Sample Output 1 
// 1
// 2
// 0
// 1
// Explanation
// Test case 1: The third student can team up with any other students as he knows both programming and English.

// Test case 2: The first two students make a team and the last two students make another team.

// Test case 3: No student knows how to program, hence there is no way to make a team.

#include <iostream>
using namespace std;

int main() {
	long long Q,N,S_1, T_1, ans;
	string S, T;
	cin >> Q;
	while(Q--){
	    S_1=0;
	    T_1=0;
	    cin >> N >> S >> T;
	    for(int i=0; i<N; i++){
	        if(S[i] == '1'){
	            S_1++;
	        }
	        if(T[i] == '1'){
	            T_1++;
	        }
	    }
	    ans = S_1 < T_1 ? S_1 : T_1;
	    ans = ans < N/2 ? ans : N/2;
	    cout << ans << endl;
	}
	return 0;
}
