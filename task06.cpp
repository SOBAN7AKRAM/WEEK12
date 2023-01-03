#include <iostream>
using namespace std;
main () {
int bagsize;
int costofbag;
int areacovered;
int costperpound;
float costperarea;
cout << "Enter bag size in pounds:";
cin >> bagsize;
cout << "Enter cost of the bag:";
cin >> costofbag;
cout << "Enter area covered by each bag in square feet:";
cin >> areacovered;
costperpound=costofbag/bagsize;
costperarea=bagsize*areacovered;
cout << "cost of the fertilizer per pound:"<<costperpound<<endl;
cout<< "cost of fertilizing the area per square feet:"<<costperarea;
}