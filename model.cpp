#include "model.h"

Model::Model(){
  tutStr = "";
}

Model::~Model(){
}

string Model::translateSingleCharacter(char c){
  string tutStr = "";
  switch(c){
    case 'b':
      tutStr = "bub";
      break;
    case 'B':
      tutStr = "Bub";
      break;

    case 'c':
      tutStr = "cash";
      break;

    case 'C':
      tutStr = "Cash";
      break;

    case 'd':
      tutStr = "dud";
      break;

    case 'D':
      tutStr = "Dud";
      break;

    case 'f':
      tutStr = "fuf";
      break;

    case 'F':
      tutStr = "Fuf";
      break;

    case 'g':
      tutStr = "gug";
      break;

    case 'G':
      tutStr = "Gug";
      break;

    case 'h':
      tutStr = "hash";
      break;

    case 'H':
      tutStr = "Hash";
      break;

    case 'j':
      tutStr = "jay";
      break;

    case 'J':
      tutStr = "Jay";
      break;

    case 'k':
      tutStr = "kuck";
      break;

    case 'K':
      tutStr = "Kuck";
      break;

    case 'l':
      tutStr = "lul";
      break;

    case 'L':
      tutStr = "Lul";
      break;

    case 'm':
      tutStr = "mum";
      break;

    case 'M':
      tutStr = "Mum";
      break;

    case 'n':
      tutStr = "nun";
      break;

    case 'N':
      tutStr = "Nun";
      break;

    case 'p':
      tutStr = "pub";
      break;

    case 'P':
      tutStr = "Pub";
      break;

    case 'q':
      tutStr = "quack";
      break;

    case 'Q':
      tutStr = "Quack";
      break;

    case 'r':
      tutStr = "rug";
      break;

    case 'R':
      tutStr = "Rug";
      break;

    case 's':
      tutStr = "sus";
      break;

    case 'S':
      tutStr = "Sus";
      break;

    case 't':
      tutStr = "tut";
      break;

    case 'T':
      tutStr = "Tut";
      break;

    case 'v':
      tutStr = "vuv";
      break;

    case 'V':
      tutStr = "Vuv";
      break;

    case 'w':
      tutStr = "wack";
      break;

    case 'W':
      tutStr = "Wack";
      break;

    case 'x':
      tutStr = "ex";
      break;

    case 'X':
      tutStr = "eX";
      break;

    case 'y':
      tutStr = "yub";
      break;

    case 'Y':
      tutStr = "Yub";
      break;

    case 'z':
      tutStr = "zub";
      break;

    case 'Z':
      tutStr = "Zub";
      break;

    default:
      tutStr = c;
  }
  return tutStr;
}

string Model::translateDoubleCharacter(char c){
  string tutStr = "";

  if(c == 'O'){ //
    tutStr = "squatO";
  }
  if(c == 'O'){ //
    tutStr = "squatO";
  }

  if(c == 'o'){ //
    tutStr = "squato";
  }

  if(c == 'U'){ //
    tutStr = "squatU";
  }

  if(c == 'u'){ //
    tutStr = "squatu";
  }

  if(c == 'A'){ //
    tutStr = "squatA";
  }

  if(c == 'a'){ //
    tutStr = "squata";
  }

  if(c == 'E'){ //
    tutStr = "squatE";
  }

  if(c == 'e'){ //
    tutStr = "squate";
  }

  if(c == 'B'){ //
    tutStr = "squaBub";
  }

  if(c == 'b'){ //
    tutStr = "squabub";
  }

  if(c == 'C'){ //
    tutStr = "squaCash";
  }

  if(c == 'c'){ //
    tutStr = "squacash";
  }

  if(c == 'D'){ //
    tutStr = "squaDud";
  }

  if(c == 'd'){ //
    tutStr = "squadud";
  }

  if(c == 'F'){ //
    tutStr = "squaFuf";
  }

  if(c == 'f'){ //
    tutStr = "squafuf";
  }

  if(c == 'G'){ //
    tutStr = "squaGug";
  }

  if(c == 'g'){ //
    tutStr = "squagug";
  }

  if(c == 'H' ){ //
    tutStr = "squaHash";
  }

  if(c == 'h'){ //
    tutStr = "squahash";
  }

  if(c == 'J'){ //
    tutStr = "squaJay";
  }

  if(c == 'j'){ //
    tutStr = "squajay";
  }

  if(c == 'K'){ //
    tutStr = "squaKuck";
  }

  if(c == 'k'){ //
    tutStr = "squakuck";
  }

  if(c == 'L'){ //
    tutStr = "squaLul";
  }

  if(c == 'l'){ //
    tutStr = "squalul";
  }

  if(c == 'M'){ //
    tutStr = "squaMum";
  }

  if(c == 'm'){ //
    tutStr = "squamum";
  }

  if(c == 'N'){ //
    tutStr = "squaNun";
  }

  if(c == 'n'){ //
    tutStr = "squanun";
  }

  if(c == 'P'){ //
    tutStr = "squaPub";
  }

  if(c == 'p'){ //
    tutStr = "squapub";
  }

  if(c == 'Q'){ //
    tutStr = "squaQuack";
  }

  if(c == 'q'){ //
    tutStr = "squaquack";
  }

  if(c == 'R'){ //
    tutStr = "squaRug";
  }

  if(c == 'r'){ //
    tutStr = "squarug";
  }

  if(c == 'S'){ //
    tutStr = "squaSus";
  }

  if(c == 's'){ //
    tutStr = "squasus";
  }

  if(c == 'T'){ //
    tutStr = "squaTut";
  }

  if(c == 't'){ //
    tutStr = "squatut";
  }

  if(c == 'V'){ //
    tutStr = "squaVuv";
  }

  if(c == 'v'){ //
    tutStr = "squavuv";
  }

  if(c == 'Q'){ //
    tutStr = "squaQuack";
  }

  if(c == 'q'){ //
    tutStr = "squaquack";
  }

  if(c == 'W'){ //
    tutStr = "squaWack";
  }

  if(c == 'w'){ //
    tutStr = "squawack";
  }

  if(c == 'X'){ //
    tutStr = "squaeX";
  }

  if(c == 'x'){ //
    tutStr = "squaex";
  }

  if(c == 'Y'){ //
    tutStr = "squaYub";
  }

  if(c == 'y'){ //
    tutStr = "squayub";
  }

  if(c == 'Z'){ //
    tutStr = "squaZub";
  }

  if(c == 'z'){ //
    tutStr = "squazub";
  }
return tutStr;
}
