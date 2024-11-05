#include <stdio.h>
#include <string.h>

// Định nghĩa cấu trúc bản ghi cho thông tin của mỗi học sinh
struct Student {
    char name[21]; // Tên học sinh không vượt quá 20 kí tự
    int id;        // Mã học sinh
    float score;   // Điểm tổng kết
};

// Hàm nhập thông tin của một học sinh
void inputStudent(struct Student *student) {
    printf("Nhập tên học sinh: ");
    scanf("%s", student->name);
    printf("Nhập mã học sinh: ");
    scanf("%d", &student->id);
    printf("Nhập điểm tổng kết: ");
    scanf("%f", &student->score);
}

// Hàm sắp xếp danh sách học sinh theo thứ tự điểm giảm dần
void sortByScore(struct Student arr[], int n) {
    int i, j;
    struct Student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].score < arr[j + 1].score) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hàm sắp xếp danh sách học sinh theo thứ tự tên theo ABC
void sortByName(struct Student arr[], int n) {
    int i, j;
    struct Student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hàm hiển thị danh sách học sinh
void displayStudents(struct Student arr[], int n) {
    printf("Danh sách học sinh:\n");
    printf("Tên\t\tMã\t\tĐiểm\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %.2f\n", arr[i].name, arr[i].id, arr[i].score);
    }
}

int main() {
    int n;
    printf("Nhập số lượng học sinh (n <= 10): ");
    scanf("%d", &n);

    // Kiểm tra n có nằm trong khoảng hợp lệ không
    if (n < 1 || n > 10) {
        printf("Số lượng học sinh không hợp lệ.\n");
        return 1;
    }

    struct Student students[n];

    // Nhập thông tin cho từng học sinh
    for (int i = 0; i < n; i++) {
        printf("Nhập thông tin cho học sinh thứ %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    // Sắp xếp danh sách học sinh theo thứ tự điểm giảm dần
    sortByScore(students, n);
    printf("\nDanh sách học sinh sau khi sắp xếp theo điểm giảm dần:\n");
    displayStudents(students, n);

    // Sắp xếp danh sách học sinh theo thứ tự tên theo ABC
    sortByName(students, n);
    printf("\nDanh sách học sinh sau khi sắp xếp theo tên theo ABC:\n");
    displayStudents(students, n);

    return 0;
}
