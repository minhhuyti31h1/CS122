#ifndef HINH_H
#define HINH_H

#include <iostream>
using namespace std;

class Hinh{
protected:
	float chieuRong;
	float chieuDai;
public:
	Hinh():chieuRong(0),chieuDai(0){}
	Hinh(float a, float b): chieuRong(a),chieuDai(b){}
	//set
	void setchieuRong(float a){
		this -> chieuRong=a;
	}
	void setchieuDai(float b){
		this -> chieuDai=b;
	}
	//get
	float getchieuRong()const{
		return this -> chieuRong;
	}
	float getchieuDai()const{
		return this -> chieuDai;
	}
	float tinhDienTich()const{
		return(this->chieuDai*this->chieuRong);
	
	}
	float tinhChuVi()const{
		return (this->chieuDai+this->chieuRong)*2;
	}

};
#endif