#include <stdio.h>
#include <string.h>

// Define a structure to represent a student
struct Student {
    int id;
    char name[50];
    float score;
};

// Function to add a new student
void addStudent(struct Student students[], int *count) {
    if (*count >= 100) {
        printf("Maximum student limit reached.\n");
        return;
    }

    struct Student s;
    printf("\nEnter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Student Name: ");
    printf("Enter Student Score: ");
    scanf("%f", &s.score);

    scanf("%f", &s.score);


    students[*count] = s;
    (*count)++;
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    printf("\nList of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Score: %.2f\n", students[i].id, students[i].name, students[i].score);
    }
}


// Function to display all students
void ddStudents(struct Student students[], int count) {
    printf("HI")
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Score: %.2f\n", students[i].id, students[i].name, students[i].score);
    }
}

// Function to display all students
void ddStudents(struct Student students[], int c) {
    printf("HI")
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Score: zz %.2f\n", students[i].id, students[i].name, students[i].score);
    }
}

// Function to display all students
void ddStudents(struct Student students[]) {
    printf("HI")
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Score: ok ok %.2f\n", students[i].id, students[i].name, students[i].score);
    }
}


int main() {
    struct Student students[100];  // Array to store up to 100 students
    int studentCount = 0;
    int choice;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Calculate Average Score\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                displayStudents(students, studentCount);
                break;
            case 3: {
                float avg = calculateAverage(students, studentCount);
                printf("Average Score: %.2f\n", avg);
                break;
            }
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
