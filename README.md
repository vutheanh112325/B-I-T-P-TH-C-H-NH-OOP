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
        void display(){
            cout << "Ma xe: " << vehicleID << endl;
            cout << "Loai xe: " << vehicleType << endl;
            cout << "Thoi gian vao: " << entryTime << endl;
            cout << "Thoi gian do: " << parkingDuration << "gio" << endl;
            cout << "Phi do: " << parkingFee << "VND" << endl;
            cout << "Trang thai: ";
            if(isOccupied){
                cout << "Cho da duoc su dung" << endl;
            }
            else{
                cout << "Cho con trong" << endl;
            }
        }
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
        size = 'S';
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
        if(!hasVehicle1){
            vehicle1 = v;
            hasVehicle1 = true;
            return true;
        }
        if(size == 'M' || size == 'L'){
            if(!hasVehicle2){
                vehicle2 = v;
                hasVehicle2 = true;
                return true;
            }
        }
        if(size == 'L'){
            if(!hasVehicle3){
                vehicle3 = v;
                hasVehicle3 = true;
                return true;
            }
        }
        return false;
    }
    bool removeVehicle(int vID){
        if(hasVehicle1 && vehicle1.getVehicleID() == vID){
            hasVehicle1 = false;
            return true;//báo xóa thành công và kết thúc hàm//
        }
        if(hasVehicle2 && vehicle2.getVehicleID() == vTD){
            hasVehicle2 = false;
            return true;
        }
        if(hasVehicle3 && vehicle3.getVehicleID() == vTD){
            hasVehicle3 = false;
            return true;
        }
        return false;
    }
    void displayLotInfo(){
        cout << "Ma bai do xe: " << parkID << endl;
        cout << "Kich thuoc bai: " << size << endl;
        if(hasVehicle1){
            cout << "Thong tin xe o bai do thu 1: " << endl;
            vehicle1.display();
        }
        if(hasVehicle2){
            cout << "Thong tin xe o bai do thu 2: " << endl;
            vehicle2.display();
        }
        if(hasVehicle3){
            cout << "Thong tin xe o bai do thu 3: " << endl;
            vehicle3.display();
        }
        if(!hasVehicle1 && !hasVehicle2 && !hasVehicle3){
            cout << "Bai do con trong!" << endl;
        }
    }
}
int main() {

}
