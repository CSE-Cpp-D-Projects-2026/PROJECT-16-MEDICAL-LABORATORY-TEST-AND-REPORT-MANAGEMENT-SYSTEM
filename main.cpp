//My 1st Github //
#include <iostream>
#include <string>
using namespace std;
class patient
{
public:
    string name;
    int age;
    string contact_no;
    string gender;
    string address;
    string problem;
};
class Test
{
public:
    string test_name;
    int test_code;
    int price;
    string department;
    string sample_type;
};
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
int main()
{
    cout << "===== MEDICAL LAB TEST AND REPORT MANAGEMENT SYSTEM =====" << endl;
    return 0;
}