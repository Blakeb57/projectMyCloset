#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include "closet_item.h"
using namespace std;

int closet();

int main()
{
    int choice;
    ifstream ifs;
    string item;

    list<closet*> my_closet;
    list<closet*>::iterator c;
    closet_item *tmp;

    ifs.open()
}