# ACA-Cache-Simulator-description
The c-sim is the cache simulator incorporating "Write Trough" and "Write Back" protocols along with LRU and FIFO. The program needs to be run with the command line arguments as follows:
c-sim.c 4096 direct 32 LRU wt sim.txt
where 4096 is cache size in power of 2
direct/asso is mapping technique
32 is cache-block-size in power of 2
LRU/FIFO is replacement policy
wt/wb is protocol to be followed
sim.txt is the input trace file used
