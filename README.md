# Уровень 2 Кейс 8
## Описание:
Потокобезопасная очередь

Цель проекта: получение информации о навыках работы кандидата с многопоточными приложениями.

Исходные данные, условия, ограничения:

разработать шаблонный класс, представляющий потокобезопасную очередь в котором необходимо:

- реализовать метод, добавляющий элемент в конец очереди;

- реализовать метод, удаляющий элемент из начала очереди;

- реализовать метод, возвращающий количество элементов в очереди;

- реализовать метод, возвращающий информации о пустоте очереди (true – очередь пуста, false – не пуста);

Требования к конечному результату:

- время выполнения: 5 дней;

- в классе могут быть использованы стандартные контейнеры и примитивы синхронизации;

- допустимо использовать стандарты языка С++ 11 или C++ 14.

# Инструкция запуска :
## G++ :
Необходимое ПО: компилятор g++, git.
```console
example@user:~/$ git clone https://github.com/AlekseiYuzhanin/radar_threadsafe_queue
example@user:~/$ cd radar_threadsafe_queue
example@user:~/radar_threadsafe_queue$ g++ main.cpp -o <название_проекта>
example@user:~/radar_threadsafe_queue$.<название_проекта>
```
## Make :
Необходимое ПО: компилятор gcc, компилятор g++, make, git.
```console
example@user:~/$ git clone https://github.com/AlekseiYuzhanin/radar_threadsafe_queue
example@user:~/$ cd rradar_threadsafe_queue
example@user:~/radar_threadsafe_queue$ make build
example@user:~/radar_threadsafe_queue$ make start
```
## Docker :
Необходимое ПО: Docker, git.
```console
example@user:~/$ git clone https://github.com/AlekseiYuzhanin/radar_threadsafe_queue
example@user:~/$ cd radar_threadsafe_queue
example@user:~/radar_first_mongo_project$ docker build -t <название_проекта> .
example@user:~/radar_first_mongo_project$ docker run <название_проекта>ю
```
