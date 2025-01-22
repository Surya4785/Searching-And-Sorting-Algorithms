#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& v, int key, int i) {
  
    if (i == v.size()) {
        return -1;
    }
    
    if (v[i] == key) {
        return i;
    }

    return linearSearch(v, key, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};
  
    int key = 8;

    int i = linearSearch(v, key, 0);
    
    if (i != -1) {
        cout << key << " Found at Position: "
          << i + 1;
    } else {
        cout << key << " NOT found.";
    }
    
    return 0;
}
