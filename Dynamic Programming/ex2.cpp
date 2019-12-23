#include <iostream>
#include <algorithm>

using namespace std;


int s[5] = {1, 3, 9, 4, 5};
int sumS = 22;
int memo[5][23];
int n = 5;


int solve(int i, int cur) {
    if(memo[i][cur] != -1) return memo[i][cur];
    if(i == n-1) return memo[i][cur] = abs((2 * cur) - sumS);
    return memo[i][cur] = min(solve(i + 1, cur+s[i]), solve(i + 1, cur));
}

int main(void) {
    for(int i = 0; i < 5; i++)
        for(int j = 0; j <= sumS; j++) memo[i][j] = -1;
    cout << solve(0, 0) << endl;
    return 0;
}