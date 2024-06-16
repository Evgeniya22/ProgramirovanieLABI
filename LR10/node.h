#pragma once
#include <string>
class Node {
public:
    int busNumber;
    std::string people;
    int number;
    Node* next;
  
    // Default constructor
    Node() : busNumber{-1}, people{""},number{-1}{}
  
    // Parameterised Constructor
    Node(int _busNumber,std::string _people,int _number) : busNumber{_busNumber},people{_people},number{_number}, next{nullptr}{}

};