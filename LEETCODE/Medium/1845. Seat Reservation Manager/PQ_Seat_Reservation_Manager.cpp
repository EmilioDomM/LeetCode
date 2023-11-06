/*
    -Priority Queue-
    Nov / 06 / 2023
    1845. Seat Reservation Manager
    ""Design a system that manages the reservation state of n seats that are numbered from 1 to n.""

    Runtime: 344ms  Memory: 142.01mb
*/

class SeatManager {
public:
    priority_queue<int> restaurant;
    int counter = -1;
    
    SeatManager(int n) {
        restaurant.push(-1);
    }
    
    int reserve() {
        if(restaurant.size() < 2){
            counter--;
            restaurant.push(counter);
        }
        cout << restaurant.top() << endl;
        int x = abs(restaurant.top());
        restaurant.pop();
        return x;
    }
    
    void unreserve(int seatNumber) {
        restaurant.push(seatNumber*-1);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */