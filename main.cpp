// 1-mashq
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b, c));
}
// 2-mashq
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a, min(b, c));
}
// 3-mashq
#include <iostream>
using namespace std;

int main() {
    int n, x, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    cout << sum;
}
