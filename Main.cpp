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

    // Making Grayscaled
    img.grayscale_avg();
    img.write("grayscaled.jpg");

    // Using color mask to make teal
    img.colorMask(0, 1, 1);
    img.write("tealmasked.jpg");


    // Converting img to ascii and writing to text file 
    Image trasparentImg("dog_transparent.png");
    const std::string densityMap = " .:-=+*#%@";
    std::vector<std::string> imgRows = trasparentImg.convertToAscii(densityMap);
    std::ofstream myfile;
    myfile.open ("AsciiResult.txt");
     for(auto line: imgRows){
        myfile << line << "\n";
    }
    myfile.close();

    return 0;
}