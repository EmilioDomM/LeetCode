/*
    -Vector-
    Nov / 06 / 2023
    1845. Seat Reservation Manager
    ""Design a system that manages the reservation state of n seats that are numbered from 1 to n.""

    Runtime: 1676ms  Memory: 142.25ms
*/

class SeatManager {
public:
    vector<int> restaurant;
    int counter = 1;
    
    SeatManager(int n) {
        restaurant.push_back(1);
    }
    
    int reserve() {
        if(restaurant.size() < 2){
            counter++;
            restaurant.push_back(counter);
        }
        
        int x = restaurant[0];
        restaurant.erase(restaurant.begin());
        return x;
    }
    
    void unreserve(int seatNumber) {
        restaurant.push_back(seatNumber);
        sort(restaurant.begin(), restaurant.end());
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */