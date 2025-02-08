set top top
set src_file hw.cpp
set test_file test.cpp
open_project -reset proj

add_files $src_file -cflags "-I ."
#add_files -tb $test_file -cflags "-I ."
set_top $top

open_solution -reset solution1
set_part virtex7
create_clock -period "300MHz"
csynth_design
#cosim_design