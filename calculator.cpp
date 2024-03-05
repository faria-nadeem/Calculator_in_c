//this program is  a calculator that performs basic mathematic operations 

#include <stdio.h>

int add(int a  , int b){
	return a + b;
}

int power(int base , int exponent){ 
	int ans = 1;
	for(int i= 1;i<=exponent;i++){
		ans =ans * base;       
	}
	return ans;
}

int mul(int a , int b){
	return a * b;
}

float div(float a , float b){
	float div = a / b;	
	return  div;
}

int  sub(int a , int b){
	return a - b;
}

int factorial(int a){
	int fact = 1;
	
	for(int i=a;i>0;i--){
		fact = fact * i;
	}
		return fact;

}

int remainder(int a , int b){
	return a % b;
}

int main(){
	int num1 = 0;
	int num2 = 0;
	int operation = 1;
	int ans = 0;
	int fact = 0;
	
	
	printf("------------------| Calculator App |------------------------\n");
	printf("1. Please enter 1 to add numnbers; \n");
	printf("2. Please enter 2 to subtract numnbers; \n");
	printf("3. Please enter 3 to multiply numnbers; \n");
	printf("4. Please enter 4 to divide numnbers; \n");
	printf("5. Please enter 5 to power numnbers; \n");
	printf("6. Please enter 6 to factorial numnbers; \n");
	printf("7. please enter 7 to find remainder;\n");
	printf("8. Please enter 0 to end; \n");
	printf("------------------------------------------------------------\n");
	
	while(true){
		
		printf("\nEnter operation: ");
		scanf("%d",&operation);
		
		if(operation == 0){//enter 0 to end the program
			break;
		}
	
		printf("Enter num1 : ");
		scanf("%d",&num1);
	
		printf("Enter num2 : ");
		scanf("%d",&num2);
		
		switch(operation){
			case 1: {
				ans = add(num1 , num2);
				printf("sum is : %d\n",ans);
				break;
			}
			
			case 2: {
				ans = sub(num1 , num2);
				printf("subtarction is : %d\n",ans);
				break;
			}
			
			case 3:{
				ans = mul(num1,num2);
				printf("multiplication is : %d\n",ans);
				break;
			}

			case 4: {
    		if (num2 == 0) {
        		printf("Error: Division by zero is not allowed.\n");
    		} else {        		
        		float result = div((float)num1, (float)num2);
        		printf("division is : %f\n", result);
    			}
    			break;
			}

			case 5:{
				printf("1st number is base and second number is exponent\n"); 			
				ans = power(num1,num2);
				printf("power is : %d\n",ans);	
				break;
			}
			
			case 6:{
				
				fact = factorial(num1);
				printf("factorial of number 1 is : %d\n",fact);
				
				fact = factorial(num2);
				printf("factorial of number 2 is : %d\n",fact);
				
				break;
			}
			case 7:{
				ans = remainder(num1 , num2);
				printf("remainder is : %d\n",ans);
				break;
			}			
		}	
	}
	printf("Thank you for using calculator");		
	return 0;
}	

