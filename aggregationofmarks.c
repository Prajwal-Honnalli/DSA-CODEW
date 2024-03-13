//to compute aggregate marks and percentage

#include<stdio.h>

int main() {
   // int marks1, marks2, marks3, marks4, marks5;  // Marks in five subjects
    int totalmarks=0;  // Variable to store the total marks
    float percentage;  // Variable to store the percentage

    // Input marks for each subject
   /* printf("Enter marks for subject 1 (out of 100): ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2 (out of 100): ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3 (out of 100): ");
    scanf("%d", &marks3);
    printf("Enter marks for subject 4 (out of 100): ");
    scanf("%d", &marks4);
    printf("Enter marks for subject 5 (out of 100): ");
    scanf("%d", &marks5);*/
    int i,marks;
    printf("Random Numbers Are:\n");
    marks=rand()%100+20;
    for(i=0;i<5;i++)
    {
    printf("%d\n",marks);
    totalmarks=totalmarks+marks;
    }



    // Calculate the total marks
  //  totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    // Calculate the percentage
    percentage =((totalmarks*100)/500);

    // Display the total marks and percentage
    printf("Total Marks: %d\n", totalmarks);
    printf("Percentage Marks: %f\n", percentage);






}

