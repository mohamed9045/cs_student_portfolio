#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    int age;
    static int count;

public:
    person() : name("unknown"), age(0) {
        count++;
    }

    person(string n, int a) : name(n), age(a) {
        count++;
    }

    virtual ~person() {
        count--;
    }

    static int getcount() {
        return count;
    }

    void setname(string n){
        name = n; }

    void setage(int a){
        age = a; }

    string getname() {
        return name; }

    int getage(){
        return age; }

    virtual void display() {
        cout << "Name: " << name << " | Age: " << age << endl;
    }
};

int person::count = 0;


class student : public person {
protected:
    string major;

public:
    student() : person() {
        major = "undeclared";
    }

    student(string n, int a, string m) : person(n, a) {
        major = m;
    }

    void setmajor(string m) {
         major = m; }

    string getmajor() {
        return major; }

    void display() override {
        cout << "Name: " << name << " | Age: " << age << " | Major: " << major << endl;
    }
};


class graduatestudent : public student {
private:
    string title;

public:
    graduatestudent() : student() {
        title = "untitled";
    }

    graduatestudent(string n, int a, string m, string t) : student(n, a, m) {
        title = t;
    }

    void settitle(string t) {
         title = t; }

    string gettitle() {
      return title; }

    void display() override {
        cout << "Name: " << name << " | Age: " << age << " | Major: " << major << " | Research: " << title << endl;
    }
};


int main() {

    graduatestudent g1;
    g1.setname("Omar");
    g1.setage(22);
    g1.setmajor("Engineering");
    g1.settitle("Robotics Project");

    cout << "Student 1 Details:" << endl;
    g1.display();


    graduatestudent g2("Ali", 23, "Computer Science", "AI in Healthcare");

    cout << "Student 2 Details:" << endl;
    g2.display();

    cout << "Total Active Objects: " << person::getcount() << endl;

    return 0;
}
