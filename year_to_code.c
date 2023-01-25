#include<stdio.h>

int year_to_code(int index) {
	return (index+(index / 4)) % 7;
}



int main(void) {

int digits = 100;
int digits_per_list = (digits / 7) + 30;

int list_of_0[digits_per_list];
int list_of_1[digits_per_list];
int list_of_2[digits_per_list];
int list_of_3[digits_per_list];
int list_of_4[digits_per_list];
int list_of_5[digits_per_list];
int list_of_6[digits_per_list];



int count_0=0;
int count_1=0;
int count_2=0;
int count_3=0;
int count_4=0;
int count_5=0;
int count_6=0;

	for (int i=0;i<digits;++i) {

		int year_code = year_to_code(i);

		switch (year_code)
		{
			case 0:
				list_of_0[count_0] = i;
				++count_0;
				break;
			case 1:
				list_of_1[count_1] = i;
				++count_1;
				break;
			case 2:
				list_of_2[count_2] = i;
				++count_2;
				break;
			case 3:
				list_of_3[count_3] = i;
				++count_3;
				break;
			case 4:
				list_of_4[count_4] = i;
				++count_4;
				break;
			case 5:
				list_of_5[count_5] = i;
				++count_5;
				break;
			case 6:
				list_of_6[count_6] = i;
				++count_6;
				break;

		 	default:
				printf("%d\n",i);
		}

	}



	// for 0 list
	printf("here are the %d values of list_of_0\n",count_0+1);
	for (int i=0;i<count_0;++i) {
		if (i == count_0 - 1) {
			printf(" %d\n\n\n",list_of_0[i]);
		}
		else {
			printf(" %d ",list_of_0[i]);
		}
	}
	// for 1 list
	printf("here are the %d values of list_of_1\n",count_1);
	for (int i=0;i<count_1;++i) {
		if (i == count_1 - 1) {
			printf(" %d\n\n\n",list_of_1[i]);
		}
		else {
			printf(" %d ",list_of_1[i]);
		}
	}
	// for 2 list
	printf("here are the %d values of list_of_2\n",count_2);
	for (int i=0;i<count_2;++i) {
		if (i == count_2 - 1) {
			printf(" %d\n\n\n",list_of_2[i]);
		}
		else {
			printf(" %d ",list_of_2[i]);
		}
	}
	// for 3 list
	printf("here are the %d values of list_of_3\n",count_3);
	for (int i=0;i<count_3;++i) {
		if (i == count_3 - 1) {
			printf(" %d\n\n\n",list_of_3[i]);
		}
		else {
			printf(" %d ",list_of_3[i]);
		}
	}
	// for 4 list
	printf("here are the %d values of list_of_4\n",count_4);
	for (int i=0;i<count_4;++i) {
		if (i == count_4 - 1) {
			printf(" %d\n\n\n",list_of_4[i]);
		}
		else {
			printf(" %d ",list_of_4[i]);
		}
	}
	// for 5 list
	printf("here are the %d values of list_of_5\n",count_5);
	for (int i=0;i<count_5;++i) {
		if (i == count_5 - 1) {
			printf(" %d\n\n\n",list_of_5[i]);
		}
		else {
			printf(" %d ",list_of_5[i]);
		}
	}
	// for 6 list
	printf("here are the %d values of list_of_6\n",count_6);
	for (int i=0;i<count_6;++i) {
		if (i == count_6 - 1) {
			printf(" %d\n\n\n",list_of_6[i]);
		}
		else {
			printf(" %d ",list_of_6[i]);
		}
	}
}

