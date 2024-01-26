#include <stdio.h>

struct student {
  char name[20];
  int age;
  char sex;
  float gpa;
};
struct student upgrade(struct student child);
int main() {
  struct student Ab;
  printf("sex   gpa\n", Ab.gpa);
  Ab.sex = 'M';
  Ab.gpa = 3.00;
  Ab = upgrade(Ab);
  printf(" M : ", Ab.gpa);
  printf("%.2f\n");
  Ab.sex = 'F';
  Ab.gpa = 3.00;
  Ab = upgrade(Ab);
  printf(" F : ", Ab.gpa);
  printf("%.2f\n");
  return 0;
}

struct student upgrade(struct student child) {
  if (child.sex == 'M') {
    child.gpa *= 1.10;
  } else if (child.sex == 'F') {
    child.gpa *= 1.20;
  }
  return child;
}
