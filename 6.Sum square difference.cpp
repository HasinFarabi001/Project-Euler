#include <bits/stdc++.h>>
using namespace std ;
int main() {
  long long sum1 = pow(101*50,2) ,sum2 = 0 ;
  for(int i = 1 ;i <= 100;i++){
    sum2+=i*i ; 
  }
  cout << sum1 - sum2 << endl ; 
}
