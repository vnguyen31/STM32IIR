#ifndef FIRSTORDER_IIR_FILTER
#define FIRSTORDER_IIR_FILTER

typedef struct {
	float alpha;
	float output;
} IIRcoefficients;

void IIR1n_Init(IIRcoefficients *filter, float alpha);

float IIR1n_Update(IIRcoefficients *filter, float input);

#endif
