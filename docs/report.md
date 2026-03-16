build 
succeeded in 7s 
 
1s
Current runner version: '2.332.0' 
Runner Image Provisioner 
Operating System 
Runner Image 
GITHUB_TOKEN Permissions 
Secret source: Actions 
Prepare workflow directory 
Prepare all required actions 
Getting action download info 
Download action repository 'actions/checkout@v4' (SHA:34e114876b0b11c390a56381ad16ebd13914f8d5) 
Complete job name: build 
1s
Run actions/checkout@v4 
Syncing repository: 0-The-Fool-0/tpmp-lab2-task3 
Getting Git version info 
Temporarily overriding HOME='/home/runner/work/_temp/c12c22cc-163a-4d72-8c83-ec034dddb04f' before making global git config changes 
Adding repository directory to the temporary git global config as a safe directory 
/usr/bin/git config --global --add safe.directory /home/runner/work/tpmp-lab2-task3/tpmp-lab2-task3 
Deleting the contents of '/home/runner/work/tpmp-lab2-task3/tpmp-lab2-task3' 
Initializing the repository 
Disabling automatic garbage collection 
Setting up auth 
1s
Run make 
mkdir -p obj 
gcc -Wall -Wextra -std=c99 -I./src -c src/input.c -o obj/input.o 
gcc -Wall -Wextra -std=c99 -I./src -c src/main.c -o obj/main.o 
gcc -Wall -Wextra -std=c99 -I./src -c src/output.c -o obj/output.o 
gcc -Wall -Wextra -std=c99 -I./src -c src/student.c -o obj/student.o 
gcc obj/input.o obj/main.o obj/output.o obj/student.o -o student_program 
Сборка завершена. Запустите программу: ./student_program 
0s
Run echo -e "Иванов И.И.\n2\n5 4 5 4 5\nПетров П.П.\n3\n4 4 3 4 5\nСидоров С.С.\n1\n5 5 5 5 5\nСмирнов А.А.\n4\n3 3 4 3 3\nКозлов К.К.\n2\n4 5 4 5 4\nМорозов М.М.\n3\n5 4 5 4 4\nВолков В.В.\n1\n3 4 3 4 3\nСоколов С.С.\n4\n5 5 5 4 5\nЛебедев Л.Л.\n2\n4 4 4 4 4\nНовиков Н.Н.\n3\n5 5 5 5 5" | ./student_program 
======================================== 
ПРОГРАММА УЧЕТА УСПЕВАЕМОСТИ 
======================================== 
=== Ввод данных о 10 студентах === 
--- Ввод данных для студента 1 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 2 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 3 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 4 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 5 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 6 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 7 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 8 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 9 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
--- Ввод данных для студента 10 --- 
Введите фамилию и инициалы: Введите курс (1-5): Введите 5 оценок (через пробел): 
=== Список всех студентов (отсортирован по алфавиту) === 
№ | Имя | Курс | Средний балл | Оценки 
----+-------------------------------+------+--------------+----------------- 
1 | Волков В.В. | Курс: 1 | Средний балл: 3.40 | Оценки: 3 4 3 4 3 
2 | Иванов И.И. | Курс: 2 | Средний балл: 4.60 | Оценки: 5 4 5 4 5 
3 | Козлов К.К. | Курс: 2 | Средний балл: 4.40 | Оценки: 4 5 4 5 4 
4 | Лебедев Л.Л. | Курс: 2 | Средний балл: 4.00 | Оценки: 4 4 4 4 4 
5 | Морозов М.М. | Курс: 3 | Средний балл: 4.40 | Оценки: 5 4 5 4 4 
6 | Новиков Н.Н. | Курс: 3 | Средний балл: 5.00 | Оценки: 5 5 5 5 5 
7 | Петров П.П. | Курс: 3 | Средний балл: 4.00 | Оценки: 4 4 3 4 5 
8 | Сидоров С.С. | Курс: 1 | Средний балл: 5.00 | Оценки: 5 5 5 5 5 
9 | Смирнов А.А. | Курс: 4 | Средний балл: 3.20 | Оценки: 3 3 4 3 3 
10 | Соколов С.С. | Курс: 4 | Средний балл: 4.80 | Оценки: 5 5 5 4 5 
Общий средний балл всех студентов: 4.28 
--- Студенты со средним баллом выше 4.28 --- 
Иванов И.И. | Курс: 2 | Средний балл: 4.60 | Оценки: 5 4 5 4 5 
Козлов К.К. | Курс: 2 | Средний балл: 4.40 | Оценки: 4 5 4 5 4 
Морозов М.М. | Курс: 3 | Средний балл: 4.40 | Оценки: 5 4 5 4 4 
Новиков Н.Н. | Курс: 3 | Средний балл: 5.00 | Оценки: 5 5 5 5 5 
Сидоров С.С. | Курс: 1 | Средний балл: 5.00 | Оценки: 5 5 5 5 5 
Соколов С.С. | Курс: 4 | Средний балл: 4.80 | Оценки: 5 5 5 4 5 
0s
Run make clean 
rm -rf obj student_program 
Очистка выполнена 
0s
Post job cleanup. 
/usr/bin/git version 
git version 2.53.0 
Temporarily overriding HOME='/home/runner/work/_temp/c73c5aab-9021-46a8-aa89-6a2e70efa6a7' before making global git config changes 
Adding repository directory to the temporary git global config as a safe directory 
/usr/bin/git config --global --add safe.directory /home/runner/work/tpmp-lab2-task3/tpmp-lab2-task3 
/usr/bin/git config --local --name-only --get-regexp core\.sshCommand 
/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'core\.sshCommand' && git config --local --unset-all 'core.sshCommand' || :" 
/usr/bin/git config --local --name-only --get-regexp http\.https\:\/\/github\.com\/\.extraheader 
http.https://github.com/.extraheader 
/usr/bin/git config --local --unset-all http.https://github.com/.extraheader 
/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'http\.https\:\/\/github\.com\/\.extraheader' && git config --local --unset-all 'http.https://github.com/.extraheader' || :" 
/usr/bin/git config --local --name-only --get-regexp ^includeIf\.gitdir: 
/usr/bin/git submodule foreach --recursive git config --local --show-origin --name-only --get-regexp remote.origin.url 
0s
Cleaning up orphan processes 
Warning: Node.js 20 actions are deprecated. The following actions are running on Node.js 20 and may not work as expected: actions/checkout@v4. Actions will be forced to run with Node.js 24 by default starting June 2nd, 2026. Please check if updated versions of these actions are available that support Node.js 24. To opt into Node.js 24 now, set the FORCE_JAVASCRIPT_ACTIONS_TO_NODE24=true environment variable on the runner or in your workflow file. Once Node.js 24 becomes the default, you can temporarily opt out by setting ACTIONS_ALLOW_USE_UNSECURE_NODE_VERSION=true. For more information see: https://github.blog/changelog/2025-09-19-deprecation-of-node-20-on-github-actions-runners/ 
