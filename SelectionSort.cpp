#include <bits/stdc++.h>
using namespace std ; 
const int MAXN = 1010 ; 
int n , array1[MAXN]; 

int main (){
    cin >> n ; 
    for(int i =0 ; i < n; i++)
        cin >> array1[i] ; 


    for (int j = 0 ; j < n ; j++ ){
        int min_idx = j ; 
        for (int k = j ; k < n ; k++){
            if(array1[min_idx] > array1[k])
                {
                    min_idx = k ; 
                }
        }
                swap(array1[j],array1[min_idx]) ;
    }


    for(int z =0 ; z < n; z++)
        cout << array1[z] << " "; 


}