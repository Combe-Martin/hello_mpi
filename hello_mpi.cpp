#include <iostream>
#include <string>
using namespace std ;

#include "mpi.h"

int main(int argc,char **argv)
{
   MPI_Init(&argc,&argv);

   int world_rank,world_size ;
   string world_name ;

   MPI_Comm_rank(MPI_COMM_WORLD,&world_rank);
   MPI_Comm_size(MPI_COMM_WORLD,&world_size);

   {
      int name_lengh ;
      char name[MPI_MAX_PROCESSOR_NAME];
      MPI_Get_processor_name(name,&name_lengh);
      world_name = name ;
   }
 
   cout << "Hello: " << world_rank << " amongst: " << world_size << " on: " << world_name  << endl;

   return MPI_Finalize() ;
}
