#include <iostream>
using namespace std ;
int palindrome(int product){
  int arr[10] ; 
  int c = 0;
  while(product){
    arr[c] = product%10;
    product = product/10 ;
    c++;
  }
  c-- ; 
  for(int i = 0;i<c;i++,c--){
    if(arr[i] != arr[c])return 0 ;
  }
  return 1 ; 
}

int main() {
  int largepal = 0 ;
  for(int i = 999;i > 99;i--){
    for(int j = i;j > 99;j--){
      if(palindrome(i*j)){
        if(i*j > largepal)
          largepal = i*j ;
      }
    }
  }
  cout << largepal << endl ; 
  return 0 ;
}
