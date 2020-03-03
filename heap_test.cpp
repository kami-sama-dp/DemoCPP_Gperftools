#include "iostream"
#include "unistd.h"
#include <gperftools/heap-profiler.h>

int* create(unsigned long size){
    return  new int[size];
}

// int main()
// {
//  //   HeapProfilerStart("heap_profile");
//     int count = 10;
//     int *array[count];
//     unsigned int size = 1024 * 1024;
//     for (int i =0;i<count;++i)
//     {   
//         sleep(1);
//         array[i] = create(10*size);
//         int* b = new int[2*size]; 
//     }
//     for(int i =0;i<count;++i)
//     {
//         delete [] array[i];
//     }
//    // HeapProfilerStop();
// }