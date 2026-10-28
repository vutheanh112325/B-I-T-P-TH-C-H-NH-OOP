#include <iostream>
using namespace std;
class Vehicle{
    private:
        int vehicleID;
        string vehicleType;
        int entryTime;//Giờ vào//
        int parkingDuration;//Thời gian đã đỗ//
        double parkingFee;//Phí đỗ//
        bool isOccupied;//Trả về True/false, nếu là True là đã có xe ở vị trí đó//
    public:
        Vehicle(){
            vehicleID = 0;
            vehicleType = "";
            entryTime = 0;
            parkingDuration = 0;
            parkingFee = 0;
            isOccupied = False;
        }
        Vehicle(int id, string type, int time, int duration, double fee, bool occupied){
            vehicleID = id;
            vehicleType = type;
            entryTime = time;
            parkingDuration = duration;
            parkingFee = fee;
            isOccupied = occupied;
        }
        //Getters//
        int getVehicleID(){
            return vehicleID;
        }
        string getVehicleType(){
            return vehicleID;
        }
        int getEntryTime(){
            return entryTime;
        }
        int getParkingDuration(){
            return parkingDuration;
        }
        double getParkingFee(){
            return parkingFee;
        }
        bool getIsOccupied(){
            return isOccupied;
        }
        //Setters//
        void setVehicleID(int id){
            vehicleID = id;
        }
        void setVehicleType(string type) {
            vehicleType = type;
        }
        void setEntryTime(int time) {
            entryTime = time;
        }
        void setParkingDuration(int duration) {
            parkingDuration = duration;
        }
        void setParkingFee(double fee) {
            parkingFee = fee;
        }
        void setIsOccupied(bool occupied) {
            isOccupied = occupied;
        }
        void calculateFee();
        void display();
}

class ParkingLot{
    private:
        int parkID;
        char size;
        Vehicle vehicle1, vehicle2, vehicle3;
        bool hasVehicle1, hasVehicle2, hasVehicle3;
    public:
    ParkingLot(){
        parkID = 0;
        size = "";
        hasVehicle1 = False;
        hasVehicle2 = False;
        hasVehicle3 = False;
    }
    ParkingLot(int id, char s){
        parkID = id;
        size = s;
        hasVehicle1 = False;
        hasVehicle2 = False;
        hasVehicle3 = False;
    }

    bool addVehicle(const Vehicle &v){
        if (!ttVehicle1) {
            vehicle1 = v;
            hasVehicle1 = true;
            return true;
        }
         if (size == 'M' || size == 'L') {
            if (!hasVehicle2) {
                vehicle2 = v;
                hasVehicle2 = true;
                return true;
            }
        }

        if (size == 'L') {
            if (!hasVehicle3) {
                vehicle3 = v;
                hasVehicle3 = true;
                return true;
            }
        }
        return false;
    }
    bool removeVehicle(int vID);
    void displayLotInfo();
}
int main() {

}
