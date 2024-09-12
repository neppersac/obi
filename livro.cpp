#include <iostream>

using namespace std;
int main() {
    long int x, y, z, n;
    cin >> x;
    cin >> y;
    cin >> z;
    cin >> n;
    cout << (x + y + z) % n << endl;
    return 0;
}