#include <stdio.h>

int main() {

    struct Student {
        char name[20];
        int score;
    };

    struct Student students[5] = {
        {"Alice", 85},
        {"Bob", 90},
        {"Charlie", 78},
        {"David", 88},
        {"Eve", 92}
    };
    int total = 0;
    float average = 0;
    int highest_score = 0;
    int students_count = sizeof(students)/sizeof(struct Student);


    for (int i = 0; i < students_count; i++)
    {
        total += students[i].score;
        if (students[i].score > highest_score) {
            highest_score = students[i].score;
        }
    }

    average = (float)total / students_count; 

    printf("Total Score: %d\n", total);
    printf("Average Score: %.2f\n", average);
    printf("Highest Score: %d\n", highest_score);

    return 0;
}