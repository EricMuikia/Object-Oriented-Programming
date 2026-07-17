//ERICMUIKIA
//Hotel management system(1D,2D,3D arrays)

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int DAYS = 7;
    double revenue[DAYS];

    cout << "---- WEEKLY REVENUE TRACKER ----\n";
    for (int day = 0; day < DAYS; day++) {
        cout << "Enter revenue for day " << (day + 1) << ": ";
        cin >> revenue[day];
      }

      double totalRevenue = 0;
      for (int day = 0; day < DAYS; day++) {
        totalRevenue += revenue[day];
      }
      double averageRevenue = totalRevenue / DAYS;

      cout << fixed << setprecision(2);
      cout << "\nTotal weekly Revenue   : " <<totalRevenue << endl;
      cout << "Average Daily Revenue : " <<averageRevenue << endl;

      
      const int FLOORS = 5;
      const int ROOMS_PER_FLOOR = 10;
      int occupancy[FLOORS][ROOMS_PER_FLOOR];

      cout << "\n----- ROOM OCCUPANCY (ONE BRANCH) ----\n";
      for (int floor = 0; floor < FLOORS; floor++) {
        for (int room = 0; room < ROOMS_PER_FLOOR; room++) {
            occupancy[floor][room] = rand() % 2;
        }
      }

      for (int floor = 0; floor < FLOORS; floor++) {
        int occupied = 0, vacant = 0;
        for (int room = 0; room < ROOMS_PER_FLOOR; room++) {
            if (occupancy[floor][room] == 1)
            occupied++;
            else
                vacant++;
        }
        cout << "Floor " << (floor + 1) << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
      }

      const int BRANCHES = 3;
      int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR];

      cout << "\n----- OCCUPANCY ACROSS ALL BRANCHES -----\n";
      for (int branch = 0; branch < BRANCHES; branch++) {
        for(int floor = 0; floor < FLOORS; floor++) {
            for (int room = 0; room < ROOMS_PER_FLOOR; room++) {
                chain[branch][floor][room] = rand() % 2;
            }
        }  
      }

      int totalOccupiedRooms = 0;
      for (int branch = 0; branch < BRANCHES; branch++) {
        int branchOccupied = 0;
        for (int floor = 0; floor < FLOORS; floor++) {
            for (int room = 0; room < ROOMS_PER_FLOOR; floor++) {
                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    totalOccupiedRooms++;
                }
            }
        }
        cout << "Branch " << (branch + 1) << ": Occupied Rooms = " << branchOccupied << endl;
      }

       
        cout << "\nTotal Occupied Rooms Across All Branches: " << totalOccupiedRooms << endl;
    
    
    return 0;
}
