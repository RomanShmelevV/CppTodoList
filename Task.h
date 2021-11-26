//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#include<string>
#include "TaskStatus.h"
#include <ctime>
#include <chrono>

using namespace std;

class Task {
public:
    void setName(string name);
    string getName();
    string display();
    void setDesctiprion();
    string getDesctiprion();
    TaskStatus getStatus();
    Task();
    Task(string name, string descriprition);
private:
    time_t CreationTime;
    string name;
    string description;
    int dueTo;
    TaskStatus status = ACTIVE;
};

#endif //UNTITLED_TASK_H
