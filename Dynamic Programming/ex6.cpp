#include <iostream>
#include <algorithm>

using namespace std;

//O(n)

int houses[5] = {5, 7, 1, 2, 4};
int memo[5] = {-1, -1, -1, -1, -1};
int n = 5;

int solve(int i){ // recursive solution
    if(memo[i] != -1) return memo[i];
    if(i >= n) return 0;
    return memo[i] = max(solve(i + 1), houses[i] + solve(i + 2));
}

int solveIter(int j){ // iterative solution
    memo[n-1] = houses[n-1];
    memo[n-2] = max(memo[n-1], houses[n-2]);
    for(int i = n-3; i >= 0; i--){
        memo[i] = max(houses[i] + memo[i+2], memo[i+1]);
    }
    return memo[j];
}

int main(void) {
    cout << "Recursive solution: " << solve(0) << endl;
    cout << "Iterative solution: " <<  solveIter(0) << endl;
    return 0;
}

