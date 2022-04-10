//NOTE: This is still in W.I.P. So yeah i think this will take probably 2 years.
#include <iostream>
#include<string>
using namespace std;

int main() {

    string zero;
    string thing1;
    string Enter;

    cout << "You have to use 4 of these items: " << endl;
    cout << "Stuff: Eggs, Muffin, Milk, Water, and Flour. Materials: Bowl. MIX THESE TOGETHER and become STOOPID or EPIC. Type Cook Book for Recipes. " << endl;
    cout << "What are your INGREDIENTS?:" << endl;
    getline(std::cin, zero);
  
   if (zero == "Cook Book") {
        cout << "Using: Level 0 Cook Book. *piano music* Make the most JUICY DELICOUS SWEET TASTIC Muffin, make My muffin -Steve Jobs. here are the INGREDIENTS: Bowl Eggs Muffin Milk." << endl;
     getline(std::cin, zero);
     }
  if(zero<=zero){
    cout << "Invalid Ingredients try again: " << endl;
    getline(std::cin, zero);
  }

  
    if (zero == "Bowl Eggs Muffin Milk") {
        cout << "You Made the classic dish called: WAT DA HELL?" << endl;
    }
  }
    if (thing1 == "Bowl Water Muffin Milk") {
        cout << "You Made the classic dish called: Soggy Muffin..." << endl;
    }
    if (thing1 == "Bowl Flour Muffin Milk") {
        cout << "You Made the classic dish called: MEGA Muffin" << endl;
    }
    if (thing1 == "Bowl Muffin Muffin Milk") {
        cout << "You made the EPIC dish called: Muffin Cereal" << endl;
    }
    if (thing1 == "Bowl Milk Muffin Milk") {
        cout << "You made the EPIC dish called: tiny Muffin Cereal" << endl;
    }
    if (thing1 == "Bowl Eggs Eggs Milk") {
        cout << "You Made the STOOPID dish called: INTRODUCING EGG CEREAL" << endl;
    }
    if (thing1 == "Bowl Eggs Water Milk") {
        cout << "You Made the classic dish called: SOGGY EGG CEREAL" << endl;
    }
    if (thing1 == "Bowl Eggs Flour Milk") {
        cout << "You Made the classic dish called: POWDERY EGG CEREAL" << endl;
    }
    if (thing1 == "Bowl Eggs Muffin Water") {
        cout << "You Made the classic dish called: JUICY EGG MUFFIN" << endl;
    }
    if (thing1 == "Bowl Eggs Muffin Flour") {
        cout << "You Made the classic dish called: POWDERY EGG MUFFIN" << endl;
    }
    if (thing1 == "Bowl Eggs Eggs Eggs") {
        cout << "You Made the EPIC dish called: GODLY EGG OF POWER" << endl;
    }
    if (thing1 == "Bowl Muffin Muffin Muffin") {
        cout << "You Made the EPIC dish called: GODLY MUFFIN OF MUFFINS" << endl;
    }
    if (thing1 == "Bowl Flour Flour Flour") {
        cout << "You Made the EPIC dish called: Explodes in Flour" << endl;
      }
    if (thing1 == "Bowl Muffin Eggs Milk") {
        cout << "You Made the STOOPID dish called: EGG FLAVORED MUFFIN CEREAL" << endl;
    }


}
