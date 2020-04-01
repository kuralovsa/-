#include <iostream> 
 
using namespace std; 
 
class Unit 
{ 
protected: 
       int health; 
public: 
       void setHealth(int a) { health = a; } 
       void showHealth(){ cout << "Unit health: " << health << endl; }; 
       Unit(): health(10) { } 
       Unit(int a): health(a) { } 
}; 
 
class Soldier : virtual public Unit 
{ 
protected: 
       int damage; 
       int speed; 
public: 
       void showDamage() { cout << "Sodier damage: " << damage << endl; } 
       void showSpeed() { cout << "Soldier speed: " << speed << endl; } 
       Soldier():damage(200), speed(3) { }                               
}; 
 
class Horse : virtual public Unit 
{ 
protected: 
       int speed; 
public: 
       void showSpeed(){cout << "Horse speed: " << speed << endl;} 
       Horse():speed(200) { }                              
}; 
 
class Horseman : public Horse, public Soldier 
{ 
private: 
       int speed; 
public: 
       void showSpeed(){cout << "Horseman speed: " << speed << endl;} 
       Horseman():speed(5){} 
}; 
 
int main() 
{ 
      Horseman lancelot; 
      lancelot.showHealth(); 
      lancelot.showDamage(); 
      lancelot.showSpeed();      
      return 0; 
} 
