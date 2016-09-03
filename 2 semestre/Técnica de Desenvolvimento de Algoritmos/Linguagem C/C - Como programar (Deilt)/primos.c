#include <stdio.h>


int primo(unsigned long int n){
	int i, cont =0;

	for(i=1;i<=n;i++){
		if(n%i==0)
			cont++;
	}

	if (cont==2)
		return 1;
	else
		return 0;

}

void um (){
	unsigned long int t[700001],i,sum=0;

	for(i=600000;i<=700000;i++){
		t[i] = primo(i+1000000);
	}

	for(i=600000;i<=700000;i++){
		if(t[i]==1){
			sum +=i;
		}
	}

	printf("\nSOMA: %li\n",sum);
}

void dois (){
	unsigned long int t[800001],i,sum=0;

	for(i=700000;i<=800000;i++){
		t[i] = primo(i+1000000);
	}

	for(i=700000;i<=800000;i++){
		if(t[i]==1){
			sum +=i;
		}
	}

	printf("\nSOMA: %li\n",sum);
}


void tres (){
	unsigned long int t[900001],i,sum=0;

	for(i=800000;i<=900000;i++){
		t[i] = primo(i+1000000);
	}

	for(i=800000;i<=900000;i++){
		if(t[i]==1){
			sum +=i;
		}
	}

	printf("\nSOMA: %li\n",sum);
}

void quatro (){
	unsigned long int t[1000001],i,sum=0;

	for(i=900000;i<=1000000;i++){
		t[i] = primo(i+1000000);
	}

	for(i=900000;i<=1000000;i++){
		if(t[i]==1){
			sum +=i;
		}
	}

	printf("\nSOMA: %li\n",sum);
}

int main(){
	um();
	dois();
	tres();
	quatro();
}

/*SOMA TOTAL (até 1.600.000)

	50249592188

*/
