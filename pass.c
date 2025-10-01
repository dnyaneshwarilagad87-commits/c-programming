#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
void display(struct Student s) {
    printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
}
int main() {
    struct Student s = {1, "Amit", 89.5};
    display(s);
    return 0;
}
