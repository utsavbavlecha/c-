#include <iostream>
using namespace std;

int main(){
    int no1 ;
    int no2 ;
    int no3 ;

    cout <<" \n min value 1 " ;
    cin >> no1 ;

    cout << " \n min value 2 ";
    cin >> no2 ;

    cout << " \n min value 3 ";
    cin >> no3 ;

    int min = (no1 < no2) ? (no1 < no3 ? no1 : no3) : (no2 < no3 ? no2 : no3 );
    cout << " \n the minimum value .is : " << min ;


    cout << "\n "

}