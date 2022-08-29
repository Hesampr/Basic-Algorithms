#include <bits/stdc++.h>
using namespace std ;

const int MAXN = 1010 ; 
int n , array1[MAXN] ;


void Bubble(int n, int a[]){
    
    for (int i = 0 ; i <n-1 ; i++)
        for (int j = 0 ; j < n-i-1; j++)
            if(a[j]> a[j+1])
                swap(a[j],a[j+1]) ; 
    
   

     for (int k = 0 ; k <n ; k++)
        cout << a[k]<< " " ; 
}

int main(){
    cin >> n ;  
    for (int i = 0 ; i < n ; i++)
        cin >> array1[i] ; 

    Bubble(n,array1) ; 
    
}