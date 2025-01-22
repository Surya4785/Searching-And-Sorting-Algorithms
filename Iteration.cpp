#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> v, int key) {
      for (int i = 0; i < v.size(); i++) {
      
          if (v[i] == key) {
              return i;
        }
    }
      
      return -1;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};
  
      int key = 8;

      int i = linearSearch(v, key);
      
    if (i != -1)
        cout << key << " Found at Position: " <<
              i + 1;
    else
        cout << key << " NOT found.";
    return 0;
}
