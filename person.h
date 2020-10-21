#ifndef __PERSON_H__
#define __PERSON_H__

class Person{
    private:
        char *name;
Person *father; 
Person *mother;
Person **children;
int numChildren;
int capacity;

 public:
        Person(const char *name, Person* father, Person* mother);
        ~Person();

        const char* getName(){return name;}

        void addChild(Person *newChild);

        void printAncestors();
        void printDecendents();

    private:
        void printLineage( char dir, int level);
char* compute_relation(int level);
};
void expand(Person ***t, int *MAX);

#endif
