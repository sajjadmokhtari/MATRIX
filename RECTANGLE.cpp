#include <iostream>
using namespace std;

struct rectangle 
{
    int length;
    int width;
    int A;
    int P;
};


rectangle  REC;

void rectangleArea(rectangle &REC){

    REC.A = REC.length * REC.width;       
    REC.P = 2 * (REC.length + REC.width); 

    for (int i = 0; i < REC.width ; i++){
        cout<<"*\t";
    }
    
    for (int i = 0; i < REC.length; i++){

        cout<<"\n*";
        for (int j = 0; j < REC.width-1; j++) 
        {
            cout<<"\t";
        }
        cout<<"*"<<endl;
    }

    for (int n = 0; n < REC.width ; n++){
        cout<<"*\t";
    }
   
}


int main() {
     

    cout <<"طول را وارد کنید";
    cin >> REC.length;
    cout << "عرض را وارد  کنید";
    cin >> REC.width;

    rectangleArea(REC);

    cout << "\n محیط برابر با: " << REC.A << endl;
    cout << "\n مساحت برابر با: " << REC.A << endl;

    return 0;
}