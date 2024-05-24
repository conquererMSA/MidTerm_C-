#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    string name;
    char section;
    int marks;
    Student(int id, string name, char section, int marks){
        this->id=id;
        this->name=name;
        this->section=section;
        this->marks=marks;
    }
};

int main(){
    int sakibId, sakibMarks;
    string sakibName;
    char sakibSection;

    int rakibId, rakibMarks;
    string rakibName;
    char rakibSection;

    int akibId, akibMarks;
    string akibName;
    char akibSection;
    //get sakib info
    cin>>sakibId>>sakibName>>sakibSection>>sakibMarks;
    //get rakib
    cin>>rakibId>>rakibName>>rakibSection>>rakibMarks;
    //get akib info
    cin>>akibId>>akibName>>akibSection>>akibMarks;
    //assign sakib value
    // Student* sakib=new Student(sakibId, sakibName, sakibSection, sakibMarks);
    // //assign rakib value
    // Student* rakib=new Student(rakibId, rakibName, rakibSection, rakibMarks);
    // //assign akib value
    // Student* akib=new Student(akibId, akibName, akibSection, akibMarks);
    
    if(sakibMarks>rakibMarks&&sakibMarks>akibMarks){
        cout<<sakibId<<" "<<sakibName<<" "<<sakibSection<<" "<<sakibMarks<<endl;
    }else if(rakibMarks>sakibMarks&&rakibMarks>akibMarks){
       cout<<rakibId<<" "<<rakibName<<" "<<rakibSection<<" "<<rakibMarks<<endl;
    }else if(sakibMarks==rakibMarks&&sakibId<rakibId){
        cout<<sakibId<<" "<<sakibName<<" "<<sakibSection<<" "<<sakibMarks<<endl;
    }else if(sakibMarks==akibMarks&&sakibId<akibId){
        cout<<sakibId<<" "<<sakibName<<" "<<sakibSection<<" "<<sakibMarks<<endl;
    }else if(rakibMarks==sakibMarks&&sakibId<rakibId){
        cout<<sakibId<<" "<<sakibName<<" "<<sakibSection<<" "<<sakibMarks<<endl;
    }else if(sakibMarks==akibMarks&&sakibId<akibId){
        cout<<sakibId<<" "<<sakibName<<" "<<sakibSection<<" "<<sakibMarks<<endl;
    }








    // cout<<sakibId<<" "<<sakibName<<" "<<sakibSection<<" "<<sakibMarks<<endl;
    // cout<<rakibId<<" "<<rakibName<<" "<<rakibSection<<" "<<rakibMarks<<endl;
    // cout<<akibId<<" "<<akibName<<" "<<akibSection<<" "<<akibMarks<<endl;
   

    return 0;
}