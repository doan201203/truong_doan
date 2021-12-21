#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
	int dem = 0;
    int a[1000], b[1000], c;
    cin >> n;
	cin >> m;
    for (int i = 0; i < n; i++)
	{
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
	{
        cin >> c;
        for (int j = 0; j < n; j++){
            if (a[j] == c){
                b[dem] = c;
                dem++;
            }
        }
    }
    if (dem == 0){
        cout << "Empty";
        return 0;
    }
    sort(b, b + dem);
    for (int i = 0; i < dem; i++){
        cout << b[i] << " ";
    }
}