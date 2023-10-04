#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <iostream>
#include <string>
#include <random>

using namespace std;

int getUserChoice();
int getUserChoice2();
int getUserChoice3();
int getNumSubs();
string getUserName();
bool isValidName(string str);
bool isExistName(string str);
int addUserToSystem(string str);
int generateRandomID();
bool isExistName(string str, int &refToactualId);

#endif
