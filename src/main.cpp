#include <iostream>
#include <fstream>
#include "Network.hpp"
#include <string>
using namespace std;

/** \brief read the entry (a double expected) on the terminal
 */
double AskUserADouble();

/** \brief use system() to draw the graph (call python on the scriptfile graphScript.py) 
 * note: was usefull for the testing phase, removed from the final main: the user will have to call the script himself
 * also system() is a very dangerous thing not really advised
 */
void printTheGraphDirectly();


/** \brief main function of the program
 * create a Network and run a simulation on it during a certain time asked to the user, then write wich neuron spiked at wich time
 * in a "spikes.gdf" file
 */
int main() {
			//simulation
		cout<<"enter simulation time? (ms) ("<<TimeIncrement<<" time increment)"<<endl;
		double Tstop(AskUserADouble());
		int clock(0);
		
		Network network (TOTAL_NUMBER_OF_NEURONES,EXITATORY_PROPORTION,ProbabilityOfConnection,ProbabilityOfConnection,clock);
		cerr<<"build network finished"<<endl;
		network.runSimulation(Tstop);
		cerr<<"simulation finished"<<endl;
			//writing simulation result for latter analisys
		network.writeSpikesDataFile("spikes.gdf");
		cerr<<"writing data file finished"<<endl;
		
		return 0;
	}

double AskUserADouble() {
	double result;
	cin>>result;
	if(cin.fail()){throw;}
	return result;
	}

void printTheGraphDirectly(){
		string s("python graphScript.py");
		const char* cstr = s.c_str();
		int i(system(cstr));
	}
