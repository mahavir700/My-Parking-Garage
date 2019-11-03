#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <random>


using namespace std;

class Car {
    
private:
    // for the car
    string maker;
    string num;
    string model;
    string color;
    
    //for the time
    string enteringTime;
    string exitTime;
    string duration;
    string timeInc;
    
    //for the enter time
    int h;
    int m;
    
    //for time increament
    int time_hrs_inc;
    int time_min_inc;
    int time_sec_inc;
    
    //for the exit time
    double total_seconds;
    int hour;
    int minute;
    int second;
    int totalHrs;
    int totalmin;
    int totalsec;
    int totalHrsTemp;
    int totalMinTemp;
    
    //for the duration
    double total_sec;
    int durationHrs;
    int durationMin;
    int durationSec;
    
    //for the tickets
    int charge;
    
public:
    
    void setCarMaker(string carMaker) {
        maker = carMaker;
    }
    
    string getCarMaker() const {
        return maker;
    }
    
    void setCarNum(string carNum) {
        num = carNum;
    }
    
    string getCarNum() const {
        return num;
    }
    
    void setCarModel(string carModel) {
        model = carModel;
    }
    
    string getCarModel() const {
        return model;
    }
    
    void setCarColor(string carColor) {
        color = carColor;
    }
    
    string getCarColor() const {
        return color;
    }
    
    void setEnterTime(int hour, int minute) {
        enteringTime = to_string(hour) + ":" + to_string(minute);
    }
    
    string getEnterTime() const {
        return enteringTime;
    }
    
    void setDurationHour(double ran) {
        
        if (ran < 0) {
            ran = -1*ran;
        }
        
        total_sec = ran*60*60;
        
        durationHrs = total_sec/(60*60);
        durationMin = (total_sec - (durationHrs*60*60))/60;
        
    }
    
    int getDurationHour() const {
        return durationHrs;
    }
    
    void setDurationMin(double ran) {
        
        if (ran < 0) {
            ran = -1*ran;
        }
        
        total_sec = ran*60*60;
        
        durationHrs = total_sec/(60*60);
        durationMin = (total_sec - (durationHrs*60*60))/60;
 
    }
    
    int getDurationMin() const {
        return durationMin;
    }
    
    string getDuration() const {
        return duration;
    }
    
    void setTimeInc(int tm_hrs, int tm_min) {
        
        tm_min = tm_min + 30;
        
        if (tm_min >= 60) {
            tm_min = tm_min - 60;
            tm_hrs++;
        }
        
        if (tm_hrs >= 24) {
            tm_hrs = tm_hrs - 24;
        }
        
        timeInc = to_string(tm_hrs) + ":" + to_string(tm_min);
     
    }
    
    string getTimeInc() const {
        return timeInc;
    }
    
    void setEnterHour(int hour) {
        h = hour;
    }
    
    int getEnterHour() const {
        return h;
    }
    
    void setEnterMin(int minute) {
        m = minute;
    }
    
    int getEnterMin() const {
        return m;
    }
    
    void setExitHour(double random, int tm_hrs, int tm_min) {
        
        if (random < 0) {
            random = -1*random;
        }
        
        total_seconds = random*60*60;
        
        hour = total_seconds/(60*60);
        minute = (total_seconds - (hour*60*60))/60;
        
        totalHrs = hour + tm_hrs;
        totalmin = minute + tm_min;
        totalHrsTemp = totalHrs;
        
        if(totalmin >= 60) {
            totalmin = totalmin - 60;
            totalHrs++;
        }
        
        if(totalHrs >= 24) {
            totalHrs = totalHrs - 24;
        }
        
    }
    
    int getExitHour() const {
        return totalHrs;
    }
    
    
    void setExitMin(double random, int tm_hrs, int tm_min) {
    
    if (random < 0) {
        random = -1*random;
    }
    
    total_seconds = random*60*60;
    
    hour = total_seconds/(60*60);
    minute = (total_seconds - (hour*60*60))/60;
    
    totalHrs = hour + tm_hrs;
    totalmin = minute + tm_min;
    totalMinTemp = totalmin;
    
    if(totalmin >= 60) {
        totalmin = totalmin - 60;
        totalHrs++;
    }
    
    if(totalHrs >= 24) {
        totalHrs = totalHrs - 24;
    }

    }
    
    int getExitMin() const {
        return totalmin;
    }
    
    void setTicket(int price) {
        charge = price;
    }
    
    int getTicket() const {
        return charge;
    }
    
    int getTotalExitHours() const {
        return totalHrsTemp;
    }
    
    int getTotalExitMin() const {
        return totalMinTemp;
    }
};


