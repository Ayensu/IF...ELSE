#include <iostream>

using namespace std;
/*A c++ PRORAM TO SHOW THE GRADING SYSTEM USING THE IF... ELSE */
int main()
{
    int num,id;
    cout << "ENTER YOUR INDEX NUMBER" << endl;
    cin>>id;
    cout<<"ENTER YOUR SCORE"<<endl;
    cin>> num;
    if(num<=100 && num>=80){
        cout<<"your grade is =A(EXCELLENT)"<<endl;
    }
     else if(num<=79 && num>=70){
        cout<<"your grade is =B(VERY GOOD)"<<endl;
    }
     else if(num<=69 && num>=60){
        cout<<"your grade is =C(GOOD)"<<endl;
    }
     else if(num<=59 && num>=50){
        cout<<"your grade is =D(CREDIT)"<<endl;
    }
    else if(num<=49 && num>=40){
        cout<<"your grade is =E(AVERAGE)"<<endl;
    }
    else if(num<=39 && num>=0){
        cout<<"your grade is =F(FAIL)"<<endl;
    }


    else
        cout<<"you have no records"<<endl;
    return 0;
}
