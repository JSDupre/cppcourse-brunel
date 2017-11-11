The objective of this project is to implement the network of neuron described in Brunel's paper"Dynamics of Sparsely connected networks of excitatory and inhibitory spiking neurons"

You first need to set the wanted values to the constants in the ./src/Constants.hpp file

Then you need to build the project using the 'cmake .' then 'make' command in ./build

Then you can run either the unit tests using './unittest' command or the Neuron simulation using the './Neurone' command in ./build

You can produce some graphs (according to the script specified in ./src/graphScript.py) to analyze the obtained data written in ./build/spikes.gdf by using the command 'python src/graphScript.py' in the project root directory 

note: please note that a documentation for the code is available after running doxygen ('make doc' command in ./build) in ./doc/html/index.html

