#include <iostream>
#include "printll.h"
#include <string.h>

class Job {
public:
    int id;
    std::string employeeName;
    int pages;

    Job() {
        id = 0;
        employeeName = "";
        pages = 0;
    }

    void setJob(int i, std::string name, int p) {
        id = i;
        employeeName = name;
        pages = p;
    }
};

class Printer {
private:
    qNode<Job>* front=nullptr;
    qNode<Job>* back = nullptr;

public:
    void queuePrint(int id, std::string name, int pages) {
    Job newJob;
        newJob.setJob(id,name,pages);
        enqueue(newJob, &front, &back);
        std::cout<<"in Queue "<< id <<" "<< name << " No. of Pages: " << pages << std::endl;
    }
    void print() {
        if (isEmpty(&front)) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }
        Job currentJob = dequeue(&front, &back);
        std::cout << "Printing: ID: " << currentJob.id << " Name:"<< currentJob.employeeName << " Pages: " << currentJob.pages << std::endl;
    }
};

int main() {
    Printer printer;

    printer.queuePrint(2516918, "Vince", 10);
    printer.queuePrint(2516919, "Andrew", 5);
    printer.queuePrint(2516920, "Urbano", 20);

    std::cout << std::endl;

    printer.print();
    printer.print();

    std::cout << std::endl;

    printer.queuePrint(2516918, "Francisco", 15);

    std::cout << std::endl;

    printer.print();
    printer.print();
    printer.print();

    return 0;
}