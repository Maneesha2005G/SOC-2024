#include <iostream>
#include <string>

using namespace std;

bool canReachDestination(int n, const string& row1, const string& row2) {
    bool sameDirection = true;
    for (int i = 0; i < n; ++i) {
        if (row1[i] != row2[i]) {
            sameDirection = false;
            break;
        }
    }

    if (sameDirection) {
         return true;
    }

  /*  for (int i = 0; i < n - 1; ++i) {
        if (row1[i] == '>' && row2[i] == '>' && row1[i + 1] == '>' && row2[i + 1] == '>') {
            return true;
        }
    }*/

      return false;
}

int main() {
    int t;
    cin >> t;
    
   while (t--) {
        int n;
        cin >> n;
        
        string row1, row2;
        cin >> row1 >> row2;
        
        if (canReachDestination(n, row1, row2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

