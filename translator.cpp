#include "translator.h"

Translator::Translator(){
  tutStr = "";
  Model m;
}

Translator::~Translator(){
}

string Translator::translateEnglishWord(string wordInput){ //do i need to use wordInput ?
  for(int i = 0; i < wordInput.length(); ++i){
    if(i == wordInput.length()-1){
      tutStr += m.translateSingleCharacter(wordInput[i]);
    }
    else{
      if(wordInput[i] != wordInput[i + 1] ){
      tutStr += m.translateSingleCharacter(wordInput[i]);
      }
      else{
        tutStr += m.translateDoubleCharacter(wordInput[i]);
        ++i;
      }
    }
  }
  return tutStr;
}

string Translator::translateEnglishSentence(string sentInput){ //Should have made a substring (or use the split function) to store each individual words in a variable; this could have helped when writing on the output-file.
  for (int i = 0; i < sentInput.length(); ++i){
    if(sentInput[i] != sentInput[i + 1]){
      tutStr += m.translateSingleCharacter(sentInput[i]);
    }
    else{
      tutStr += m.translateDoubleCharacter(sentInput[i]);
      ++i;
    }
  }
  return tutStr;
}
