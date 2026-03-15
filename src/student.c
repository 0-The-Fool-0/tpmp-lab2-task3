#include <stdio.h>
#include <string.h>
#include "student.h"

// Вычисление среднего балла студента
float calculate_average(const STUDENT *s) {
    float sum = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        sum += s->ses[i];
    }
    return sum / SUBJECTS;
}

// Вычисление общего среднего балла всех студентов
float calculate_total_average(const STUDENT *students, int count) {
    float total_sum = 0;
    for (int i = 0; i < count; i++) {
        total_sum += calculate_average(&students[i]);
    }
    return total_sum / count;
}

// Сортировка студентов по алфавиту (пузырьковая сортировка)
void sort_students_by_name(STUDENT *students, int count) {
    STUDENT temp;
    
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Меняем местами
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Вывод студентов, чей средний балл выше общего среднего
void print_students_above_average(const STUDENT *students, int count, float total_avg) {
    printf("\n--- Студенты со средним баллом выше %.2f ---\n", total_avg);
    
    int found = 0;
    for (int i = 0; i < count; i++) {
        float avg = calculate_average(&students[i]);
        if (avg > total_avg) {
            printf("%-30s | Курс: %d | Средний балл: %.2f | Оценки: ", 
                   students[i].name, students[i].kurs, avg);
            for (int j = 0; j < SUBJECTS; j++) {
                printf("%d ", students[i].ses[j]);
            }
            printf("\n");
            found = 1;
        }
    }
    
    if (!found) {
        printf("Нет студентов со средним баллом выше общего среднего.\n");
    }
}

