#include <iostream>
#include <cmath>
using namespace std;

void radixSort(int a[]);
int findMax(int a[]);
int numberOfDigits(int);

int main(){
    int a[15];
    std::cout << "Enter 15 numbers\n";
    for(int i = 0; i < 15; i++){
        std::cin >> a[i];
    }

    radixSort(a);

    std::cout << "\nSorted array\n";
    for(int i = 0; i < 15; i++){
        std::cout << a[i] << "\t";
    }
    std::cout << endl;
}

void radixSort(int a[]){
    int n = numberOfDigits(findMax(a));
    int b[10][15];
    int rem;
    int k = 0;
    int x = 1;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 15; j++){
            b[i][j] = -9999;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 15; j++){
            rem = (a[j] / x) % 10;
            b[rem][j] = a[j];
        }

        k = 0;
        for(int l = 0; l < 10; l++){
            for(int m = 0; m < 15; m++){
                if(b[l][m] != -9999){
                    a[k++] = b[l][m];
                    b[l][m] = -9999;
                }
            }
        }
        x = x * 10;
    }

    k = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 15; j++){
            if(b[i][j] != -9999){
                a[k++] = b[i][j];
            }
        }
    }
}

int findMax(int a[]){
    int max = a[0];
    for(int i = 1; i < 15; i++){
        if(max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int numberOfDigits(int max){
    int digits = 0;
    while(max > 0){
        max = max/10;
        digits++;
    }
    return digits;
}