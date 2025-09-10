#include<iostream>
#include<string>

using namespace std;

struct Contactperson{
    string name;
    string sex;
    int age;
    string phone;
    string address;
};

void DrawTable(){
    cout << "o-----------------------------------------------o" <<endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|\tAddressBook Management System V1.0\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|"<<" "<<" "<<" "<<" "<< " " << "Please choose the option you wanna do.\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|\t\t1. AddContactPerson\t\t|" << endl;
    cout << "|\t\t2. ShowContactPerson\t\t|" << endl;
    cout << "|\t\t3. DeleteContactPerson\t\t|" << endl;
    cout << "|\t\t4. FindContactPerson\t\t|" << endl;
    cout << "|\t\t5. ModifyContactPerson\t\t|" << endl;
    cout << "|\t\t6. ClearContactPerson\t\t|" << endl;
    cout << "|\t\t7. ExitAddressBook\t\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "o-----------------------------------------------o" <<endl;
}

void AddContatctPerson(Contactperson *s,int num){
    cout << "Input the info of new contact person: " << endl;
    cout << "name: ";
    cin >> s[num].name;
    cout << "sex: ";
    cin >> s[num].sex;
    cout << "age: ";
    cin >> s[num].age;
    cout << "phone: ";
    cin >> s[num].phone;
    cout << "address: ";
    cin >> s[num].address;
    cout << "ADD NEW CONTATCT PERSON SUCCESSFULLY!" << endl;;
}

void ShowContactPerson(const Contactperson *cp, const int num){
    cout << "The current AddressBook Contact Person is: " << endl;
    for(auto i = 0;i<num;i++)
    {
        cout << "PersonID: " << i << endl;  
        cout << "Name: " << cp[i].name << endl;
        cout << "Sex: " << cp[i].sex << endl;
        cout << "Age: " << cp[i].age << endl;
        cout << "Phone: " << cp[i].phone << endl;
        cout << "Address: "<< cp[i].address << endl;
        cout << "--------------------------------------" << endl;
    }
}


void FindContactPerson(const Contactperson *s, const int num){
    cout << "Input the name of contact person you wanna find: ";
    string name;
    cin >> name;
    for(auto i = 0; i<num; i++)
    {
        if(s[i].name == name)
        {
            cout << "The Information of Person you find is: " << endl;  
            cout << "Name: " << s[i].name << endl;
            cout << "Sex: " << s[i].sex << endl;
            cout << "Age: " << s[i].age << endl;
            cout << "Phone: " << s[i].phone << endl;
            cout << "Address: "<< s[i].address << endl;
            cout << "--------------------------------------" << endl;
        }
    }
}

void DeleteContactPerson(Contactperson *s, int num){
    cout << "Input the name of contact person you wanna delete: ";
    string name;
    cin >> name;
    for(auto i = 0; i<num; i++)
    {
        if(s[i].name == name)
        {
            s[i].name = "";
            s[i].sex = "";
            s[i].age = 0;
            s[i].phone = "";
            s[i].address = "";
            cout << "DELETE CONTACT PERSON SUCCESSUFULLY!" << endl;
        }
    }
}


void ModifyContactPerson(Contactperson *s, int num){
    cout << "Input the name of contact person you wanna modify: ";
    string name;
    cin >> name;
    for(auto i = 0; i<num; i++)
    {
        if(s[i].name == name)
        {
            cout << "-----------------" << endl;
            cout << "1、Name: " << endl;
            cout << "2、Sex: " << endl;
            cout << "3、Age: " << endl;
            cout << "4、Phone: "  << endl;
            cout << "5、Address: " << endl;
            cout << "-----------------" << endl;
            cout << "The Information of Person you want to modify is: ";
            int choice;
            cin >> choice;
            switch (choice)
            {
                case 1:
                    cin >> s[i].name;
                    break;
                case 2:
                    cin >> s[i].sex;
                    break;
                case 3:
                    cin >> s[i].age;
                    break;
                case 4:
                    cin >> s[i].phone;
                    break;
                case 5:
                    cin >> s[i].address;
                    break;
            }
            cout << "MODIFY INFORMATION SUCCESSFULLY!"<<endl;
        }
    }
}

void ClearContactPerson(Contactperson *s, int num){
    for(auto i =0; i < num; i++)
    {
        s[i].name = "";
        s[i].address = "";
        s[i].age = 0;
        s[i].phone = "";
        s[i].address = "";
    }
    cout << "ADDRESSBOOK CLEARS SUCCESSFULLY!"<<endl;
}


int main(){
    DrawTable();
    Contactperson CP[1000]; //通讯录，上限1000人
    int num = 0; //记录通讯录已有的人数
    cout << "input the operation number: " << endl;
    int k;
    cin >> k;
    while(k!=7)
    {
        switch(k)
        {
            case 1:
                AddContatctPerson(CP,num);
                num++;
                break;
            case 2:
                ShowContactPerson(CP, num);
                break;
            case 3:
                DeleteContactPerson(CP, num);
                num--;
                break;
            case 4:
                FindContactPerson(CP, num);
                break;
            case 5:
                ModifyContactPerson(CP, num);
                break;
            case 6: 
                ClearContactPerson(CP, num);
                num = 0;
                break;
        }
        cout << "The next operation you wanna do is: " << endl;
        cin >> k;
    }
    system("pause");
    return 0;
}