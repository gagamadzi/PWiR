#include <iostream>
#include <omp.h>
#include <unistd.h>
using namespace std;

int main(){
    #pragma omp parallel num_threads(4)
    {
        int ID = omp_get_thread_num();
        cout << "Hello World" << ID << endl;
    }
    usleep(1000000); 
}