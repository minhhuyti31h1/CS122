#ifndef DIEM_H
#define DIEM_H
class Diem
{
private:
	float x;
	float y;
public:
	Diem():x(0),y(0){}
	Diem(float a,float b):x(a),y(b){}
	//setters
	void setX(float a)
	{
		this -> x = a;
	}
	void setY(float b)
	{
		this -> y = b;
	}
	//getters
	float getX()const
	{
		return this -> x;
	}
	float getY()const
	{
		return this -> y;
	}
	friend istream &operator >> (istream & in, Diem & a)
	{
		in>>a.x>>a.y;
		return in;
	}

	friend ostream &operator << (ostream & out, const Diem & a)
	{
		out<<"I("<<a.x<<", "<<a.y<<")";
		return out;
	}
	~Diem(){}
	
};
#endif