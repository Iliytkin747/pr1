# Практическая работа №2
## Варианты и задания
### Вариант 7. Количество отрицательных чисел. 
На вход подаётся
число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖
| ≤ 2147483647
для любого целого 𝑖 от 1 до 𝑛. Вывести количество чисел 𝑥𝑖
: 𝑥𝑖 < 0.
### Вариант 17. Разность сумм чётных и нечётных квадратов. На
вход подаётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈
Z : |𝑥𝑖
| ≤ 2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести значение
∑︁𝑛
𝑖=1
(−1)𝑖
· 𝑥
2

## Ход работы
1. Был написан код для каждого из задания.
2. Каждый файл с кодом был скомпилирован и запущен для проверки:

```
$ gcc 07_proga1.c -o 07_proga1
$ ./07_proga1
$ gcc 17_proga2.c -o 17_proga2 -lm
$ ./17_proga2
```
3. Файлы были загружены на удалённый репозиторий pr2
```
$ git add .
$ git commit
$ git push -u origin pr2
```
## Результаты работы
Скриншоты работы программ представленны ниже.

***Количество отрицательных чисел.***
На вход были введены 5 чисел (2 из нах отрецательные). В результате программа выдала число 2.

***Разность сумм чётных и нечётных квадратов.***
Были введены 4 числа.

## Таблица

| Ресурс          | Ссылка                                                           |
| ------------    | -----------------------------------------------------------------|
| Статья markdown | https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet |
