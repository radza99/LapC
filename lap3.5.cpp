#include <stdio.h>

struct student {
  char name[20];
};
void GetStudent(struct student (*children)[10], int *room);
int main() {
  struct student children[10][10];
  int group;
  GetStudent(children, &group);
  // แสดงข้อมูลของนักเรียน
 for (int i = 0; i < group; i++) {
 for (int j = 0; j < 10; j++) {
printf("student %d is classroom %d   %s\n", j + 1,  i + 1, children[i][j].name);
    }
  }
  return 0;
}
void GetStudent(struct student (*children)[10], int *room) {
 printf("Enter classrooms : ");
  scanf("%d", room);
  

  for (int i = 0; i < *room; i++) {
    for (int j = 0; j < 10; j++) {
      printf("studentroom %d: ", i + 1, j + 1);
      scanf("%s", children[i][j].name);
    }
  }
}
