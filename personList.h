#ifndef __PERSONLIST_H__
#define __PERSONLIST_H__
#include "person.h"

class PersonList{
    private:
Person **theList;
int numPeople; 
int capacity;

public:
        PersonList();
        ~PersonList();
        void addPerson(const char* child_name, const char* father_name, const char* mother_name);
        void insertIntoList(Person *newPerson);
        void printLineage(const char* person);

};
#endif // __PERSONLIST_H__
