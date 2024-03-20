//(A5.Q1):Write a program to accept marks of five subjects, calculate its total and average.

#include <stdio.h>
void inputMarks(int marks[]);
void calculateTotalAverage(int marks[], int *total, float *average);

int main() 
{
	int marks[5];
	int total;
	float average;
	int choice;

	do 
	{
		// Display menu
		printf("\nMenu:\n");
		printf("1. Input marks\n");
		printf("2. Calculate total and average\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) 
		{
			case 1:
				inputMarks(marks);
				break;
			case 2:
				calculateTotalAverage(marks, &total, &average);
				printf("Total marks: %d\n", total);
				printf("Average marks: %.2f\n", average);
				break;
			case 3:
				printf("Exiting the program.\n");
				break;
			default:
				printf("Invalid choice. Please enter a valid option.\n");
		}
	} while(choice != 3);

	return 0;
}


void inputMarks(int marks[])
{
	printf("Enter marks for five subjects:\n");
	for(int i = 0; i < 5; i++) 
	{
		printf("Subject %d: ", i + 1);
		scanf("%d", &marks[i]);
	}
}


void calculateTotalAverage(int marks[], int *total, float *average) 

{
	*total = 0;
	for(int i = 0; i < 5; i++) 
	{
		*total += marks[i];
	}
	*average = (float)(*total) / 5;
}



