#include <iostream>
using namespace std;

void selectionSort(int a[]);

int main(){
    int a[10];
    std::cout << "Enter 10 numbers\n";
    for(int i = 0; i < 10; i++){
        std::cin >> a[i];
    }

    selectionSort(a);

    std::cout << "\nSorted array is :\n";
    for(int i = 0; i < 10; i++){
        std::cout << a[i] << "\t";
    }
    std::cout << endl;
}

void selectionSort(int a[]){
    int min;
    //int temp;
    int loc;
    for(int i = 0; i < 9; i++){
        min = a[i];
        loc = i;
        for(int j = i + 1; j < 10; j++){
            if(min > a[j]){
                min = a[j];
                loc = j;
            }
        }
        a[loc] = a[i];
        a[i] = min;
    }
}