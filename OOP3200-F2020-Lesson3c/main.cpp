/**
 * Project OOP3200-F2021-ICE5
 * @author Katherine Bellman
 * @Student number: 100325825
 * @Course: OOP 3200
 *
 * @Date: Octorber 17th 2021
 * @version 1.0
 */

#include <iomanip>
#include <iostream>

#include <vector>

#include "GameObject.h"
#include "Vector3D.h"


static void BuildGameObjects(std::vector<GameObject*>& game_objects, const int num = 2)
{
	for (auto count = 0; count < num; ++count)
	{
		int id;
		std::cout << "Enter the gameObject's ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the gameObject's Position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You Entered " << id << " for the gameObject's ID " << std::endl;
		std::cout << "You Entered " << point << " for the gameObject's Position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto* gameObject = new GameObject(id, point);
		game_objects.push_back(gameObject);
	}
	
}

static void CompareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first gameObject and second gameObject is: "
		<< Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first gameObject to the second gameObject is: "
		<< Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl;

	std::cout << "--------------------------------------------------------------\n" << std::endl;
	std::cout << "First Game Object Details:" << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second Game Object Details:" << std::endl;
	std::cout << object2->ToString() << std::endl;
}



int main()
{
	Vector2D point2d(200.0f, 300.0f);

	Vector3D<int> point1;
	Vector3D<float> point2;
	Vector3D<float> point3(point2d);
	Vector3D<int> point4("4", "5", "6");

	std::cout << "Enter  point1's Position (x, y, z): ";
	std::cin >> point1 ;

	std::cout << "Enter  point2's Position (x, y, z): ";
	std::cin >> point2 ;

	

	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << point1 << std::endl;
	std::cout << point2 << std::endl;
	std::cout << point3 << std::endl;
	std::cout << point4 << std::endl;



	/*std::vector<GameObject*> gameObjects;

	int num_of_GO;
	std::cout << "How Many Game Objects do you need?: ";
	std::cin >> num_of_GO;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	BuildGameObjects(gameObjects, num_of_GO);
	
	
	int index1;
	std::cout << "What is the First Object index?: ";
	std::cin >> index1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	int index2;
	std::cout << "What is the Second Object index?: ";
	std::cin >> index2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	
	CompareGameObjects(gameObjects[index1], gameObjects[index2]);
	CompareGameObjects(gameObjects[index1], gameObjects[index2]);*/
}

