#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){ // O(nlogn) (due to the sort), n = v.size()
    vector<double> v;
    double temp = 1;
    cin >> temp;
    while(temp) {
        v.push_back(temp);
        cin >> temp;
    }

    sort(v.begin(), v.end());

    int count = 0;
    int minSize = 999999;
    vector<double> minVec;
    vector<double> d;

    for(auto i : v) {
        if(!count) {
            d.push_back(i);
            count ++;
        }
        else {
            if(d.front() + 1 >= i) {
                d.push_back(i);
                count ++;
            }
            else {
                if(count < minSize){
                    minSize = count;
                    minVec = d;
                }
                count = 1;
                d.clear();
                d.push_back(i);
            }
        }
    }
    if(count < minSize){
        minSize = count;
        minVec = d;
    }

    cout << "minSize:" << minSize << endl << "minvec: ";
    for(auto i : d) cout << i << " ";
    cout << endl;

    return 0;   
}