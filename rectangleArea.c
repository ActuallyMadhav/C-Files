#include <stdio.h>

int main(){

    double l, w, area;

    printf("Enter length and width: \n");
    scanf("%lf %lf", &l, &w);

    area = l * w;

    printf("The area of the rectangle is: %lf", area);

    return 0;
}



// ************************* C++ ****************************************

// #include <iostream>

// int main(){

//     double l, w, area;

//     using namespace std;

//     cout << "Enter length and width: \n";
//     cin >> l >> w;

//     area = l * w;

//     cout << "Area of rectangle: " << area;

//     return 0;
// }