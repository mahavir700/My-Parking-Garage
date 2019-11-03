#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <random>


using namespace std;

class Ticket {
    
public:
    
    void set_ticket(int durationHrs, int durationMin) {
        
        if(durationMin != 0) {
            durationHrs++;
        }
        
        if(durationHrs <= 3) {
            price = 4;
        }
        
        if(durationHrs > 3 && durationHrs <= 9) {
            price = 4 + (durationHrs - 3);
        }
        
        if(durationHrs > 9) {
            price = 10;
        }
        
    }
    
    int get_ticket() const {
        return price;
    }
    
private:
    
    int price;
    
};
