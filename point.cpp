#include <iostream>

using namespace std;

int add(int* a, int* b){
    int n1 = *a; //Gan gia tri cua dia chi con tro vao n1
    int n2 = *b;
    int n3;
    return n3= n1+n2;
}

int main(){
    int n0 = 16;
    int* pInt = &n0;
    cout<<n0<<"\n";    //Gia tri cua bien n0
    cout<<&n0<<"\n";   //Gia tri dia chi cua n0
    cout<<pInt<<"\n";  //Gia tri cua dia chi con tro  -> dia chi cua n0
    cout<<*pInt<<"\n"; //Gia tri cua bien con tro 

    *pInt = 10; // thay doi gia tri cua con tro dong thoi se thay doi luon gia tri cua bien n0
    cout<<n0<<"\n"; 
  
    int x =10;
    int y =5;
    int* pX = &x;
    int* pY = &y;
    cout<<add(pX,pY)<<"\n"; //Tham so la dia chi con tro tro den bien x y 

    // Cap phat bo nho con tro

    float* pFloat = new float;
    *pFloat = 1.0;
    cout <<*pFloat<<"\n";
    cout <<pFloat<<"\n";

    delete pFloat;


    return 0;
}