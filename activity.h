// =================================================================
// 
// File: activity.h
// Author: José Diego Llaca Castro
// Date: 25/08/22
// Functionality: This header contains a set of three functions 
// which calculate the sum from 1 to n with different methods such 
// as iterative, recursive and direct.
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	This function has a complexity of O(n) since the 
// most complex part of it is the while loop.
//
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int count = 1;
	int sum = 0;
	while(count <= n){
		sum = sum + count;
		count++;
	}
	return sum;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	This function has a complexity of O(n) because it 
// calls itself only one time without using divisions or 
// multiplications.
//
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
    if (n <= 1){
        return 1;
    }
    else{
        return n + sumaRecursiva(n - 1);
    }
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	This function has a complexity of O(1) because the 
// most complex part of it is the simple sentence which has a 
// complexity of O(1).
//
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int sum;
	sum = (n * (n + 1)) / 2;
	return sum;
}

#endif /* ACTIVITY_H */
