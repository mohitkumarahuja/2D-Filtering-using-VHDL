# 2D-Filtering-using-VHDL
The goal is to process the input data flow (corresponding to lena image) using a 2D filter. Two main tasks are expected:

1. The design and the validation of a customizable 2D filter (filter IP) 

2. The implementation on a Nexys4 evaluation board of the 2D filter. 

The filter IP implementation should be included in a reference design (furnished by teacher) to ease the integration. The filter IP could be split into two main parts: the memory cache which aims to be temporarily stored the data flow before filtering and the processing part. The cache memory designed for simultaneous pixel accesses enables a 3x3 pixel neighbourhood to be accessible in one clock cycle. The structure is based on flip-flop registers and First-In-First-Out (FIFO) memory.

The processing part is in charge of filtering to be performed. The nine pixels extracted at each cycle in the memory cache are used in a pipelined architecture (to be designed). A stage of multipliers has to be included to perform more complex filtering. The filter coefficients must be tuneable (configuration mode to be done using evaluation board switches).

We proposed different filter's:

a) Average (blur effect) using the following coefficients [111101111] and then [111111111].
b) A Sobel filter (horizontal and vertical filter to be tested)
c) Gaussian filter
