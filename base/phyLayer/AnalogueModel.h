#ifndef ANALOGUEMODEL_
#define ANALOGUEMODEL_

#include "Signal_.h"

/**
 * Interface for the analogue models of the physical layer.
 * 
 * An analogue model is a filter responsible for changing
 * the attenuation value of a Signal to simulate things like
 * shadowing, fading, pathloss or obstacles.
 */
class AnalogueModel {
	
public:
	virtual ~AnalogueModel() {}
	
	/**
	 * @brief Has to be overriden by every implementation.
	 * 
	 * Filters a specified Signal by adding an attenuation
	 * over time to the Signal.
	 */
	virtual void filterSignal(Signal& s) = 0;
};

#endif /*ANALOGUEMODEL_*/
