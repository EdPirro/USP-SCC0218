#include <iostream>

using namespace std;

int n = 5;
int m = 5;
int memo[6][6] = {{-1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1},{-1, -1, -1, -1, -1, -1}};

// O (n*m)

int solve(int i, int j){
    int paths = 0;
    if(memo[i][j] != -1) return memo[i][j];
    if(i == n && j == m){
        memo[i][j] = 1;
        return 1;
    }
    if(i < n){
        paths += solve(i + 1, j);
    }
    if(j < m){
        paths += solve(i, j + 1);
    }
    return memo[i][j] = paths;
}

int solveIter(int k, int l){
    memo[n][m] = 1;
    for(int i = n; i >= 0; i--) {
        for(int j = m; j >= 0; j--){
            int a = 0;
            int b = 0;
            if(i != n)a = memo[i+1][j];
            if(j != m)b = memo[i][j+1];
            if(i != n || j != m) memo[i][j] = a + b;
        }
    }
    return memo[k][l];
}

int main(void) {
    cout << "Resursive solution: " << solve(0, 0) << endl;
    cout << "Iterative solution: " << solveIter(0, 0) << endl;
    return 0;
}