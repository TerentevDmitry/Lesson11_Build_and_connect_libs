# Домашнее задание к занятию «Сборка и подключение библиотек»

### Задание 1

[Статическая библиотека](11_01).

<details>
# Задача 1. Статическая библиотека
В этом задании вам нужно создать статическую библиотеку и использовать её.

Создайте класс `Greeter`, который определяет один метод `greet`, принимающий на вход строку и возвращающий строку с приветствием значения той строки, которую ему передали.

Поместите этот класс в статическую библиотеку и воспользуйтесь им из консольного приложения для приветствия пользователя, который введёт своё имя.

### Пример работы программы
#### Консоль
```
Введите имя: Владислав
Здравствуйте, Владислав!
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Чтобы иметь возможность подключить заголовочный файл библиотеки, нужно добавить в проект-клиент директорию, в которой находятся заголовочные файлы библиотеки.

Чтобы проект-клиент включил в себя статическую библиотеку, нужно добавить ссылку на неё в проект-клиент.

</details>

</details>

### Задание 2

[Динамическая библиотека](11_02).

<details>
# Задача 2. Динамическая библиотека
В этом задании вам нужно создать динамическую библиотеку и использовать её.

Создайте класс `Leaver`, который определяет один метод `leave`, принимающий на вход строку и возвращающий строку с прощанием со значением той строки, которую ему передали.

Поместите этот класс в динамическую библиотеку и воспользуйтесь им из консольного приложения для прощания с пользователем, который введёт своё имя.

### Пример работы программы
#### Консоль
```
Введите имя: Анатолий
До свидания, Анатолий!
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Чтобы иметь возможность подключить заголовочный файл библиотеки, нужно добавить в проект-клиент директорию, в которой находятся заголовочные файлы библиотеки.

Чтобы проект-клиент включил в себя статическую библиотеку с информацией, необходимой для загрузки и вызова динамической библиотеки, нужно добавить ссылку на неё в проект-клиент.

Не забудьте использовать специальный синтаксис для экспорта необходимых членов из библиотеки. Предопределённый Visual Studio макрос вы можете посмотреть в свойствах проекта библиотеки в меню: `C/C++ -> Препроцессор -> Определения препроцессора`.

</details>
</details>

### Задание 3

[Динамическая библиотека CMake](11_03).

<details>
# Задача 3. Динамическая библиотека CMake
В этом задании вам нужно создать динамическую библиотеку и использовать её при помощи CMake.

Создайте класс `Leaver`, который определяет один метод `leave`, принимающий на вход строку и возвращающий строку с прощанием со значением той строки, которую ему передали.

Поместите этот класс в динамическую библиотеку и воспользуйтесь им из консольного приложения для прощания с пользователем, который введёт своё имя.

### Пример работы программы
#### Консоль
```
Введите имя: Анатолий
До свидания, Анатолий!
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Для добавления библиотеки в проект CMake используйте команду `add_library`.

Для связывания приложения и библиотеки используйте команду `target_link_libraries`.

Вы можете использовать специальный синтаксис для экспорта необходимых членов из библиотеки.

При желании вы можете избавиться от специального синтаксиса для экспорта с помощью команды CMake `set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)`.

</details>

</details>

### Задание 4

[Иерархия классов в DLL, проекты VC++](11_04).

<details>
# Задача 4*. Иерархия классов в DLL, проекты VC++
В этом задании вам нужно создать более сложную динамическую библиотеку с помощью проектов Visual C++.

Возьмите иерархию классов из [предыдущего задания](../../06/03) и поместите её в динамическую библиотеку. В вашем консольном приложении должен остаться только код для общения с пользователем и использования классов из библиотеки.

Продемонстрируйте работоспособность вашей библиотеки.

### Пример работы программы
#### Консоль
```
Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Равнобедренный треугольник:
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Чтобы иметь возможность подключить заголовочный файл библиотеки, нужно добавить в проект-клиент директорию, в которой находятся заголовочные файлы библиотеки.

Чтобы проект-клиент включил в себя статическую библиотеку с информацией, необходимой для загрузки и вызова динамической библиотеки, нужно добавить ссылку на неё в проект-клиент.

Не забудьте использовать специальный синтаксис для экспорта необходимых членов из библиотеки. Предопределённый Visual Studio макрос вы можете посмотреть в свойствах проекта библиотеки в меню: `C/C++ -> Препроцессор -> Определения препроцессора`.

</details>

</details>

### Задание 5

[Иерархия классов в DLL и CMake](11_05).

<details>
# Задача 5*. Иерархия классов в DLL и CMake
В этом задании вам нужно собрать вашу динамическую библиотеку с помощью CMake.

Возьмите исходники из [предыдущего задания](../03) и соберите из них работоспособную программу с помощью CMake.

Продемонстрируйте работоспособность вашей программы.

### Пример работы программы
#### Консоль
```
Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Равнобедренный треугольник:
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Для добавления библиотеки в проект CMake используйте команду `add_library`.

Для связывания приложения и библиотеки используйте команду `target_link_libraries`.

При желании вы можете избавиться от специального синтаксиса для экспорта с помощью команды CMake `set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)`.

</details>

</details>