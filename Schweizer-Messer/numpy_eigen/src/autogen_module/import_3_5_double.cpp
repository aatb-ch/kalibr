// This file automatically generated by create_export_module.py
#define NO_IMPORT_ARRAY 

#include <NumpyEigenConverter.hpp>

#include <boost/cstdint.hpp>


void import_3_5_double()
{
	NumpyEigenConverter<Eigen::Matrix< double, 3, 5 > >::register_converter();
}
