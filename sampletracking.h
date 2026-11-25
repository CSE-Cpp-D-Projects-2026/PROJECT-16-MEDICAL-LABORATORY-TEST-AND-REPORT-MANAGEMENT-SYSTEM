#ifndef SAMPLETRACKING_H
#define SAMPLETRACKING_H
#include <iostream>
#include <string>
using namespace std;
class SampleTracking
{
public:
    int sample_id;
    int patient_id;
    int request_id;
    string sample_type;
    string collection_date;
    string status;
    string location;
    void displaySample()
    {
        cout << "Sample ID: " << sample_id << endl;
        cout << "Patient ID: " << patient_id << endl;
        cout << "Request ID: " << request_id << endl;
        cout << "Sample Type: " << sample_type << endl;
        cout << "Collection Date: " << collection_date << endl;
        cout << "Status: " << status << endl;
        cout << "Location: " << location << endl;
    }
};
#endif
