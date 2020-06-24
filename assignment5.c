#include<stdio.h>
# define FIXED_COST 500

int income, cost, ticketPrice, attendees;

int Profit(){
	int profit=Income()-Cost();
	return profit;
}

int Income(){
	int income= attendees*ticketPrice;
	return income;	
}

int Cost(){
	int cost=FIXED_COST+(attendees*3);
	return cost;
}


int main(){
	
	printf("Relationship between profit and ticket price\n");
	printf("---------------------------------------------\n");
	
	printf("Please enter the number of attendees :");
	scanf("%d",&attendees);
	
	printf("\nPlease enter the price of the ticket :\n");
	scanf("%d",&ticketPrice);

	int profit=Profit();
	printf("Profit %d",profit);
	
	return 0;
	
}
