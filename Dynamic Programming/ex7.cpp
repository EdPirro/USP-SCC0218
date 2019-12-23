#include <iostream>
#include <algorithm>

using namespace std;

int vec[5] = {1, 2, 3, 0, 2};
int memo[5][2][2] = {{{-10, -10}, {-10, -10}}, {{-10, -10}, {-10, -10}}, {{-10, -10}, {-10, -10}}, {{-10, -10}, {-10, -10}}, {{-10, -10}, {-10, -10}}};
int n = 5;

int solve(int i, bool canSell, bool canBuy){ // O(n)
    int a = 0;
    if(canSell) a = 1;
    int b = 0;
    if(canBuy) b = 1;
    if(i >= n) {
        return 0;
    }
    if(memo[i][a][b] != -10) return memo[i][a][b];

    // if can sell selling = the value he would get by selling + next iter not beig able to sell but being able to buy
    int selling = -10000;
    if(canSell) selling = vec[i] + solve(i + 2, false, true); 

    // if can buy then buying = next iter being able to sell but not to buy - how much he would spend to buy
    int buying = -10000;
    if(canBuy) buying = solve(i + 1, true, false) - vec[i];

    // not doig anything, keeps going wo changing canSell and canBuy
    int doingNothing = solve(i + 1, canSell, canBuy);

    // return the most proftable option
    return memo[i][a][b] = max(buying, max(selling, doingNothing));
}   

int main(void) {
    cout << solve(0, false, true) << endl; // starts day 0 beign able to buy (day 0 empty-handed)
    return 0;
}