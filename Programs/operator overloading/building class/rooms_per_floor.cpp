 #include <iostream>
using namespace std;
class Building
{
public:
	unsigned int rooms,floors;

	void setRooms(unsigned int r)
	{
		rooms = r;
	}
	void setFloors(unsigned int f)
	{
		floors = f;
	}
	unsigned int getRooms() const
	{
		return rooms;
	}
	unsigned int getFloors() const
	{
		return floors;
	}
	
};
void roomsPerFloor(const Building& aBuilding)
{
	double averageroomsperFloor = double(aBuilding.getRooms() / aBuilding.getFloors());
	cout << "average rooms per floor are :" << averageroomsperFloor << endl;
}


class House :public Building 
{	 
private:
	unsigned int Bedrooms, Bathrooms;
public:
	void setBedrooms(unsigned int bedrooms)
	{
		Bedrooms = bedrooms;
	}
	void setBathrooms(unsigned int bathrooms)
	{
		Bathrooms = bathrooms;
	}
	unsigned int getBedrooms()
	{
		return Bedrooms;
	}
	unsigned int getBathrooms()
	{
		return Bathrooms;
	}



};
int main()
{
	House myhouse ,myroom;
	myhouse.setRooms(10);
	myhouse.setFloors(4);
	cout << "my house consist of :" << myhouse.getFloors() << "floors and" << myhouse.getRooms() << "rooms" << endl;
	roomsPerFloor(myhouse);

	return 0;
}