#ifndef Point_H
#define Point_H
class Point
{
private:
	int x;
	int y;
public:
	Point():x(0),y(0){}
	Point(int a,int b):x(a),y(b){}
	//setters
	void setX(int a)
	{
		this -> x = a;
	}
	void setY(int b)
	{
		this -> y = b;
	}
	//getters
	int getX()const
	{
		return this -> x;
	}
	int getY()const
	{
		return this -> y;
	}
	
	~Point(){}
	
};
#endif