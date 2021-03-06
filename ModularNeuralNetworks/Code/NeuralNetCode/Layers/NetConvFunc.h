#pragma once

#define CL_USE_DEPRECATED_OPENCL_1_2_APIS

#include "../NetBaseFunc.h"
#include "CL/cl.hpp"
#include "../NetComponents.h"

#include <vector>

namespace Net 
{
	namespace ConvFunc
	{
		void FeedForward(LayerData& current_layer, LayerData& next_layer);
		void Backprop(LayerData& current_layer, LayerData& next_layer, const float eta, const float momentum);
		void CalcGradient(LayerData& current_layer, LayerData& next_layer);//TODO: Can we add CalcGradient to UpdateWeights on cpu?
		void UpdateWeights(LayerData& current_layer, LayerData& next_layer, const float eta, const float momentum);

		void FeedForwardCpp(LayerData& current_layer, LayerData& next_layer);
		void FeedForwardCL(LayerData& current_layer, LayerData& next_layer);
		void UpdateWeightsCL(LayerData& current_layer, LayerData& next_layer, const float eta, const float momentum);
		void CalcGradientCL(LayerData& current_layer, LayerData& next_layer);
	}
}