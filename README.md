# Практическая работа №4 ***"Бинарное дерево поиска"***

## Задание

Используя функции, реализовать программу, которая:
1. создать пустое дерево, считать 4 элементов a, |a| ≤2147483647 и занести их в дерево;
2. вывести дерево, используя функцию printTree;
3. считать 3 элементов a, |a| ≤ 2147483647 и занести их в дерево;
4. вывести дерево, используя функцию printTree;
5. считать m1, |m1| ≤ 2147483647 и найти элемент с заданным значением в дереве. Вывести через пробел значение предка и потомков найденного элемента. Если элемент не найден, вывести "_", если нет значений предка или потомков, вывести’’ вместо таких значений;
6. считать m2, |m2| ≤ 2147483647 и найти элемент с заданным значением в дереве. Вывести через пробел значение предка и потомков найденного элемента. Если элемент не найден, вывести ‘-’, если нет значений предка или потомков, вывести‘_’ вместо таких значений;
7. считать m3, |m3| ≤ 2147483647 и удалить из дерева элемент с заданным значением;
8. вывести дерево, используя printTree;
9. выполнять левый поворот дерева относительно корня, пока это возможно;
10. вывести дерево, используя команду printTree;
11. выполнять правый поворот дерева относительно корня, пока это возможно;
12. вывести дерево, используя команду printTree;
13. вывести на экран количество элементов в дереве;
14. очистить дерево;
15. вывести дерево на экран, используя printTree.

## Ход работы

С помощью текстового блокнота **nano** были созданы исходный код программы. Код был скомпилирован и проверен на заданных примерах.


|  На вход   | На выход                       |
|:----------:|:-------------------------------|
| 4 7 3 2    |4                               |
|            |3 7                             |
|            |2 _ _ _                         |
| 5 9 1      |4                               |
|            |3 7                             |
|            |2 _ 5 9                         |
|            |1 _ _ _ _ _ _ _                 |
| 6          |_ _ _                           |
| 7          |4 5 9                           |
| 2          |4                               |
|            |3 7                             |
|            |1 _ 5 9                         |
|            |9                               |
|            |7 _                             |
|            |4 _ _ _                         |
|            |3 5 _ _ _ _ _ _                 |
|            |1 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |
|            |1                               |
|            |_ 3                             |
|            |_ _ _  4                        |
|            |_ _ _ _ _ _ _ 7                 |
|            |_ _ _ _ _ _ _ _ _ _ _ _ _ _ 5 9 |
|            |6                               |
|            |_                               | 

В ходе работы были использованы следующие функции:


![enter image description here](https://lh3.googleusercontent.com/3iNccdUfom4uucB5vjVzfFJnhOPs5c-Sz1bE-MoFhqCHulI4daoT-XYilcNzALqLBxxjX7UwiM36)

![enter image description here](https://lh3.googleusercontent.com/oXYssMbdxnDYJGVw0c8-lyKR1eGbIcAXqMK4T1i_1n2abJ8_WN-LXeEXGYc2Ix1vfer84II7FWFI)

![enter image description here](https://lh3.googleusercontent.com/HWeZ_e5hepQSYswcQwP4pfOXlx2wSipP_nSYPW1KsHwOlBqb2bJRsy_jfJRW6BftWA0dv4V4eLoP)









Результат выполнения программы:

![enter image description here](https://i.ibb.co/BwQ8fST/4.png)


## Список используемых источников
 - [ Бинарное дерево](http://www.cyberforum.ru/c-beginners/thread859845.html)
 - [Ссылка на пример оформления данного текстового документа](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
