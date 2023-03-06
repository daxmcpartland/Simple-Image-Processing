# Simple-Image-Processing
This is a simple image processing library written in C++. It provides functionality to read and write image files in PNG and JPG format, as well as perform various image transformations such as grayscale conversion, ascii conversion, and color masking.

## Dependencies
- 'stb_image_write.h' for writing image data
- 'stb_image.h' for loading image data

Please note that these header files are not authored by me, and are instead freely available for public use.

## Usage
To use this library, simply include the 'image.h' header file in your C++ code and link against the required dependencies.

### Image class
The Image class represents an image file loaded into memory. You can construct an Image object by passing the filename of an existing image file, or by creating a new Image object with the desired dimensions and number of color channels.
```
// Load an image from file
Image myImage("path/to/my/image.png");

// Create a new image with dimensions 100x100 and 3 color channels
Image newImage(100, 100, 3);
```

You can then perform various operations on the Image object, such as converting it to grayscale or applying a color mask.

```
// Convert the image to grayscale using the average method
myImage.grayscale_avg();

// Apply a color mask to the image
myImage.colorMask(0.0, 1.0, 1.0);
```
Finally, you can save the modified Image object to a new file using the write method.

```
// Save the modified image to a new file
myImage.write("path/to/new/image.png");
```
### Ascii conversion
The Image class also provides functionality to convert an image object to an ASCII representaion. You can do this by passing in the desired density string, which specifies the ASCII characters to use for each pixel intensity, to the convertToAscii method.
```
/// Density string 
const std::string densityString = " .:-=+*#%@";

// Convert the image to ASCII
std::vector<std::string> asciiLines = img.convertToAscii(densityString);
```
The convertToAscii method returns a vector of strings, where each string represents a line of the ASCII representation of the image.

### Examples

To see how these methods modifies images, please take a look inside of the examples folder.
