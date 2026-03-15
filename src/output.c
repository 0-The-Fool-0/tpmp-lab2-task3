#include <stdio.h>
#include "output.h"

// Вывод одного студента
void print_student(const STUDENT *s, int index) {
    float avg = calculate_average(s);
    
    printf("%-3d | %-30s | Курс: %d | Средний балл: %.2f | Оценки: ", 
           index + 1, s->name, s->kurs, avg);
    for (int i = 0; i < SUBJECTS; i++) {
        printf("%d ", s->ses[i]);
    }
    printf("\n");
}

// Вывод всех студентов
void print_all_students(const STUDENT *students, int count) {
    printf("\n=== Список всех студентов (отсортирован по алфавиту) ===\n");
    printf(" №  | Имя                           | Курс | Средний балл | Оценки\n");
    printf("----+-------------------------------+------+--------------+-----------------\n");
    
    for (int i = 0; i < count; i++) {
        print_student(&students[i], i);
    }
}
