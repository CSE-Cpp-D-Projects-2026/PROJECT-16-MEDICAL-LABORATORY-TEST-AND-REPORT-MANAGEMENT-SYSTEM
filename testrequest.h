#ifndef TESTREQUEST_H
#define TESTREQUEST_H
#include <iostream>
#include <string>
using namespace std;
class TestRequest
{
public:
    int request_id;
    int patient_id;
    int test_code;
    string request_date;
    string status;
    void displayRequest()
    {
        cout << "Request ID: " << request_id << endl;
        cout << "Patient ID: " << patient_id << endl;
        cout << "Test Code: " << test_code << endl;
        cout << "Date: " << request_date << endl;
        cout << "Status: " << status << endl;
    }
};
#endif
