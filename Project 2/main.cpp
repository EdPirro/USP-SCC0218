#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>

#define MAX_N 1000

int o, n, m;
std::vector<int> rest;
int memo[MAX_N];

std::vector<int> w;
int memoW[MAX_N];

int solve(int n) {
    if (n == 0) return memo[n] = 1;

    if (memo[n] != -1) return memo[n];

    int res = 0;

    for (int i : rest) {
        if (i > n) continue;
        res += solve(n - i);
    }

    return memo[n] = res;
}

int solveChallange(int n) {
    if (n == 0) return 0;

    if (memoW[n] != -1) return memoW[n];

    int res = 0;

    for (int i = 0; i < rest.size(); i++) {
        if (rest[i] > n) continue;
        res = std::max(w[i] + solveChallange(n - rest[i]), res);
    }

    return memoW[n] = res;
}


int main(void) {
    
    //  input format:
    //      o
    //      n m
    //      x1 ... xm
    //      w1 ... wm if o = 1

    //  where, 
    //      o is the desired option (0-possibilities count, 1-maximum weight)
    //      n is number of steps of the stair
    //      m is the number of restrictions
    //      x1 ... xm are the restrictions
    //      w1 ... wm are the restrictions' weight

    //  sample:

    //  input:
    //      0
    //      10 2
    //      1 5

    //  output:
    //      8 maneiras

    //  explanation:
    //      1st: 1 1 1 1 1 1 1 1 1 1
    //      2nd: 1 1 1 1 1 5
    //      3rd: 1 1 1 1 5 1
    //      4th: 1 1 1 5 1 1
    //      5th: 1 1 5 1 1 1
    //      6th: 1 5 1 1 1 1
    //      7th: 5 1 1 1 1 1
    //      8th: 5 5
    //std::cout << "insira a opção desejada (0 - Contagem de possibilidades. 1 - Peso Maximo.): ";
    std::cin >> o;
    if(o != 0 && o != 1) {
        std:: cout << "Entrada inválida";
        return 0;
    }
    //std::cout << "qtd de degraus: ";
    std::cin >> n;
    //std::cout << "numero de restricoes: ";
    std::cin >> m;
    //std::cout << "escreva " << m << " restricoes: ";
    for (int i = 0; i < m; i++) {
        int r;
        std::cin >> r;
        rest.push_back(r);
    }
    if(o == 1) {
        //std::cout << "escreva o peso das m restriçoes: ";
        for (int i = 0; i < m; i++) {
            int r;
            std::cin >> r;
            w.push_back(r);
        }
    }

    //initialize memos
    for (int i = 0; i <= n; i++)
        memo[i] = memoW[i] = -1;

    o == 0 ? std::cout << solve(n) << " maneiras" << std::endl : std::cout << "o maior peso eh: " << solveChallange(n) << std::endl;
    return 0;
}