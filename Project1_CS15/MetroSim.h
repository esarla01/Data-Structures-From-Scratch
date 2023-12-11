/*
 *
 */

#ifndef _METROSIM_H_
#define _METROSIM_H_

#include "Passenger.h"
#include "PassengerQueue.h"
#include "Train.h"

// Put any other necessary includes here


// Put any other structs you need here

class MetroSim
{
public:

MetroSim();

void initialize_station(std::ifstream &input);

void move_train(std::ostream &output);

void command_loop(std::istream &input, std::ostream &output);

private:

int n_passenger;

Train train;



};

#endif