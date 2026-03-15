#ifndef STUDENT_H
#define STUDENT_H

#define SUBJECTS 5
#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];        // Фамилия и инициалы
    int kurs;                    // Курс
    int ses[SUBJECTS];           // Успеваемость (оценки по 5 предметам)
} STUDENT;

// Функции для работы со студентами
float calculate_average(const STUDENT *s);
float calculate_total_average(const STUDENT *students, int count);
void sort_students_by_name(STUDENT *students, int count);
void print_students_above_average(const STUDENT *students, int count, float total_avg);

#endif
