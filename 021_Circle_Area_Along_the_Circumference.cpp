#include <iostream>
#include <cmath>

unsigned int CalculateCircleAreaByCircumFerence(float circleCircumference) {
    const float PI = 3.14;
    return floor( pow(circleCircumference, 2)/ (4*PI) );
}

int main()
{
    float circleCircumference;
    std::cout << "Please Enter Circle Circum ference: "; std::cin >> circleCircumference;
	std::cout << "Area of Circle is: " << CalculateCircleAreaByCircumFerence(circleCircumference) << std::endl;

}
