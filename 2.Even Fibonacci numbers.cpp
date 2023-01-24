#include <iostream>
using namespace std ;
int main() {
  long long int sum = 0 ,t;
  long long int arr [2] ;
  arr[0] = 1 ;
  arr[1] = 2 ;
  while(arr[1] < 4000000){

    if(arr[1]%2 == 0)sum+=arr[1] ;
    
    t = arr[1] ; 
    arr[1] = t + arr[0] ;
    arr[0] = t ;
    
  }
  cout << sum << endl ; 
  return 0 ; 
}

//4,000,000

