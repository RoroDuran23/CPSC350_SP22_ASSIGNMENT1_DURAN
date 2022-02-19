//this a header file and it's purpose is to define a class
#include <iostream>
#include "translator.h"

using namespace std;

class FileProcessor{
    public: //access modifiers
        FileProcessor();//default constructor
        ~FileProcessor();//destructor
        //any public members go here
        Translator t;
        // string fileContentReceiver;
        // std::ifstream readFile;
        // std::ofstream writeFile;
        void processFile(string inputFile, string outputFile);
};
