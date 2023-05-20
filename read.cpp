#include "inout.h"
#include <iostream>
using namespace std;
void read(vector<int>& vec) {
    int n;
    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}
