/*
1. Student Database (Structs + Arrays + Sorting + String Functions)
Topics practiced: struct, arrays of struct, scanf, strcmp, strcpy, pointers, sorting.
Requirements:
    - Create a struct Student { char name[30]; int age; float gpa; };
    - Let the user enter up to 20 students.
    - Allow:
    - Add new student
    - Print all students
    - Search by name (use strcmp)
    - Sort by name (string compare)
    - Sort by GPA
    - Use functions for each operation.
*/
#include<stdio.h>
#include<string.h>

typedef struct{
    char name[30];
    int age;
    float gpa; 
}Students;

 // FUNCTION PROTOTYPE return_type function_name(type param1, type param2, ...);
void AddStudent(Students list[], int *count){ //pointer to modify value
    if (*count >= 20) {
        printf("Database full!\n");
    return;
    }
    printf("Type Name: ");
    scanf("%29s", list[*count].name); //char array does not need & specifier
    printf("Type Age: ");
    scanf("%d", &list[*count].age);
    printf("Type GPA: ");
    scanf("%f", &list[*count].gpa);
    (*count)++;
}; 

void PrintStudents(Students list[], int count){
    if(count == 0){
        printf("\nNo Students In Database.\n");
        return;
    }
for (int i = 0; i < count; i++) {
        printf("\nName: %s | Age: %d | GPA: %.2f", list[i].name, list[i].age, list[i].gpa);
    }
};

void SearchName(Students list[], int count){
    if (count == 0){
        printf("No Students In Database.\n");
        return;
    }
    char search[30];
    printf("Enter Name: ");
    scanf("%29s", search);
    for(int i = 0; i < count; i++){
        if (strcmp(list[i].name, search) == 0){ //returns 0 if equal
        printf("Found: %s %d %.3f\n", list[i].name, list[i].age, list[i].gpa);
        return;
        }
        }
        printf("Student Was Not Found.\n");

};

void SortName(Students list[], int count){
    if (count <= 1) {
        printf("Not enough students to sort.\n");
        return;
    }
    Students temp;   // temp struct used for swapping
    // Bubble-sort style loop
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            // Compare student names alphabetically
            if (strcmp(list[i].name, list[j].name) > 0) {
                // Swap the whole struct
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("Students sorted by name!\n");
}

void SortGPA(Students list[], int count){
    if (count <= 1) {
        printf("Not enough students to sort.\n");
        return;
    }
    Students temp;
    for(int i=0; i < count -1; i++ ){
        for(int j = i +1; j<count; j++){
            if(list[i].gpa < list[j].gpa){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    } 
    printf("Students sorted by GPA (highest to lowest).\n");
};
    int main(){
     
    Students StudentList[20] = {0}; //1D array of structs
    int StudentCount = 0;
    int option;
//Menu
do{
        printf("\n**************************Student Database**************************");
        printf("\n\n(1)Add New Student\n(2)Print All Students\n(3)Search By Name\n(4)Sort By Name\n(5)Sort By GPA\n(6)Exit\nSelect Option:");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            AddStudent(StudentList, &StudentCount); //adress because function needs to modify
            break;
        case 2:
            PrintStudents(StudentList, StudentCount);
            break;
        case 3:
            SearchName(StudentList, StudentCount);
            break;
        case 4:
            SortName(StudentList, StudentCount);
            break;
        case 5:
            SortGPA(StudentList, StudentCount);
            break;
        default:
        printf("\nInvalid Expression");
            break;
        } 
    }while (option != 6);

    return 0;
    } 