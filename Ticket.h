//
// Created by xurui on 2020/1/29.
//

#ifndef TOETS_TICKET_H
#define TOETS_TICKET_H

#include <iostream>
#include <memory>
#include "Employee.h"

class Ticket {
    static int serialNum;
    unsigned int id;
    std::string descriptions;
    std::shared_ptr<Employee> creator;
    std::string solution;
    std::shared_ptr<Employee> slover;
    bool status;

public:
    Ticket(const std::string &descriptions, const std::shared_ptr<Employee> &creator);

    virtual ~Ticket();

    bool isStatus() const;

    void setStatus(bool status);

    unsigned int getId() const;

    void setId(unsigned int id);

    const std::string &getDescriptions() const;

    void setDescriptions(const std::string &descriptions);

    const std::shared_ptr<Employee> &getCreator() const;

    void setCreator(const std::shared_ptr<Employee> &creator);

    const std::string &getSolution() const;

    void setSolution(const std::string &solution);

    const std::shared_ptr<Employee> &getSlover() const;

    void setSlover(const std::shared_ptr<Employee> &slover);

    virtual void output(){
        std::cout << "   Status: " << (isStatus() ? "Open" : "Solved") << std::endl;
        getCreator()->toString();
        std::cout << ": " << getDescriptions() << std::endl;

        if(!isStatus() && getSlover() != nullptr) {
            getSlover()->toString();
            std::cout << ": " << getSolution() << std::endl;
        }
    }

    static int getSerialNum();

    static void setSerialNum(int serialNum);


};


#endif //TOETS_TICKET_H
