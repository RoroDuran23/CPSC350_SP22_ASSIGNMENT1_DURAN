#include "fileProcessor.h"
#include <fstream>
#include <cstdlib>


FileProcessor::FileProcessor(){
}

FileProcessor::~FileProcessor(){
}

void FileProcessor::processFile(string inputFile, string outputFile){
  string fileContentReceiver;
  ifstream readFile; //ifstream reads the files
  ofstream writeFile; //ofstream writes on the file

  Translator t;

  readFile.open(inputFile);
  writeFile.open(outputFile);

  if(readFile.is_open() && writeFile.is_open()){ //make sure both files are open
    while (getline(readFile, fileContentReceiver)) { //tried EndOfFile but didn't work :/
      writeFile << t.translateEnglishSentence(fileContentReceiver) << endl;
    }
    readFile.close(); //close file
  }

  else{
    exit(EXIT_FAILURE);
  }
}
