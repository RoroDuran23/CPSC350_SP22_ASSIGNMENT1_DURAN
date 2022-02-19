#include "fileProcessor.h"
using namespace std;
//Model sc;

int main(int argc, char *argv[]){
  FileProcessor fp;
  Translator t;

  string inputIn;
  string inputOut;
  cout << t.translateEnglishSentence("Hello, I'm Rodrigo.") << endl;

  cout << "What is your input file?" << endl;
  cin >> inputIn;

  cout << "What is your output file?" << endl;
  cin >> inputOut;


  fp.processFile(inputIn, inputOut);
  return 0;
}
