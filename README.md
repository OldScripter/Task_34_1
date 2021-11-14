# Task_34_1
Lambda, range-based and other modern hints

### (3 задания в 1 репозитории)
## Задание 1 (к уроку 2)

☝️ Цель задания
Закрепить работу с нововведениями в базовых конструкциях языка.

☑️Что нужно сделать
Вспомните пример с range-based циклом по закрытию файлов:
```
for(auto tFile : files)
  currentFile.close();
```
По аналогии распечатайте числа от 1 до 5, используя auto и ```initializer_list```.

## Задание 2 (к уроку 3)

☝️ Цель задания
Поработать с новыми структурами данных.

☑️Что нужно сделать
Так как ```std::unordered_set``` позволяет нам быстро определять, есть ли указанный ключ в контейнере, мы можем использовать его для фильтрации уникальных чисел.
Создайте лямбда-выражение, принимающее на вход ```std::vector<int>```, в котором содержатся числа, которые могут повторяться. Внутри лямбды создайте ```unordered_set``` и при помощи него определяйте, сколько раз текущее число вам встречалось раньше. В результате верните ```std::unique_ptr<std::vector<int>>```, содержащий числа без повторов. При проходе по контейнеру используйте новый формат цикла for и ключевое слово auto. 
  
## Задание 3 (к уроку 4)

☝️ Цель задания
Поработать с файловой системой, используя новую библиотеку std::filesystem.

☑️Что нужно сделать
В нашем арсенале теперь есть возможность рекурсивно проходить по каталогам, то есть получить список всех файлов, каталогов (и подкаталогов), которые содержатся по указанному пути. Для этого в стандартной библиотеке есть std::filesystem::recursive_directory_iterator, принимающий на вход путь, который он будет обходить рекурсивно. На каждом шаге он будет выдавать очередной путь, это может быть как каталог, так и обычный файл. Например, код
  
```
for(auto& p: fs::recursive_directory_iterator("D:\\dir1"))
  std::cout << p.path() << '\n';
```
выведет полные пути ко всем файлам и подкаталогам в директории D:\dir1. Вызов p.path() возвращает объект типа ```std::filesystem::path```, который позволяет:

Определить, файл это или каталог при помощи метода ```is_regular_file()```.
Получить расширение для обычного файла при помощи метода ```extension()```.
При помощи метода ```compare()``` можно сравнить расширение с произвольной строкой: ```p.path().extension().compare(“.torrent”)```.

Создайте лямбда-функцию, которая принимает на вход путь в файловой системе и искомое расширение в виде строки, а возвращает список имён файлов, которые имеют данное расширение. Объявление нашей функции может начинаться так:

```
auto recursiveGetFileNamesByExtension = [](std::filesystem::path path, const std::string extension)
```

