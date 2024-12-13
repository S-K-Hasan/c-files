#include <stdio.h>

int main() {
    float cgpa, amount=878000;
    char gender;

    printf("Enter student's CGPA: ");
    scanf("%f", &cgpa);

    if (cgpa == 4) {
            printf("\n relax no need to pay\n");}
    else if (cgpa>=2.7){

        printf("Enter student's gender (M/F): ");
        scanf(" %c", &gender);

        float scholarship;
        if (gender == 'F' || gender == 'f') {
            scholarship = 0.65;
        } else if (gender == 'M' || gender == 'm') {
            scholarship = 0.50;
        } else {
            printf("Invalid gender input.\n");
            return 1;
        }

        // Display scholarship information
        printf("Congratulations! The student qualifies for a scholarship of %.0f%%.\n Have to pay: %f", scholarship * 100, (scholarship*amount) );
    } else {
        printf("Sorry, the student does not qualify for a scholarship.\n");
    }

}
