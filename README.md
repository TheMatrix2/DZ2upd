# Домашнее задание №3 по курсу Алгоритмических языков (C++)
Реализация генерации шифроключа произвольной длины на основе квадратного уравнения

Алгоритм генерации представляет
собой следующую последовательность шагов:
1. Подсчитать дискриминант квадратного уравнения.
2. Если дискриминант четный, то добавить в ключ бит, равный 0,
   или добавить единицу в ином случае.
3. Сдвинуть коэффициенты квадратного уравнения вправо, то есть
   для 𝑎 ∗ 𝑥^2 + 𝑏 ∗ 𝑥 + 𝑐 = 0 получится 0 ∗ 𝑥^2 + 𝑎 ∗ 𝑥 + 𝑏 = 0.
4. Принять коэффициент перед x^2 равным остатку от деления
   дискриминанта на 128.5. Если необходимая длина ключа не выработана, то вернуться на
   шаг 1.
   Результирующий ключ должен быть представлен в виде массива байт.
