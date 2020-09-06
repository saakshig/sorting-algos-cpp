#include <iostream>
using namespace std;

void mergeSort(int a[]);
void merge(int a[], int, int, int);

int main(){
    int a[10];
    std::cout << "Enter 10 numbers\n";
    for(int i = 0; i < 10; i++){
        std::cin >> a[i];
    }

    mergeSort(a);

    std::cout << "\nSorted array\n";
    for(int i = 0; i < 10; i++){
        std::cout << a[i] << "\t";
    }
    std::cout << endl;
}

void mergeSort(int a[]){
    int mid;    //mid location of the array
    int ub; //upper bound of the array
    //size - current size of the array i.e. 1, 2, 4, 8, etc
    //lb - lower bound of the array
    for(int size = 1; size < 10; size = 2*size){
        for(int lb = 0; lb < 9; lb = lb + (2*size)){
            mid = std::min(lb + size - 1, 9);
            ub = std::min(lb + (2*size) - 1, 9);
            merge(a, lb, mid, ub);
        }
    }
}

void merge(int a[], int lb, int mid, int ub){
    int n1 = mid - lb + 1;
    int n2 = ub - mid;
    int b[n1], c[n2];

    for(int i = 0; i < n1; i++){
        b[i] = a[lb + i];
    }

    for(int i = 0; i < n2; i++){
        c[i] = a[mid + 1 + i];
    }

    int nb = 0, nc = 0, ptr = lb;

    while(nb < n1 && nc < n2){
        if(b[nb] <= c[nc]){
            a[ptr++] = b[nb++];
        }
        else if(b[nb] > c[nc]){
            a[ptr++] = c[nc++];
        }
    }

    if(nb >= n1){
        for(int i = nc; i < n2; i++){
            a[ptr++] = c[i];
        }
    }
    if(nc >= n2){
        for(int i = nb; i < n1; i++){
            a[ptr++] = b[i];
        }
    }
}