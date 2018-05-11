#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <fstream>

std::vector<std::string> StringToVector(std::string theString, char separator);

int main(){

    std::ofstream writeToFile;
    std::ifstream readFromFile;
    std::string txtToWrite = "";
    std::string txtFromFile = "";
    // ios::app : Append to the end of the file
    // ios::trunc : If the file exists delete content
    // ios::in : Open file for reading
    // ios::out : Open file for writing
    // ios::ate : Open writing and move to the end of the file

    writeToFile.open("tut122.txt", std::ios_base::out | std::ios_base::trunc);
    if(writeToFile.is_open()){
        writeToFile << "Beginning of File\n";
        std::cout << "Enter data to write: ";
        getline(std::cin, txtToWrite);
        writeToFile << txtToWrite;
        writeToFile.close();
    }

    std::cout << "\n";

    readFromFile.open("tut132.txt", std::ios_base::in);
    if(readFromFile.is_open()){
        while(readFromFile.good()){
            getline(readFromFile, txtFromFile);
            std::vector<std::string> vecWords = StringToVector(txtFromFile, ' ');
            double charcount = 0;
            for(auto word: vecWords)
                charcount += word.length();
            double avrgWordLength = (charcount / vecWords.size()); 

            std::cout << txtFromFile << "\n";

            std::cout << "# of words: " << vecWords.size() <<
                ". Average length of words: " << avrgWordLength << "\n";
        }
        readFromFile.close();
    }

    return 0;
}


std::vector<std::string> StringToVector(std::string theString, char separator){
    std::vector<std::string> vecsWords;

    std::stringstream ss(theString);
    std::string sIndivStr;
    while(getline(ss, sIndivStr, separator)){
        vecsWords.push_back(sIndivStr);
    }
    return vecsWords;
}