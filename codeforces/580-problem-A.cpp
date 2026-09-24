#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    stack<int> s;
    int tamanhomax = 0;
    int tamanhoat= 0;

    for (int i = 0; i < n; ++i) {
        if (s.empty() || a[i] >= s.top()) {
            s.push(a[i]);
            tamanhoat++;
        } else {

            if (tamanhoat > tamanhomax) {
                tamanhomax = tamanhoat;
            }

            while (!s.empty()) {
                s.pop();
            }
            s.push(a[i]);
            tamanhoat = 1;
        }
    }

    if (tamanhoat > tamanhomax) {
        tamanhomax = tamanhoat;
    }

    cout << tamanhomax << endl;

    return 0;
}
