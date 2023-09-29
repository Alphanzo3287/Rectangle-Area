// Alphanzo Moore

//CIS-5 Online

// Sept 28, 2023

// Assignment 6C: Rectangle Area - Complete the Program

#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // Variables
    double length, width, area;

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();

    // Get the rectangle's area.
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}

// getLength function
double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// getWidth function
double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// getArea function
double getArea(double length, double width)
{
    return length * width;
}

// displayData function
void displayData(double length, double width, double area)
{
    cout << "Rectangle Length: " << length << endl;
    cout << "Rectangle Width: " << width << endl;
    cout << "Rectangle Area: " << area << endl;
}
