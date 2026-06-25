#ifndef BOXX_H
#define BOXX_H
#include <string>

using namespace std;


class Boxx
{
    public:
        Boxx();

        Boxx(double h, double w, double d, string c, string m);

        void volume();
        void displayInfo();

        void setHeight(double h);
        void setWidth(double w);
        void setDepth(double d);
        void setColor(string c);
        void setMaterial(string m);


        double getHeight();
        double getWidth();
        double getDepth();
        string getColor();
        string getMaterial();




    protected:

    private:
       double height;
       double width;
       double depth;
       string color;
       string material;
};

#endif // BOXX_H
