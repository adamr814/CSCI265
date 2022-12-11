#include <iostream>
#include <unordered_map>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;
void printInfo(unordered_map<int, string>&employeeInfo){
    for(auto item : employeeInfo){
        cout<<item.first<<" "<<item.second<<endl;
    }
    cout<<endl;}

bool addEmployee (std::unordered_map <int, string>&employeeInfo, string employeeName, int date){
    if(employeeInfo.find(date) != NULL){
        return false;}
    else{
        employeeInfo[date] = employeeName;}
        return true;}

string findEmployee (std::unordered_map <int, string>&employeeInfo, int date){
    if(employeeInfo.find(date) != NULL){
        return employeeInfo.at(date);}
    else{return " ";}}

int findDate (unordered_map <int, string> employeeInfo, string employeeName){
    for(auto item : employeeInfo){
        if(item.second == employeeName){
            return item.first;}}
    return -1;}

int totalSignedUp (unordered_map <int, string> employeeInfo){
    int count=0;
    for(auto item : employeeInfo){
        if(item.first != NULL){
            count++;}
    }return count;}

vector<string> employeesByDate (unordered_map <int, string> employeeInfo, int startDate, int endDate){
    vector <string> names;
    for(auto)
}

//vector<string> employees (unordered_map <int, string> employeeInfo)

//void printMonth (string title, unordered_map <int, string> employeeInfo)

int main(){
    string name;
    int date, z;
    bool x;
    string y;
    unordered_map<int, string> employeeInfo;
    employeeInfo[1] = "Beverly";
    employeeInfo[2] = "Kathy";
    employeeInfo[3] = "Radell";
    employeeInfo[4] = "Gary";
    employeeInfo[5] = "Chuck";
    /*cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Date: ";
    cin >> date;
    x = addEmployee(employeeInfo, name, date);
    cout << x << "\n";
    cout << "Enter Date: ";
    cin >> date;
    y = findEmployee(employeeInfo, date);
    cout << y << "\n";
    cout << "Enter Name: ";
    cin >> name;
    z = findDate(employeeInfo, name);
    cout << z << "\n";*/
    z = totalSignedUp(employeeInfo);
    cout<<z<<"\n";

    printInfo(employeeInfo);
}