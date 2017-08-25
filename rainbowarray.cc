#include <iostream>
// #include <iso646>

void
print_array( int* array, int size ){
	std::cout << "Checking of following array is a rainbow one...\n";
	for( int k = 0; k < size; k++ ){
		std::cout << array[ k ] << " " ;
	}	
	std::cout << "\n";
}

int
check_sequence( int* array, int size )
{
	int mid = size/2;	
	for( int i = 0; i <= mid; i++ ){
		if(( array[ i ] == array[ i - 1 ] ) or 
		   ( array[ i ] == array[ i - 1] + 1 )){
		}else{
			return 0;
		}
		if( size%2 == 0 ){
			if(( array[ mid ] == 7 ) and
			   ( array[ mid - 1 ] == 7 )){
				return 1;
			}else{
				return 0;
			}
		}else{ // Check if middle value is 7
			if( array[ mid ] == 7){
				return 1;
			}else{
				return 0;
			}
		}
	}
}
	
int
check_if_rainbow( int* array, int size ){
	for( int k = 0; k < size/2; k++ ){
		std::cout << array[ k ] << " " <<  k << " "  << array[ ( size - 1 ) - k ] << "\n";
		if( array[ k ] != array[ ( size - 1 ) - k ]) return -1;
	}	
	return check_sequence( array, size );
}
 

int main(){
	
	int i;
	int T; 			// number of Test cases
	std::cout << "First, introduce number of test cases ";
	std::cin >> T;
	
	std::cout << "Introduce number of element in the array: ";
	std::cin >> i;

	while( T != 0 ){
		int array[ i ];
		int aux;
		
		for( int k = 0; k < i; k++ ){
			std::cin >> aux;
			array[ k ] = aux;
		}
		print_array( array, i );
		if( check_if_rainbow( array, i ) < 0 ){
			std::cout << "False\n";
		}else{
			std::cout << "True\n";
		}
		T = T-1;
	}
	
	return 0;	
}
	
