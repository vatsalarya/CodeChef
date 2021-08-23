// You are given N binary strings of length N each. You need to find a binary string of length N which is different from all of the given strings.

// Note:

// A binary string is defined as a string consisting only of '0' and '1'.
// A string is considered different from another string when they have different lengths, or when they differ in at least one position.
// Input Format
// The first line will contain T - the number of test cases. Then the test cases follow.

// The first line of each test case contains N - the number of strings and length of strings.

// Each of the next N lines contains a binary string of length N.

// Output Format
// For each test case, print on one line a binary string of length N, which is different from all of the given strings. If there are multiple possible answers, print any.

// Constraints
// 1≤T≤100
// 1≤N≤100
// Sample Input 1 
// 2
// 3
// 101
// 110
// 100
// 4
// 1100
// 1010
// 0100
// 0010
// Sample Output 1 
// 111
// 1101
// Explanation
// Test case 1: 111 is different from 101 , 110 , 100.

// Test case 2: 1101 is different from 1100 , 1010 , 0100 , 0010.


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string ans = "";
        vector<string> str(n);
        for(int i=0; i<n;i++)
            cin >> str[i];
        for(int i=0; i<n;i++){
            if(str[i][i] == '0')
                ans += '1';
            else
                ans += '0';
        }
        cout<<ans<<endl;
    }
    return 0;
}