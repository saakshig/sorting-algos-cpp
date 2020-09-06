#include <iostream>
using namespace std;

void insertionSort(int a[]);

int main(){
    int a[10];
    std::cout << "Enter 10 numbers\n";
    for(int i = 0; i < 10; i++){
        std::cin >> a[i];
    }

    insertionSort(a);

    std::cout << "\nSorted array\n";
    for(int i = 0; i < 10; i++){
        std::cout << a[i] << "\t";
    }
    std::cout << endl;
}

void insertionSort(int a[]){
    int ptr;
    int temp;
    for(int i = 1; i < 10; i++){
        ptr = i - 1;
        temp = a[i];
        while(temp > a[ptr] && ptr >= 0){
            a[ptr + 1] = a[ptr];
            ptr--;
        }
        a[ptr + 1] = temp;
    }
}