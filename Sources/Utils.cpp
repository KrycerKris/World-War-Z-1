#include "Utils.h"

float nmUtils::AngleBetween(sf::Vector2f &point1, sf::Vector2f &point2) {
	return atan2(point2.y - point1.y, point2.x - point1.x) * 180 / PI;
}

sf::Vector2f nmUtils::NormaliseVector2f(const sf::Vector2f &vector)
{
	double length = sqrt(pow(vector.x, 2) + pow(vector.y, 2));
	if (abs(length) < 1E-8) {
		return sf::Vector2f(0, 0);
	}
	return sf::Vector2f(vector.x / length, vector.y / length);
}

float nmUtils::DistanceBetween(const sf::Vector2f &point1,const sf::Vector2f &point2)
{
	return sqrt(pow(point1.x - point2.x,2) + pow(point1.y - point2.y,2));
}

sf::Vector2f nmUtils::VectorBetweenPoints(const sf::Vector2f& point1, const sf::Vector2f& point2)
{
	return sf::Vector2f(point2.x - point1.x, point2.y - point1.y);
}

sf::Vector2f nmUtils::RandVector2f()
{
	int x = rand() % 3 - 1;
	int y = rand() % 3 - 1;
	return sf::Vector2f(x, y);

}

sf::Vector2f nmUtils::RandSpawn() {
	sf::Vector2f _position;
	_position.x = rand() % 100 - 50;
	_position.y = rand() % 100 - 50;
	if (_position.x > 0) _position.x += WINDOW_WIDTH;
	if (_position.y > 0) _position.y += WINDOW_HEIGHT;
	return _position;
}