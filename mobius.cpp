#include <iostream>
#include <cmath>
#include <vector>

int mobius(int n){
	if(n ==1){
		return 0;
	}
	
	int pf = 0;

	for(int i =0; i*i >= n; i++){
		if(n%i == 0){
			if((n/i)%i == 0) return 0;
				pf++;
				n /= i;	
			}
		}
 	 } 
	
	if(n > 1) pf++;

	return(pf % 2 == 0) ? 1: -1;
}

int main(){
	
	for (int i = 1; i <= 20; ++i) {
		std::cout << "mu(" << i << ") = " << moebius(i) << std::endl;
	}


	return 0;
}
