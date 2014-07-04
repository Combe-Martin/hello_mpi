hello_mpi
=========

hello world with mpi


download (clone)
=====

git clone https://github.com/Combe-Martin/hello_mpi.git

building
=====

* default

```Bash
mkdir build
cd build
cmake ../
make 
```

* debug version: 

```Bash
mkdir debug
cd debug
cmake -DCMAKE_BUILD_TYPE=Debug ../
make
```

* release version:

```Bash
mkdir release
cd release
cmake -DCMAKE_BUILD_TYPE=Release ../
make
```

execute
=====

mpirun -np 4 ./hello_mpi
