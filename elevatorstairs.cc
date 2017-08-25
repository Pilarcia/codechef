/**Chef has been working in a restaurant which has N floors. 
He wants to minimize the time it takes him to go from the N-th floor 
to ground floor. He can either take the elevator or the stairs.

The stairs are at an angle of 45 degrees and Chef's velocity is V1 m/s 
when taking the stairs down. The elevator on the other hand moves with 
a velocity V2 m/s. Whenever an elevator is called, it always starts from 
ground floor and goes to N-th floor where it collects Chef (collecting 
takes no time), it then makes its way down to the ground floor with Chef 
in it.

The elevator cross a total distance equal to N meters when going from 
N-th floor to ground floor or vice versa, while the length of the stairs 
is sqrt(2) * N because the stairs is at angle 45 degrees.

Chef has enlisted your help to decide whether he should use stairs 
or the elevator to minimize his travel time. Can you help him out?
**/

// Input: N, V1 and V2
// Output: "elevator" or "stairs"
#include<iostream>
#include <math.h>       /* sqrt */

int main()
{
	int T, N, V1, V2; 
	std::cout<<"Introduce number of iterations \n";
		   
	std::cin>>T;
	while ( T != 0 ){
		std::cout<<"Introduce N, V1 and V2 \n";
		std::cin>>N;
		std::cin>>V1;
		std::cin>>V2;

		float elevator_time = ( 2 * N );
		elevator_time = elevator_time / V2;
		std::cout<<"Elevator time is : " << elevator_time  << " \n";
		
		float stairs_time = ( sqrt( 2 ) * N ) / V1;
		std::cout<<"Stairs time is : " << stairs_time << " \n";

		if( stairs_time > elevator_time ){
			std::cout<<"Elevator";
			std::cout<<"\n";		
		}else{
			std::cout<<"Stairs";
			std::cout<<"\n";		
		}
		T = T - 1;
	}
	return 0;
}
