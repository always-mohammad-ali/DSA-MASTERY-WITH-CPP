#include "Boxx.h"
#include <iostream>
#include <string>
using namespace std;

Boxx::Boxx()
{
    height = 5;
    width = 10;
    depth = 1;
    color = "red";
    material = "plastic";
}

Boxx::Boxx(double h, double w, double d, string c, string m) :
 height(h),
 width(w),
 depth(d),
 color(c),
 material(m) {}

 void Boxx::volume(){
    double vol = height * width * depth;
    cout << "volume = " << vol << endl ;
 }

 void Boxx::displayInfo(){
    cout << "Box Details:" << endl;
    cout << "  Height  : " << height << endl;
    cout << "  Width   : " << width << endl;
    cout << "  Depth   : " << depth << endl;
    cout << "  Color   : " << color << endl;
    cout << "  Material: " << material << endl;
    volume();
    cout << endl;
 }

 void Boxx::setHeight(double h){
    height = h;
 }

 void Boxx::setWidth(double w) {
    width = w;   // takes the parameter w and stores it in the private variable width
}

void Boxx::setDepth(double d) {
    depth = d;   // takes the parameter d and stores it in the private variable depth
}

void Boxx::setColor(string c) {
    color = c;   // takes the parameter c and stores it in the private variable color
}

void Boxx::setMaterial(string m) {
    material = m; // takes the parameter m and stores it in the private variable material
}


 double Boxx::getHeight(){
     return height;
 }

 double Boxx::getWidth() {
    return width;    // returns the value of width
}

double Boxx::getDepth() {
    return depth;    // returns the value of depth
}

string Boxx::getColor() {
    return color;    // returns the value of color
}

string Boxx::getMaterial() {
    return material; // returns the value of material
}


