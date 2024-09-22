#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minInd = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        swap(arr[i], arr[minInd]);
    }
}

void printArr( int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr)/sizeof(int);

    printArr(arr,n);
    selectionSort(arr, n);
    printArr(arr,n);
}