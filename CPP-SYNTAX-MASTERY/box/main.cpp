#include "Boxx.h"
#include <iostream>
#include <string>


using namespace std;

int main() {
    // VARIABLES FOR INPUT
    double h, w, d;
    string c, m;

    // ===== CREATE BOX 1 WITH USER INPUT =====
    cout << "=== CREATING BOX 1 ===" << endl;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter depth: ";
    cin >> d;
    cout << "Enter color: ";
    cin >> c;
    cout << "Enter material: ";
    cin >> m;

    Boxx box1(h, w, d, c, m);  // uses parameterized constructor

    cout << "\nBOX 1 INFORMATION:" << endl;
    box1.displayInfo();

    // ===== CREATE BOX 2 WITH DEFAULT VALUES =====
    cout << "=== CREATING BOX 2 (default) ===" << endl;
    Boxx box2;  // uses default constructor

    cout << "\nBOX 2 INFORMATION (before changes):" << endl;
    box2.displayInfo();

    // ===== CHANGE BOX 2 USING INDIVIDUAL SETTERS =====
    cout << "\n=== CHANGING BOX 2 INDIVIDUALLY ===" << endl;

    // We can change ONE property at a time
    cout << "Enter new height for box2: ";
    cin >> h;
    box2.setHeight(h);  // ONLY changes height, everything else stays the same

    cout << "Enter new color for box2: ";
    cin >> c;
    box2.setColor(c);   // ONLY changes color, everything else stays the same

    cout << "\nBOX 2 INFORMATION (after partial changes):" << endl;
    box2.displayInfo();  // Notice only height and color changed!

    // Change the rest
    cout << "Enter new width for box2: ";
    cin >> w;
    box2.setWidth(w);

    cout << "Enter new depth for box2: ";
    cin >> d;
    box2.setDepth(d);

    cout << "Enter new material for box2: ";
    cin >> m;
    box2.setMaterial(m);

    cout << "\nBOX 2 INFORMATION (after all changes):" << endl;
    box2.displayInfo();

    // ===== DEMONSTRATE GETTERS =====
    cout << "=== USING GETTERS TO READ VALUES ===" << endl;

    // Getters allow us to READ private values from outside the class
    cout << "Box 1 height is: " << box1.getHeight() << endl;
    cout << "Box 1 width is: " << box1.getWidth() << endl;
    cout << "Box 1 color is: " << box1.getColor() << endl;

    // We can use getters in calculations
    double totalHeight = box1.getHeight() + box2.getHeight();
    cout << "Combined height of both boxes: " << totalHeight << endl;

    // Compare materials using getters
    if (box1.getMaterial() == box2.getMaterial()) {
        cout << "Both boxes are made of " << box1.getMaterial() << endl;
    } else {
        cout << "Box 1 is " << box1.getMaterial() << " and Box 2 is " << box2.getMaterial() << endl;
    }

    // ===== CAN WE CHANGE BOX 1 LIKE BOX 2? YES! =====
    cout << "\n=== CHANGING BOX 1 USING SETTERS ===" << endl;

    // Just like we did with box2, we can change box1's properties
    cout << "Changing Box 1's height to 10..." << endl;
    box1.setHeight(10);  // box1's height is now 10

    cout << "Changing Box 1's color to 'Gold'..." << endl;
    box1.setColor("Gold");

    cout << "\nBOX 1 INFORMATION (after changes):" << endl;
    box1.displayInfo();  // See! Box 1 changed too!

    // ===== CREATE BOX 3 USING SETTERS INSTEAD OF CONSTRUCTOR =====
    cout << "=== CREATING BOX 3 USING ONLY SETTERS ===" << endl;
    Boxx box3;  // start with default values

    // Set each property individually using setters
    box3.setHeight(7.5);
    box3.setWidth(3.2);
    box3.setDepth(4.1);
    box3.setColor("Purple");
    box3.setMaterial("Metal");

    cout << "\nBOX 3 INFORMATION (set entirely with setters):" << endl;
    box3.displayInfo();

    cout << "=== PROGRAM END ===" << endl;
    return 0;
}
