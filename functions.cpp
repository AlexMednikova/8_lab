#include "header.h"

 void list::push(char smbl)
    {
        element *current = head;
        if (head == nullptr)
        {
         head = new element(smbl); 
        }
        else
        {
         while (current->next!=nullptr) 
         {
            current = current->next;
         }
         current->next = new element(smbl);
        }
        size += 1;
    }
 char& list::operator[](int index)
    {
        element* current = head;
        int count = 0;
        while (count<index)
        {
            current = current->next;
            count += 1;
        }
        return current->smbl;
    }
 void list::output()
    {
        element* current = head;
        int i = 0;
        while (i < size) 
            {
            cout << current->smbl;
            current = current->next;
            i += 1;
            }
    }
 void list::splt()
 { 
     element* current = head;
     element* extra;
     while (current->next!=nullptr)
     {
        if  (current->smbl == current->next->smbl)
        {
            extra = current->next; 
            current->next = current->next->next; 
            delete extra; 
            size -= 1;
        }
        else 
        {
        current = current->next;
        }   
     }
 }
 void list::add(list a)
    {
        for(int i=0;i < a.size;i++)
        {
        element* current = head;
        while (current->next!=nullptr)
        {
            current = current->next;
        }
        current->next = new element(a[i]);
        size += 1;
        }
    }
void list::mddl(char e, list a)
    {   
        element* current = head;
        element* extra;
        int i = a.size-1;
        int j = 0;
        while (current->smbl!=e)
        {
            current = current->next;
        }
        if (current->smbl == e)
        {
            while (j < a.size)
            {
                extra = current->next;
                current->next = new element(a[i]);
                current->next->next = extra;
                i -= 1;
                j += 1;
                size += 1;
            }
        }
    }    
 void list::reverse()
    {
        element* current = head;
        char mas[size];
        int i = 0;
        while (current!=nullptr)
        {
            mas[i]=current->smbl;
            current = current->next;
            i += 1;
        }
        current = head;
        while (current!=nullptr)
        {
            current->smbl= mas[i-1];
            current = current->next;
            i -= 1;
        }
    }
 void list::file()
    {
        ofstream fout("output.txt");
        element* current = head;
        int i = 0;
        while (i < size) 
            {
                fout << current->smbl;
                current = current->next;
            i += 1;
            }
    }


