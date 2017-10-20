#include <string>
#include <fstream>
#include <iostream>
/*!
\brief function that prints text to stream
 \param text string to print to output stream
 \param output stream (default value = cout)
 \returns this function doesn't return a value
 */
void print(const std::string& text, std::ostream& out = std::cout);
/*!
\brief function that prints text to file
 \param text string to print to file
 \param output file stream
 \returns this function doesn't return a value
 */
void print(const std::string& text, std::ofstream& out);

