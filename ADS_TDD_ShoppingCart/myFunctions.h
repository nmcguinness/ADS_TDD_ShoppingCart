#pragma once

/// @brief Adds two ints - doh!
/// @param x
/// @param y
/// @return
int add(int x, int y)
{
	return x + y;
}

/// @brief Prints a list containing any type (e.g. int, float, bool, string, Point2D, BackAccount etc)
/// @tparam E
/// @param list
template <typename E>
void print(list<E> list)
{
	for (const E& theObj : list)
		cout << theObj << endl;
}

/// @brief Prints any data structure that can provide an iterator to the start and end of the structure
/// @tparam Iter
/// @param iter
/// @param end
template <typename Iter>
void print(Iter iter, Iter end)
{
	while (iter != end)
	{
		cout << *iter << endl;
		iter++;
	}
}