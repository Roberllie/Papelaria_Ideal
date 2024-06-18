#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#include <cstdio>
#include <cstring>
#include <iostream>
#include <limits>
#include <stdlib.h>
using namespace std;

/*
  error(s)
  Apresenta uma mensagem de erro s ao usu�rio
  */
inline void error(const string &s) { cerr << "[ERRO] " << s << endl; }

/*
  warning(s)
  Apresenta uma mensagem de aviso s ao usu�rio
  */
inline void warning(const string &s) { cerr << "[AVISO] " << s << endl; }

/*
  show(s)
  Apresenta uma mensagem s ao usu�rio
  */
inline void show(const string &s) { cout << "[ " << s << " ]\n\n"; }

/*
  randInt(max)
  Retorna um valor inteiro aleat�rio entre 0 at� max-1
  */
inline int randInt(int max) { return rand() % (max + 1); }

/*
  randInt(min, max)
  Retorna um valor inteiro aleat�rio entre min at� max-1
  */
inline int randInt(int min, int max) { return randInt(max - min) + min; }

/*
  readString(s, myStr, size)
  Apresenta um texto s ao usu�rio para que leia um vetor de caracteres de tamanho size
  */
void readString(const string &s, char myStr[], int size) {
  cout << s;
  cin.getline(myStr, size);
}

/*
  readInteger(s, &intInput)
  Apresenta um texto s ao usu�rio e solicita ao usu�rio um valor inteiro
  */
void readInteger(const string &s, int &intInput) {
  cout << s;
  while (!(cin >> intInput)) {
    error("Invalid integer value!");
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << s;
  }
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

/*
  readReal(s, &floatInput)
  Apresenta um texto s ao usu�rio e solicita ao usu�rio um valor real do tipo float
  */
void readReal(const string &s, float &floatInput) {
  cout << s;
  while (!(cin >> floatInput)) {
    error("Invalid real value!");
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << s;
  }
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

/*
  readChar(s, &intInput)
  Apresenta um texto s ao usu�rio e solicita ao usu�rio um valor real do tipo float
  */
void readChar(const string &s, char &c) {
  cout << s;
  cin >> c;
}

/*
  readBool(s, b)
  Apresenta um texto s ao usu�rio e solicita um valor booleano.
  Qualquer valor diferente de 0 � considerado TRUE
  */
void readBool(const string &s, bool &b) {
  cout << s;
  cin >> b;
}

#endif // LIB_H_INCLUDED
