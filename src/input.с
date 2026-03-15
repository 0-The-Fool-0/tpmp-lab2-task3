#include <stdio.h>
#include <string.h>
#include "input.h"

// Ввод одного студента
void input_one_student(STUDENT *s, int index) {
    printf("\n--- Ввод данных для студента %d ---\n", index + 1);
    
    // Ввод имени
    printf("Введите фамилию и инициалы: ");
    fgets(s->name, MAX_NAME, stdin);
    // Удаляем символ новой строки, если есть
    size_t len = strlen(s->name);
    if (len > 0 && s->name[len - 1] == '\n') {
        s->name[len - 1] = '\0';
    }
    
    // Ввод курса
    printf("Введите курс (1-5): ");
    scanf("%d", &s->kurs);
    while (getchar() != '\n'); // Очистка буфера
    
    // Ввод оценок
    printf("Введите 5 оценок (через пробел): ");
    for (int i = 0; i < SUBJECTS; i++) {
        scanf("%d", &s->ses[i]);
    }
    while (getchar() != '\n'); // Очистка буфера
}

// Ввод всех студентов
void input_students(STUDENT *students, int count) {
    printf("=== Ввод данных о %d студентах ===\n", count);
    for (int i = 0; i < count; i++) {
        input_one_student(&students[i], i);
    }
}
