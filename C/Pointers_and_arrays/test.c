float A[6][8]; // an array  
float *pf;  // float pointer 
pf=&A[0][0]; // pf pomts the firts element of the array 
*(pf+8)=2.8   
*(pf+8) = 2.3;



 float  linearA[30];
 float *A[6];


// linearA  has memory and address   and blow these line is just example They want to create rows of various lengths 

 float  linearA[30];
 float *A[6];
 
 A[0] = linearA;              /*  5 - 0 = 5 elements in row  */
 A[1] = linearA + 5;          /* 11 - 5 = 6 elements in row  */
 A[2] = linearA + 11;         /* 15 - 11 = 4 elements in row */
 A[3] = linearA + 15;         /* 21 - 15 = 6 elements        */
 A[4] = linearA + 21;         /* 25 - 21 = 4 elements        */
 A[5] = linearA + 25;         /* 30 - 25 = 5 elements        */
 
 *A[3][2] = 3.66;          /* assigns 3.66 to linearA[17];     */
 *A[3][-3] = 1.44;         /* refers to linearA[12];           
                             negative indices are sometimes useful. But avoid using them as much as possible. */



