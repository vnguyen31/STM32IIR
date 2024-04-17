#include "IIR1storder.h"

//function to initialize data for IIR filter
void IIR1n_Init(IIRcoefficients *filter, float alpha){
	if (alpha <= 0.0f){
		filter->alpha = 0.0f;
	}
	else if (alpha > 1.0f){
		filter->alpha = 1.0f;
	}
	else{
		filter->alpha = alpha;
	}

	filter->output = 0.0f;
}

//function to update the input to the IIR filter
float IIR1n_Update(IIRcoefficients *filter, float input){
	filter->output = ((1.0f - filter->alpha) * input) + (filter->alpha * filter->output);
	//return filter output
	return filter->output;
}
