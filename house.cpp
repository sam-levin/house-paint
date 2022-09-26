#include <iostream>
using namespace std;

int main () {

    // instantiating all variables 
    double width, wallHeight, totalHeight, roofHeight, windowWidth, windowHeight, roofSf, wallSf, totalSf, cansOfPaint, windowArea, sfPerCan; 

    sfPerCan = 400;
    std::cout << "Welcome to paint calculator 2022! \n \n";

    std::cout << "How wide is the wall in feet? ";
    std::cin >> width;
    std::cout << "and how high is the wall to the bottom of the roof? ";
    std::cin >> wallHeight;
    wallSf = width * wallHeight;
    std::cout << "and how high is the wall to the top of the roof? ";
    std::cin >> totalHeight;
    roofHeight = totalHeight - wallHeight; 
    roofSf = .5 * roofHeight * width;

    std::cout << "How wide is the window (in feet)? ";
    std::cin >> windowWidth;
    std::cout << "and what is the windows width? ";
    std::cin >> windowHeight;
    windowArea = windowHeight * windowWidth;
    totalSf = (roofSf + wallSf) - windowArea;

    cansOfPaint = totalSf / sfPerCan;

    std::cout << "\nA side wall that is";
    std::cout << "' wide and ";
    std::cout << "' wide and ";
    std::cout << "' wide and ";
    std::cout << "' wide and ";
    std::cout << "' wide and ";
    std::cout << "' wide and ";
    std::cout << "(assuming that each can will cover 400 square feet of wall). ";
    std::cout << "Thanks for using Paint Calcuulator 2022. Goodbye! ";

}