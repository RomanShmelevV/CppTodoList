//
// Created by paefarinov on 19.11.2021.
//
#include "Task.h"

using namespace std;

string Task::display() {
    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + to_string(dueTo) +
           "\nTaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED")
           + "\nCreationTime: " + asctime(localtime(&CreationTime));
}

Task::Task() {
    time (&CreationTime);
}


Task::Task(string name, string descriprition) {
    time (&CreationTime);
    this->name = name;
    this->description = descriprition;
}
void Task::setName(string name) {
    this->name = name;
}

string Task::getName() {
    return name;
}

void Task::setDesctiprion() {
    this->description = description;
}

string Task::getDesctiprion() {
    return description;
}

