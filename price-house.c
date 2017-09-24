/* Price House */
/* Intro com  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define price_H_O 3000
#define price_H_I 2400
#define price_D_O 1500
#define price_D_I 3000
#define price_T_O 1000
#define price_T_I  1500
#define sale_5_million 5000000
#define sale_1_million 1000000

int main(int argc, char const *argv[]){
	char type_house, pos_house,  pos_house_input[2];
	int area_house, price_house;
	int i;
	float price_house_sale, sale_price;

	printf("Enter type of House : ");
	scanf("%c",&type_house);

	/* lower case to upper case */
	if(type_house >= 'a' && type_house <= 'z')
		type_house  =  type_house - ('a' -'A');
	
	switch (type_house){
		/* case H */
		case 'H' :
			printf("Enter position of house : ");
			scanf(" %s",pos_house_input);
			/* lower case to upper case */
			for(i = 0; pos_house_input[i] != '\0';  i++){
				if(pos_house_input[i] >= 'a' && pos_house_input[i] <= 'z')
					pos_house_input[i] = (pos_house_input[i] - 'a') + 'A';
			}
			//printf("\n%s\n",pos_house_input);
			if(strcmp(pos_house_input,"O") == 0 ){
				printf("Enter area of house : ");
				scanf("%d", &area_house);
				price_house = price_H_O * area_house;
				if(price_house > sale_5_million){
					sale_price = price_house * 0.1;
				}
				else if(price_house < sale_1_million){
					sale_price = price_house * 0.15;
				}
				else{
					sale_price = price_house * 0.125;
				}
				price_house_sale = price_house - sale_price;
			}
			else if(strcmp(pos_house_input,"I") == 0 ){
				printf("Enter area of house : ");
				scanf("%d", &area_house);
				price_house = price_H_I * area_house;
				if(price_house > sale_5_million){
					sale_price = price_house * 0.1;
				}
				else if(price_house < sale_1_million){
					sale_price = price_house * 0.15;
				}
				else{
					sale_price = price_house * 0.125;
				}
				price_house_sale = price_house - sale_price;
			}
			else {
				printf("** not available **\n");
				exit(1);
			}

			break;
		/* case D */
		case 'D':
			printf("Enter position of house : ");
			scanf(" %s",pos_house_input);
			/* lower case to upper case */
			for(i = 0; pos_house_input[i] != '\0';  i++){
				if(pos_house_input[i] >= 'a' && pos_house_input[i] <= 'z')
					pos_house_input[i] = (pos_house_input[i] - 'a') + 'A';
			}
			if(strcmp(pos_house_input,"O") == 0 ){
				printf("Enter area of house : ");
				scanf("%d", &area_house);
				price_house = price_D_O * area_house;
				if(price_house > sale_5_million){
					sale_price = price_house * 0.1;
				}
				else if(price_house < sale_1_million){
					sale_price = price_house * 0.15;
				}
				else{
					sale_price = price_house * 0.125;
				}
				price_house_sale = price_house - sale_price;
			}
			else if(strcmp(pos_house_input,"I") == 0 ){
				printf("Enter area of house : ");
				scanf("%d", &area_house);
				price_house = price_D_I * area_house;
				if(price_house > sale_5_million){
					sale_price = price_house * 0.1;
				}
				else if(price_house < sale_1_million){
					sale_price = price_house * 0.15;
				}
				else{
					sale_price = price_house * 0.125;
				}
				price_house_sale = price_house - sale_price;
			}
			else {
				printf("** not available **\n");
				exit(1);
			}
			break;
		/* case T */
		case 'T':
			printf("Enter position of house : ");
			scanf(" %s",pos_house_input);
			/* lower case to upper case */
			for(i = 0; pos_house_input[i] != '\0';  i++){
				if(pos_house_input[i] >= 'a' && pos_house_input[i] <= 'z')
					pos_house_input[i] = (pos_house_input[i] - 'a') + 'A';
			}
			if(strcmp(pos_house_input,"O") ==0 ){
				printf("Enter area of house : ");
				scanf("%d", &area_house);
				price_house = price_T_O * area_house;
				if(price_house > sale_5_million){
					sale_price = price_house * 0.1;
				}
				else if(price_house < sale_1_million){
					sale_price = price_house * 0.15;
				}
				else{
					sale_price = price_house * 0.125;
				}
				price_house_sale = price_house - sale_price;
			}
			else if(strcmp(pos_house_input,"I") == 0 ){
				printf("Enter area of house : ");
				scanf("%d", &area_house);
				price_house = price_T_I * area_house;
				if(price_house > sale_5_million){
					sale_price = price_house * 0.1;
				}
				else if(price_house < sale_1_million){
					sale_price = price_house * 0.15;
				}
				else{
					sale_price = price_house * 0.125;
				}
				price_house_sale = price_house - sale_price;
			}
			else {
				printf("** not available **\n");
				exit(1);
			}
			break;
		default :
			printf("** not available **\n");
			exit(1);
	}
	printf("Price of house : %d\n",price_house);
	printf("Price of house [sale] : %.2f\n",price_house_sale);
	printf("Sale price : %.2f\n",sale_price);
	return 0;
}