#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "input.h"
#include "output.h"

#define STUDENT_COUNT 10

int main() {
    STUDENT students[STUDENT_COUNT];
    
    printf("========================================\n");
    printf("   ПРОГРАММА УЧЕТА УСПЕВАЕМОСТИ\n");
    printf("========================================\n");
    
    // 1. Ввод данных
    input_students(students, STUDENT_COUNT);
    
    // 2. Сортировка по алфавиту
    sort_students_by_name(students, STUDENT_COUNT);
    
    // 3. Вывод отсортированного списка
    print_all_students(students, STUDENT_COUNT);
    
    // 4. Вычисление общего среднего балла
    float total_avg = calculate_total_average(students, STUDENT_COUNT);
    printf("\nОбщий средний балл всех студентов: %.2f\n", total_avg);
    
    // 5. Вывод студентов с баллом выше среднего
    print_students_above_average(students, STUDENT_COUNT, total_avg);
    
    return 0;
}

