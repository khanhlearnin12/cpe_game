#include <bits/stdc++.h>
using namespace std;

#define  


int main(){
    int start_x_pos, start_y_pos;
    cin >> start_x_pos >> start_y_pos;
    string map[start_x_pos][start_y_pos];
    while(1){
        string robot_motion = "";
        int cur_x_pos , cur_y_pos;
        map[cur_x_pos][cur_y_pos];
        char orient ;
        cin >> cur_x_pos >> cur_y_pos >> orient;
        while (getline(cin , robot_motion))
        {
            switch (robot_montion)
            {
            case 'R':
            	return     
            case 'L':
              return  
            case 'F':
                
            default:
                break;
            }
        }
         
    }
}

/*
idea 
failing is not that bad, so just failure in the systax, without ai 
input map_dimention as start_x_pos start_y_pos
map[start_x_pos][start_y_pos];
while 1:
    input player robot posistion as cur_x_pos cur_y_pos orientation(N S E W)
   string robot_movement; 
    for orientation in range( N S E W ):
        if orientation == N: 
            return  map[cur_x_pos][cur_y_pos + 1]
        if orientation == N: 
            return  map[cur_x_pos+1][cur_y_pos]
        if orientation == N: 
            return  map[cur_x_pos][cur_y_pos - 1]    
        if orientation == N: 
            return  map[cur_x_pos-1][cur_y_pos]
 	
    in put all the process of the robotmovement by using getline: 
    if (robotmovement == F):
      go to the font 
    if (robotmovement == R):
      go to right 
    if(robotmovement == L):
      go to left 
  if robotmovement go out of each edge 
    return cur_x_pos cur_y_pos orientation LOST 
  else 
    return cur_x_pos cur_y_pos orientation 

*/
