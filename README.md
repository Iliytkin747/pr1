# # Илюткин 747
# Практическая работа №3

## Односвязные списки
Необходимо используя  функции реализовать программу которая:
1. считать количество элементов ∈ N≤ 2147483647;
2.  создать пустой список, считать n элементов a, |a| ≤2147483647 и занести их в список;
3.  вывести содержимое списка используя функцию print;
4.  считать k1, k2, k3 |k| ≤ 2147483647 и вывести ‘1’ если в списке существует элемент с таким значением. ‘0’ если нет, перейти на новую строку.
5.  считать m, |m| ≤ 2147483647 и вставить его в конец списка;
6.  вывести содержимое списка используя функцию print;
7.  считать t, |t| ≤ 2147483647 и вставить его в начало списка;
8.  вывести содержимое списка используя функцию print;
9.  считать j, 0 < j ≤ 2147483647 и x, |x| ≤ 2147483647 и вставить значение x после j-ого элемента списка;
10. вывести содержимое списка используя функцию print;
11.  считать z, |z| ≤ 2147483647 и удалить первый элемент хранящий значение z из списка;
12. вывести содержимое списка используя функцию print;
13.  очистить список.


## Ход работы
С помощью текстового блокнота **nano** были созданы исходный код программы. Код был скомпилирован и проверен на заданных примерах.


|  input     | output           |
|:----------:|:----------------:|
|3           |                  |
|1 2 3       | 1 2 3            |
|4 2 3       | 0 1 1            |
|5           | 1 2 3 5          |
|6           | 6 1 2 3 5        |
|4 8         | 6 1 2 3 8 5      |
|6           | 1 2 4 8 5        |

В ходе работы были использованы следующие функции:


<a href="https://imgbb.com/"><img src="https://i.ibb.co/VSPTtCw/1.png" alt="1" border="0"></a>



<a href="https://imgbb.com/"><img src="https://i.ibb.co/7z94tvV/2.png" alt="2" border="0"></a>



Результат выполнения программы:


<a href="https://imgbb.com/"><img src="https://i.ibb.co/RSng0hz/1.png" alt="1" border="0"></a>

## Двусвязные списки
Необходимо используя  функции реализовать программу которая:
1. считать количество элементов  ∈ N, 0 < ≤ 2147483647;
2. создать пустой список, считать n элементов a , |a | ≤
2147483647 и занести их в список;
3. вывести содержимое списка используя функцию print;
4. считать k , k , k |k | ≤ 2147483647 и вывести ‘1’ если в
списке существует элемент с таким значением. ‘0’ если нет.
перейти на новую строку.
5. считать m, |m| ≤ 2147483647 и вставить его в конец списка;
6. вывести содержимое списка используя функцию print_invers;
7. считать t, |t| ≤ 2147483647 и вставить его в начало списка;
8. вывести содержимое списка используя функцию print;
9. считать j, 0 < j ≤ 2147483647 и x, |x| ≤ 2147483647 и вставить
значение x после j-ого элемента списка;
10. вывести содержимое списка используя функцию print_invers;
11. считать u, 0 < u ≤ 2147483647 и y, |y| ≤ 2147483647 и
вставить значение y перед u-ым элементом списка;
12. вывести содержимое списка используя функцию print;
13. считать z, |z| ≤ 2147483647 и удалить первый элемент
хранящий значение z из списка;
14. вывести содержимое списка используя функцию print_invers;
15. считать r, |r| ≤ 2147483647 и удалить последний элемент
хранящий значение r из списка;
16. вывести содержимое списка используя функцию print;
17. очистить список.


## Ход работы
С помощью текстового блокнота **nano** были созданы исходный код программы. Код был скомпилирован и проверен на заданных примерах.


|  input     | output           |
|:----------:|:----------------:|
|3           |                  |
|1 2 3       | 1 2 3            |
|1 6 4       | 1 0 0            |
|7           | 7 3 2 1          |
|8           | 8 1 2 3 7        |
|3 9         | 7 3 9 2 1 8      |
|2 6         | 8 6 1 2 9 3 7    |
|9           | 7 3 2 1 6 8      |
|2           | 8 6 1 3 7        |

В ходе работы были использованы следующие функции:


<a href="https://imgbb.com/"><img src="https://i.ibb.co/VSPTtCw/1.png" alt="1" border="0"></a><br />

<a href="https://imgbb.com/"><img src="https://i.ibb.co/7z94tvV/2.png" alt="2" border="0"></a><br />

<a href="https://imgbb.com/"><img src="https://i.ibb.co/8rhHn7Y/3.png" alt="3" border="0"></a><br />



Результат выполнения программы:


<a href="https://imgbb.com/"><img src="https://i.ibb.co/WsL2kQn/2.png" alt="2" border="0"></a><br />


## Список используемых источников

 - [ Структурный тип данных](https://younglinux.info/c/structure)
 - [ Односвязный список на Си](https://codedream.me/2016/10/12/%D0%BE%D0%B4%D0%BD%D0%BE%D1%81%D0%B2%D1%8F%D0%B7%D0%BD%D1%8B%D0%B9-%D1%81%D0%BF%D0%B8%D1%81%D0%BE%D0%BA/)
 - [ Односвязный линейный список](https://prog-cpp.ru/data-ols/)
