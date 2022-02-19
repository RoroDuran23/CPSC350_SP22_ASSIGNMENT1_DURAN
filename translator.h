#include <iostream>
#include "model.h"
using namespace std;

class Translator{

  public:
    Translator();
    ~Translator();
    string tutStr;
    string normalStr;
    string word;
    Model m;
    string translateEnglishWord(string wordInput);
    string translateEnglishSentence(string sentInput);
};
