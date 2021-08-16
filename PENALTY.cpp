// It's the soccer match finals in Chefland and as always it has reached the penalty shotouts. Each team is given 5 shots to make and the team scoring a goal on the maximum number of shots wins the game. If both the teams' scores are equal, then the game is considered a draw and we would have 2 champions.

// Given ten integers A1,A2,…,A10, where the odd indexed integers(A1,A3, A5, A7,A9) represent the outcome of the shots made by team 1 and even indexed integers(A2,A4,A6,A8,A10) represent the outcome of the shots made by team 2 (here Ai=1 indicates that it's a goal and Ai=0 indicates a miss), determine the winner or find if the game ends in a draw.

// Input Format
// The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains ten space-separated integers A1,A2,…,A10.
// Output Format
// For each test case, print a single line containing one integer - 0 if the game ends in a draw or 1 if the first team wins or 2 if the second team wins.

// Constraints
// 1≤T≤1024
// 0≤Ai≤1
// Sample Input 1 
// 4
// 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 1
// 1 0 1 0 0 0 0 0 0 0 
// 1 1 1 1 1 1 1 1 1 0
// Sample Output 1 
// 0
// 2
// 1
// 1
// Explanation
// Test case 1: No team scores any goal, so the game ends in a draw.

// Test case 2: The second team is able to score in their final shot, while the first team has scored 0 goals and hence the second team wins.

// Test case 3: The first team is successfully able to make their first 2 shots count and whereas the second team has not scored any goals. Therefore the first team wins.

// Test case 4: Team 2 misses their final shot and hence team 1 wins the game with the final score of 5−4.


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, team1, team2, input;
    cin >> t;

    while(t--){
        team1 = 0;
        team2 = 0;
        for(int i=1; i<11; i++){
            cin >> input;
            if(i%2 == 0){
                if( input > 0)
                    team1++;
            }
            else{
                if( input > 0)
                    team2++;
            }
        }
        if(team1 > team2)
            cout << 1 << endl;
        else if(team1 < team2)
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }
}