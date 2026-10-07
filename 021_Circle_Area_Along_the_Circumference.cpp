#include <iostream>
#include <cmath>

int main()
{
    const float PI = 3.14;
    float circleCircumference;
    std::cout << "Please Enter Circle Circum ference: "; std::cin >> circleCircumference;
    unsigned int Area = floor( pow(circleCircumference, 2)/ (4*PI) );
	std::cout << "Area of Circle is: " << Area << std::endl;

}

