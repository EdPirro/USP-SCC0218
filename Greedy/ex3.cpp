#include <iostream>
#include <vector>

using namespace std;

int main(void) {  // O(n), n = dists.size()
    vector<int> dists;
    int n;
    cin >> n;
    int m;
    cin >> m;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        dists.push_back(temp);
    }
    int nStops = 0;
    int base = 0;
    vector<int> stops;

    for(int i = 1; i < dists.size(); i++){
        if(dists.at(i) - base> m) {
            nStops++;
            stops.push_back(dists.at(i-1));
            base = dists.at(i - 1);
        }
    }
    
    cout << nStops << "\nStops must be made at: ";
    for(auto i : stops) cout << i << " ";
    cout << endl;

    return 0;
}