#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
};

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
    }

    for (int k = 0; k < n - 1; k++) {
        for (int x = k + 1; x < n; x++) {
            int l = a[k].math + a[k].eng;
            int y = a[x].math + a[x].eng;
            if (l < y) {
                swap(a[k], a[x]);
            } else if (l == y && a[k].id > a[x].id) {
                swap(a[k], a[x]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].cls << " "
             << a[i].section << " " << a[i].id << " "
             << a[i].math << " " << a[i].eng << endl;
    }

    return 0;
}
