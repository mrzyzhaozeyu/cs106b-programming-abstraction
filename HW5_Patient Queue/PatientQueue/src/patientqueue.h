/* @author Cong Chen
* @version 2017/07
*/

#pragma once

#include <iostream>
#include <string>
#include "patientnode.h"
#include "strlib.h"
using namespace std;

class PatientQueue {
public:
    PatientQueue() {}
    ~PatientQueue() {}
    virtual void clear() {}
    virtual string frontName() {return ""; }
    virtual int frontPriority() {return 0;}
    virtual bool isEmpty() {return false;}
    virtual void newPatient(string name, int priority) {}
    virtual string processPatient() {return "";}
    virtual void upgradePatient(string name, int newPriority) {}
    virtual string toString() { return "";}

private:
    friend ostream& operator <<(ostream& out, PatientQueue& queue) {
        out << queue.toString();
        return out;
    }
};

/*
 */
ostream& operator <<(ostream& out, PatientQueue& queue);

