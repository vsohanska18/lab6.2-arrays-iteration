#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int sum_min_max(int a[], int n);

#ifndef UNIT_TEST
int main(){
    const int n = 20;
    int a[n], i, low = -20, high = 34, sum;
    srand((unsigned)time(NULL));

    for(i=0; i < n; i++){
        a[i] = low + rand() % (high - low + 1);
    }
    cout << "Початковий масив: " << endl;
    for(i=0; i < n; i++){
        cout << setw(4) << a[i];
    }
    cout << endl;

    sum = sum_min_max(a, n);
    cout << "Сума мінімального та максимального елементів: " << sum << endl;

}
#endif

int sum_min_max(int a[], int n){
    int min = a[0], max = a[0];
    for(int i=1; i < n; i++){
        if (a[i] < min){
            min = a[i];
        }
        if (a[i] > max){
            max = a[i];
        }
    }
    return min + max;
}