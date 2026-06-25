// Box.h
#ifndef BOX_H
#define BOX_H

class Box {
private:
    double height;
    double width;
    double depth;

public:
    // Constructor (parameterized)
    Box(double h, double w, double d);

    // Default constructor (optional)
    Box();

    // Method to calculate and display volume
    void volume() const;

    // Getters / Setters (optional, for completeness)
    double getHeight() const;
    double getWidth() const;
    double getDepth() const;
    void setDimensions(double h, double w, double d);
};

#endif
