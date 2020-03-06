#!/bin/bash

build/X86/gem5.opt -r -d results_hw3/"$1" configs/example/se.py --cmd=hw3/"$1" --cpu-type=DerivO3CPU --sys-clock=1GHz --cpu-clock=2GHz --mem-type=DDR3_1600_8x8 --caches --l2cache --l1d_size=64kB --l1i_size=16kB --l2_size=2MB 
