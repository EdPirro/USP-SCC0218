#include <iostream>

using namespace std;

// O(n)

int n = 10;
int memo[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int solve(int i) { // recursive solution
    if(i > n) return -1;
    if(memo[i] != -1) return memo[i];
    if(i == 0) return memo[i] = 1;
    if(i == 1) return memo[i] = 1;
    return memo[i] = solve(i - 1) + solve(i - 2);
}

int solveIter(int j){ // iterativve solution
    memo[0] = 1;
    memo[1] = 1;
    for(int i = 2; i <= n; i++) memo[i] = memo[i-1]  + memo[i-2];
    return memo[j];
}

int main(void) {
    cout << "Recursive solution: " << solve(10) << endl;
    cout << "Iterative solution: " << solveIter(10) << endl;
    return 0;
}