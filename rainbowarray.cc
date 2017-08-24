#include <iostream>

void
print_array( int* array, int size ){
	std::cout << "Checking of following array is a rainbow one...\n";
	for( int k = 0; k < size; k++ ){
		std::cout << array[ k ] << " " ;
	}	
	std::cout << "\n";
}

// int
// seqCheck(int* A, int n)
// {
//     for(int i=0; i<=n/2; i++)
//         if((A[i] == A[i-1]) || (A[i] == A[i-1]+1));
//         else
//             return 0;
    
//     int mid = n/2;
    
//     if(n%2 == 0)
//         if((A[mid] == 7) && (A[mid-1] == 7))
//             return 1;
//         else
//             return 0;
//     else
//         if(A[mid] == 7)
//             return 1;
//         else
//             return 0;
// }

int
check_if_rainbow( int* array, int size ){
	for( int k = 0; k < size/2; k++ ){
		std::cout << array[ k ] << " " <<  k << " "  << array[ ( size - 1 ) - k ] << "\n";
		if( array[ k ] != array[ ( size - 1 ) - k ]) return -1;
	}	
	// return seqCheck( array, size );
	return 0; 	
}
// Three inputs.
// T: number of test cases 1<= T <=100
// N: number of elements in the given array 7<=N<=100
// i: elements of the array1 <= Ai <=10 
// Output: yes or not
int main(){
	
	int i;
	std::cout << "Introduce number of element in the array: ";
	std::cin >> i;
	
	int array[ i ];
	int aux;
	for( int k = 0; k < i; k++ ){
		std::cin >> aux;
		array[ k ] = aux;
		// std::cout << "Element " << k << " is " << array[ k ] << "\n";
	}
	print_array( array, i );
	if( check_if_rainbow( array, i ) < 0 ){
		std::cout << "False\n";
	}else{
		std::cout << "True\n";
	};
	
	return 0;	
}
