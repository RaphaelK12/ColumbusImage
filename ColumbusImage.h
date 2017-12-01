#pragma once

#ifndef __cplusplus
typedef enum { false = 0, true = !false } bool;
#endif

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		unsigned int w; //Image width
		unsigned int h; //Image height
		unsigned int bpp; //Bytes per pixel: 3, 4
		unsigned char* data; //Image pixel data
	} ClmbsImg_Data;

	bool ClmbsImg_IsBMP(const char* file); //Check file format, if BMP, returns true
	bool ClmbsImg_IsTGA(const char* file); //Check file format, if TGA, returns true

	ClmbsImg_Data ClmbsImg_LoadBMP(const char* file); //Load BMP image WITHOUT check
	ClmbsImg_Data ClmbsImg_LoadTGA(const char* file); //Load TGA image WITHOUT check
	ClmbsImg_Data ClmbsImg_Load(const char* file); //Check and load all supported iamge formats

#ifdef __cplusplus
}
#endif







