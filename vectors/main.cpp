#include <iostream>


template<typename T>
class vector2
{
public:

	T x, y;

	
	vector2(T x, T y)
	{
		this->x = x;
		this->y = y;
	}
	
};

template <typename T>
vector2<T> operator -(const vector2<T>& right);

template <typename T>
vector2<T> operator +(vector2<T>& left ,vector2<T>& right)
{
	return vector2<T>(left.x + right.x, left.y + right.y);
}

int main()
{

	vector2<int> playerPos(20,20);
	vector2<int> enemyPos(40,20);

	vector2<int> newPos = playerPos + enemyPos;

	std::cout << newPos.x << std::endl;

	std::getchar();
	return 0;

}