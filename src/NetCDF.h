 /*
 *  NetCDF.h
 *  samurai
 *
 *  Created by Annette Foerster on 8/15/13.
 *  Based on example code from netCDF library
 *  Copyright 2013 Michael Bell. All rights reserved.
 *
 */

#ifndef NETCDF_H
#define NETCDF_H

#include <netcdfcpp.h>
#include <QString>
	 
class NetCDF  
{

public:
	NetCDF();
	~NetCDF();
	
	int readNetCDF(const char* filename);
	bool getValue(const int &i,const int &j,const int &k,const QString &varName, double &value_out);	
	
private:
	int NDIMS, NALT, NRADIUS, NTHETA, NREC, NC_ERR;

    float* radius;
	float* theta;
	float* altitude;	
	float* u;
	float* v;
	float* w;
	float* dudr;
	float* dvdr;
	float* dwdr;
	float* dudt;
	float* dvdt;
	float* dwdt;
	float* dudz;
	float* dvdz;
	float* dwdz;
	float* rhoa;
	float* pibar;
	float* thetarhobar;
	float* vbar;
	float* vp;

	QString varName;
	
};


#endif
