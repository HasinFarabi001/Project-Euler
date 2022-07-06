//YOU CAN USE AN ARRAY TO STORE THE CHAIN 

#include<bits/stdc++.h>
#include<math.h>
using namespace std ;


int collatz(long long n,int count){

	if(n == 1)return count;
	if(n%2 == 0)count = collatz(n/2,(count+1)) ;
	else count = collatz((3*n+1),(count+1)) ;
	return count; 

}

int main(){
	long long n = 1000000 ; 
	long long highestcount = 0, number = 0 ; 

	for(int i = 1;i < n;i++){

		int count = collatz(i,1); 

		if(highestcount < count){
			highestcount = count ;
			number = i ;
		}
	}
	cout << number << endl ; 
	return 0 ;
}
