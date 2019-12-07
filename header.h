#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <fstream>
using namespace std;

struct list
{
    struct element
    {
    element(char smbl,element* next = nullptr)
    {
     this->smbl=smbl;
     this->next=next;   
    }
    char smbl;
    element* next;
    };
    element* head;
    int size;
    list()
    {
        size=0;
        head=nullptr;
    }
    void push(char smbl);
    void output();
    char& operator[](int index);
    void add(list a);
    void mddl(char e, list a);
    void splt();
    void file();
    void reverse();
};

#endif