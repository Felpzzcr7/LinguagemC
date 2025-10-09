#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
int TOF(int cont1, int cont2,int x);
int main (){
	int cont1; 
	int cont2;
	
	int tof = TOF(x);
	
	if(tof == 1)
		printf("eh verdade");
	else
		printf("eh mentira")

	return 0;
}

int TOF(int cont1, int cont2,int x){
	if(cont1==cont2)
		x= 1;
	else 
		x= 0;
		
	return x;
	
}
