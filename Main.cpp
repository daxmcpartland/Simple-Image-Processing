/**
 * Tester class used to test the methods in the Image class.
 * 
 * Craated by Dax McPartland, 3/6/2023
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Image.h"
int main(int argc, char** argv){
    Image img("dog.jpg");
    
    std::cout << " width should be 640 " << img.widthSize() << std::endl;
    std::cout << " height should be 635 " << img.heightSize() << std::endl;

    img.crop(350, 550, 150, 350);
    img.write("croppedDog.jpg");
    
  
    return 0;
}