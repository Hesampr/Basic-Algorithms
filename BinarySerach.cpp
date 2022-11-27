#include <bits/stdc++.h>
using namespace std;


// left : index of first element
// right : index of last element
int Recursive_BinarySearch(int arr[], int left , int right , int key)
{
    if (right>= 1){
        int mid = ((right-1)+left)/2 ; 
    
    if (arr[mid]==key)
        return key ; 
    else if(arr[mid]>key)
        return (arr,left,mid-1,key);
    else if (arr[mid] < key)
        return(arr,mid+1,right,key);
    
    }
    else
        return -1 ; 
}


// Some definition 
int n;
const int MAXN = 1010;
int ar[MAXN];

int main()
{
    // Reading array
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    // print sorted array
    cout << BinarySearch(ar,0,n-1,10) << endl;
    return 0;
}