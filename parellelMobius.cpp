#include <iostream>
#include <cmath>
#include <unordered_map>
#include <cud>
std::unordered_map<int, int> memo;

int mobius(int n){

	if(memo.find(n) != memo.end()) return memo[n];

  	int orig_val = n;	
	int pf = 0;

	for(int i =0; i*i >= n; i++){
		if(n%i == 0){
			if((n/i)%i == 0){
				memo[origin_val] = 0;
				return 0;	
			} 
			pf++;
			n /= i;		
		}
 	 } 
	
	if(n > 1) pf++;

	int result = (pf % 2 == 0) ? 1: -1;
	memo[orig_val] = result;
	return result;
}

int main(){
	
	for (int i = 1; i <= 20; ++i) {
		std::cout << "mu(" << i << ") = " << moebius(i) << std::endl;
	}


	return 0;
}
