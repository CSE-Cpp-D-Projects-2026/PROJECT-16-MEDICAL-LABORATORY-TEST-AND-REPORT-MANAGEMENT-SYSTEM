#include <iostream>
#include<string>
#include<fstream>
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
    void display()
    {
        cout<<"\nEnter the patient name :";
        cin>>name;
        cout<<"\nEnter the patient age :";
        cin>>age;
        cout<<"\nEnter the patient contact number :";
        cin>>contact_no;
        cout<<"\nEnter the patient gender :";
        cin>>gender;
        cout<<"\nEnter the patient address :";
        cin.ignore();
        getline(cin,address);
        cout<<"\nEnter the patient problem :";
        cin.ignore();
        getline(cin,problem);
    }
    void patient_details()
    {
        ofstream file("patient_details",ios::app);
        if(file.is_open())
        {
            file<<"\nPatient Name :"<<name;
            file<<"\nPatient Age :"<<age;
            file<<"\nPatient Contact Number :"<<contact_no;
            file<<"\nPatient Gender :"<<gender;
            file<<"\nPatient Address :"<<address;
            file<<"\nPatient Problem :"<<problem;
            file<<"\n-----------------------------\n";
            file.close();
            cout<<"\nPatient details saved successfully";
        }
        else
        {
            cout<<"File not opened";
        }
    }
    void view_patient()
    {
        ifstream file("patient_details",ios::in);
        if(file.is_open())
        {
            string line;
            while(getline(file,line))
            {
                cout<<line<<endl;
            }
            file.close();
        }
        else
        {
            cout<<"File not opened";
        }
    }
};
class Test
{
    public:
    string test_name;
    int test_code;
    int price;
    string department;
    string sample_type;
    void display()
    {
        cout<<"\nEnter the test name :";
        cin.ignore();
        getline(cin,test_name);
        cout<<"\nEnter the test code :";
        cin>>test_code;
        cout<<"\nEnter the test price :";
        cin>>price;
        cout<<"\nEnter the test department :";
        cin.ignore();
        getline(cin,department);
        cout<<"\nEnter the test sample type :";
        cin>>sample_type;
    }
    void test_details()
    {
        ofstream file("test_details",ios::app);
        if(file.is_open())
        {
            file<<"\nTest Name :"<<test_name;
            file<<"\nTest Code :"<<test_code;
            file<<"\nTest Price :"<<price;
            file<<"\nTest Department :"<<department;
            file<<"\nTest Sample Type :"<<sample_type;
            file<<"\n-----------------------------\n";
            file.close();
            cout<<"\nTest details saved successfully";
        }
        else
        {
            cout<<"File not opened";
        }
    }
    void view_test()
    {
        ifstream file("test_details",ios::in);
        if(file.is_open())
        {
            string line;
            while(getline(file,line))
            {
                cout<<line<<endl;
            }
            file.close();
        }
        else
        {
            cout<<"File not opened";
        }
    }
};
int main()
{
    patient p;
    cout << "\n========== Saved Patient Details ==========\n";
    p.view_patient();
    cout << "\n========== Enter New Patient Details ==========\n";
    p.display();
    p.patient_details();
    cout<<"\n---------------------------------------------------";
    Test t;
    cout<<"\n========== Saved Test Details ==========\n";
    t.view_test();
    cout<<"\n===================================================";
    cout<<"\n========== Enter New Test Details ==========\n";
    t.display();
    t.test_details();
    cout<<"\n===================================================";
    cout<<"\n------------------- Thank you -------------------\n";
    return 0;
}
