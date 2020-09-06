#include <iostream>
using namespace std;

void bubbleSort(int a[]);

int main(){
    int a[10];
    std::cout << "Enter 10 numbers\n";
    for(int i = 0; i < 10; i++){
        std::cin >> a[i];
    }

    bubbleSort(a);

    std::cout << "\nSorted array\n";
    for(int i = 0; i < 10; i++){
        std::cout << a[i] << "\t";
    }
    std::cout << endl;
}

void bubbleSort(int a[]) {
    int temp;
    bool swapped = false;
    for(int i = 0; i < 9; i++){
        swapped = false;
        for(int j = 0; j < 9; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
    }
}