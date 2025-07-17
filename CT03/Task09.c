#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

void addRecord() {
    Student s;
    FILE *fp = fopen("students.txt", "a");
    if (!fp) return;

    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
}

void displayRecords() {
    Student s;
    FILE *fp = fopen("students.txt", "r");
    if (!fp) {
        printf("No records found.\n");
        return;
    }

    while (fread(&s, sizeof(Student), 1, fp)) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
}

int main() {
    int choice;
    
    do {
        printf("\n1. Add Record\n2. Display Records\n3. Exit\nChoose: ");
        scanf("%d", &choice);
        if (choice == 1) addRecord();
        else if (choice == 2) displayRecords();
    } while (choice != 3);
    
    return 0;
}