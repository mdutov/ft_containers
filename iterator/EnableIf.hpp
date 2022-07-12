#pragma once

#ifndef ENABLEIF_HPP
# define ENABLEIF_HPP

/* 
    cppreference.com

    Условно создает экземпляр типа для разрешения перегрузки SFINAE.
    Вложенное определение типа enable_if<Condition,Type>::type (синоним для Type)
    существует, если и только если значение Condition равно true.
*/

namespace ft
{
template <bool Condition, class T = void> 
struct enable_if {};

template <class T> 
struct enable_if<true, T> {typedef T type;};
}

#endif
