#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) { // O(nlogn), n = hK.sze();

    vector<int> hK;
    int nHouses = 0;
    cin >> nHouses;
    for(int i = 0; i < nHouses; i++){
        int temp;
        cin >> temp;
        hK.push_back(temp);
    }
    sort(hK.begin(), hK.end());
    int lastTowerRange = -1;
    int nTowers = 0;
    vector<int> towerKms;
    for(auto i : hK){   
        if( i > lastTowerRange) {
            nTowers++;
            lastTowerRange = i + 8;
            towerKms.push_back(i + 4);
        }
    }
    cout << nTowers << " torres colocadas nas kilometragens: ";
    for(auto i : towerKms) cout << i << " ";
    cout << endl;
    return 0;
}