#include <bits/stdc++.h>
using namespace std ; 
const int MAXN = 1010;
int n , array1[MAXN]; 



void merge(int n , int arr[]){
    
    for(int i =0 ; i < n ; i++)
        while (i>0 && arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);  
            i--;
        }

    
    for(int i =0 ; i < n ; i++)
        cout << arr[i] << " " ; 
}

int main(){
    cin >> n ; 
    for (int i =0 ; i < n ; i++)
        cin >> array1[i]; 

    merge(n,array1) ;
}