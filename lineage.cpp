#include "person.h"
#include "personList.h"

int main() {
    PersonList theList;

    theList.addPerson("Bob", "Mark", "Betty");
    theList.addPerson("Jim", "Bob", "Sally");
    theList.addPerson("Frank", "Jim", "Mary");
    theList.addPerson("Leonard", "Jim", "Mary");
    theList.addPerson("Kim", "Leonard", "Sarah");

    theList.printLineage("Jim");
    theList.printLineage("Kim");
    theList.printLineage("Betty");

    return 0;
}
