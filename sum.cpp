#include <iostream>
using namespace std;

int quadrat_mss(const int* arr, int size){
    int maxSum = 0;
    for(int i=0; i < size; i++){
        int thisSum = 0;
        for(int j = i; j < size; j++){
            thisSum = thisSum + arr[j];
            if(thisSum > maxSum){
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int cubic_mss(const int*arr, int size){
    int maxSum = 0;
    for(int i=0; i < size; i++){
        for(int j = i; j < size; j++){
            int thisSum = 0;
            for(int k = i; k <= j; k++){
                thisSum = thisSum + arr[k];
            }
            if(thisSum > maxSum){
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int linear_mss(const int*arr, int size){
    int maxSum = 0;
    int thisSum = 0;
    for(int i=0; i < size; i++){
        thisSum = thisSum + arr[i];
        if(thisSum > maxSum)
            maxSum = thisSum;
        else if(thisSum < 0)
            thisSum = 0;
    }
    return maxSum;
}


int main () {
    static const int arr1[] = {1, 2, -30, 4, 5};
    int mss1 = cubic_mss(arr1, sizeof(arr1)/sizeof(int));
    cout << mss1 << endl;
    //more test cases here
    return 0;
}
