#include <iostream>
using namespace std;

void quickSort(int a[], int, int);
int getPartition(int a[], int, int);

int main(){
    int a[10];
    std::cout << "Enter 10 numbers\n";
    for(int i = 0; i < 10; i++){
        std::cin >> a[i];
    }

    quickSort(a, 0, 9);

    std::cout << "\nSorted array\n";
    for(int i = 0; i < 10; i++){
        std::cout << a[i] << "\t";
    }
    std::cout << endl;
}

void quickSort(int a[], int lb, int ub) {
    if(lb < ub) {
        int pivot = getPartition(a, lb, ub);

        quickSort(a, lb, pivot - 1);
        quickSort(a, pivot + 1, ub);
    }
}

int getPartition(int a[], int lb, int ub){
    int left = lb, right = ub - 1, pivot = a[ub], temp;

    while(left <= right){
        if(a[left] > pivot && a[right] < pivot) {
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            right--;
            left++;
        }
        else if(a[left] > pivot && a[right] > pivot) {
            right--;
        }
        else if(a[left] < pivot && a[right] < pivot) {
            left++;
        }
    }

    a[ub] = a[left];
    a[left] = pivot;
    return left;
}