/*  GIMP header image file format (INDEXED): /media/Datos/backup_local/Desarrollo/Arduino Projects/Proyectos/Nyan_Cat_VGA/Imagenes/Cuadro2.h  */

static unsigned int width = 80;
static unsigned int height = 60;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = header_data_cmap[(unsigned char)data[0]][0]; \
pixel[1] = header_data_cmap[(unsigned char)data[0]][1]; \
pixel[2] = header_data_cmap[(unsigned char)data[0]][2]; \
data ++; }

static char header_data_cmap[256][3] = {
	{  0,  0,  0},
	{  0,  0, 85},
	{  0,  0,170},
	{  0,  0,255},
	{  0, 36,  0},
	{  0, 36, 85},
	{  0, 36,170},
	{  0, 36,255},
	{  0, 72,  0},
	{  0, 72, 85},
	{  0, 72,170},
	{  0, 72,255},
	{  0,109,  0},
	{  0,109, 85},
	{  0,109,170},
	{  0,109,255},
	{  0,145,  0},
	{  0,145, 85},
	{  0,145,170},
	{  0,145,255},
	{  0,182,  0},
	{  0,182, 85},
	{  0,182,170},
	{  0,182,255},
	{  0,218,  0},
	{  0,218, 85},
	{  0,218,170},
	{  0,218,255},
	{  0,255,  0},
	{  0,255, 85},
	{  0,255,170},
	{  0,255,255},
	{ 36,  0,  0},
	{ 36,  0, 85},
	{ 36,  0,170},
	{ 36,  0,255},
	{ 36, 36,  0},
	{ 36, 36, 85},
	{ 36, 36,170},
	{ 36, 36,255},
	{ 36, 72,  0},
	{ 36, 72, 85},
	{ 36, 72,170},
	{ 36, 72,255},
	{ 36,109,  0},
	{ 36,109, 85},
	{ 36,109,170},
	{ 36,109,255},
	{ 36,145,  0},
	{ 36,145, 85},
	{ 36,145,170},
	{ 36,145,255},
	{ 36,182,  0},
	{ 36,182, 85},
	{ 36,182,170},
	{ 36,182,255},
	{ 36,218,  0},
	{ 36,218, 85},
	{ 36,218,170},
	{ 36,218,255},
	{ 36,255,  0},
	{ 36,255, 85},
	{ 36,255,170},
	{ 36,255,255},
	{ 72,  0,  0},
	{ 72,  0, 85},
	{ 72,  0,170},
	{ 72,  0,255},
	{ 72, 36,  0},
	{ 72, 36, 85},
	{ 72, 36,170},
	{ 72, 36,255},
	{ 72, 72,  0},
	{ 72, 72, 85},
	{ 72, 72,170},
	{ 72, 72,255},
	{ 72,109,  0},
	{ 72,109, 85},
	{ 72,109,170},
	{ 72,109,255},
	{ 72,145,  0},
	{ 72,145, 85},
	{ 72,145,170},
	{ 72,145,255},
	{ 72,182,  0},
	{ 72,182, 85},
	{ 72,182,170},
	{ 72,182,255},
	{ 72,218,  0},
	{ 72,218, 85},
	{ 72,218,170},
	{ 72,218,255},
	{ 72,255,  0},
	{ 72,255, 85},
	{ 72,255,170},
	{ 72,255,255},
	{109,  0,  0},
	{109,  0, 85},
	{109,  0,170},
	{109,  0,255},
	{109, 36,  0},
	{109, 36, 85},
	{109, 36,170},
	{109, 36,255},
	{109, 72,  0},
	{109, 72, 85},
	{109, 72,170},
	{109, 72,255},
	{109,109,  0},
	{109,109, 85},
	{109,109,170},
	{109,109,255},
	{109,145,  0},
	{109,145, 85},
	{109,145,170},
	{109,145,255},
	{109,182,  0},
	{109,182, 85},
	{109,182,170},
	{109,182,255},
	{109,218,  0},
	{109,218, 85},
	{109,218,170},
	{109,218,255},
	{109,255,  0},
	{109,255, 85},
	{109,255,170},
	{109,255,255},
	{145,  0,  0},
	{145,  0, 85},
	{145,  0,170},
	{145,  0,255},
	{145, 36,  0},
	{145, 36, 85},
	{145, 36,170},
	{145, 36,255},
	{145, 72,  0},
	{145, 72, 85},
	{145, 72,170},
	{145, 72,255},
	{145,109,  0},
	{145,109, 85},
	{145,109,170},
	{145,109,255},
	{145,145,  0},
	{145,145, 85},
	{145,145,170},
	{145,145,255},
	{145,182,  0},
	{145,182, 85},
	{145,182,170},
	{145,182,255},
	{145,218,  0},
	{145,218, 85},
	{145,218,170},
	{145,218,255},
	{145,255,  0},
	{145,255, 85},
	{145,255,170},
	{145,255,255},
	{182,  0,  0},
	{182,  0, 85},
	{182,  0,170},
	{182,  0,255},
	{182, 36,  0},
	{182, 36, 85},
	{182, 36,170},
	{182, 36,255},
	{182, 72,  0},
	{182, 72, 85},
	{182, 72,170},
	{182, 72,255},
	{182,109,  0},
	{182,109, 85},
	{182,109,170},
	{182,109,255},
	{182,145,  0},
	{182,145, 85},
	{182,145,170},
	{182,145,255},
	{182,182,  0},
	{182,182, 85},
	{182,182,170},
	{182,182,255},
	{182,218,  0},
	{182,218, 85},
	{182,218,170},
	{182,218,255},
	{182,255,  0},
	{182,255, 85},
	{182,255,170},
	{182,255,255},
	{218,  0,  0},
	{218,  0, 85},
	{218,  0,170},
	{218,  0,255},
	{218, 36,  0},
	{218, 36, 85},
	{218, 36,170},
	{218, 36,255},
	{218, 72,  0},
	{218, 72, 85},
	{218, 72,170},
	{218, 72,255},
	{218,109,  0},
	{218,109, 85},
	{218,109,170},
	{218,109,255},
	{218,145,  0},
	{218,145, 85},
	{218,145,170},
	{218,145,255},
	{218,182,  0},
	{218,182, 85},
	{218,182,170},
	{218,182,255},
	{218,218,  0},
	{218,218, 85},
	{218,218,170},
	{218,218,255},
	{218,255,  0},
	{218,255, 85},
	{218,255,170},
	{218,255,255},
	{255,  0,  0},
	{255,  0, 85},
	{255,  0,170},
	{255,  0,255},
	{255, 36,  0},
	{255, 36, 85},
	{255, 36,170},
	{255, 36,255},
	{255, 72,  0},
	{255, 72, 85},
	{255, 72,170},
	{255, 72,255},
	{255,109,  0},
	{255,109, 85},
	{255,109,170},
	{255,109,255},
	{255,145,  0},
	{255,145, 85},
	{255,145,170},
	{255,145,255},
	{255,182,  0},
	{255,182, 85},
	{255,182,170},
	{255,182,255},
	{255,218,  0},
	{255,218, 85},
	{255,218,170},
	{255,218,255},
	{255,255,  0},
	{255,255, 85},
	{255,255,170},
	{255,255,255}
	};
static char header_data[] = {
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,223,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,223,223,5,223,223,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,223,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,223,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,223,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,223,
	5,5,5,223,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,223,5,
	5,5,5,5,223,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,223,
	5,5,5,223,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,223,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	223,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	223,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,223,223,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	223,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	223,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,232,232,232,232,232,232,232,232,
	5,5,5,5,5,5,5,5,232,232,232,232,232,232,232,0,
	250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,
	250,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,
	232,232,232,232,232,232,232,232,232,232,232,232,232,232,0,250,
	250,250,247,247,247,247,247,247,247,247,247,247,247,247,247,250,
	250,250,0,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,
	232,232,232,232,232,232,232,232,232,232,232,232,232,232,0,250,
	250,247,247,247,247,247,247,238,247,247,238,247,247,247,247,247,
	250,250,0,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	232,232,232,232,232,232,232,232,244,244,244,244,244,244,244,244,
	232,232,232,232,232,232,232,232,244,244,244,244,244,244,0,250,
	247,247,238,247,247,247,247,247,247,247,247,247,247,247,247,247,
	247,250,0,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	244,244,244,244,244,244,244,244,244,244,244,244,244,244,244,244,
	244,244,244,244,244,244,244,244,244,244,244,244,244,244,0,250,
	247,247,247,247,247,247,247,247,247,247,247,0,0,247,238,247,
	247,250,0,5,5,0,0,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	244,244,244,244,244,244,244,244,244,244,244,244,244,244,244,244,
	244,244,244,244,244,244,244,244,244,244,244,244,244,244,0,250,
	247,247,247,247,247,247,247,247,247,247,0,182,182,0,247,247,
	247,250,0,5,0,182,182,0,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	244,244,244,244,244,244,244,244,248,248,248,248,248,248,248,248,
	244,244,244,244,244,244,244,244,248,248,248,248,248,248,0,250,
	247,247,247,247,247,247,238,247,247,247,0,182,182,182,0,247,
	247,250,0,0,182,182,182,0,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,
	248,248,248,248,248,248,248,248,248,0,0,248,248,248,0,250,
	247,247,247,247,247,247,247,247,247,247,0,182,182,182,182,0,
	0,0,0,182,182,182,182,0,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,
	248,248,248,248,248,248,248,248,0,182,182,0,248,248,0,250,
	247,247,247,238,247,247,247,247,247,247,0,182,182,182,182,182,
	182,182,182,182,182,182,182,0,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	248,248,248,248,248,248,248,248,88,88,88,88,88,88,88,88,
	248,248,248,248,248,248,248,248,0,182,182,0,0,0,0,250,
	247,247,247,247,247,247,247,238,247,0,182,182,182,182,182,182,
	182,182,182,182,182,182,182,182,0,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,
	88,88,88,88,88,88,88,88,88,0,182,182,182,182,0,250,
	247,238,247,247,247,247,247,247,247,0,182,182,182,255,0,182,
	182,182,182,182,255,0,182,182,0,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,
	88,88,88,88,88,88,88,88,88,88,0,0,182,182,0,250,
	247,247,247,247,247,247,247,247,247,0,182,182,182,0,0,182,
	182,182,0,182,0,0,182,182,0,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	88,88,88,88,88,88,88,88,19,19,19,19,19,19,19,19,
	88,88,88,88,88,88,88,88,19,19,19,19,0,0,0,250,
	247,247,247,247,247,238,247,247,247,0,182,246,246,182,182,182,
	182,182,182,182,182,182,246,246,0,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,
	19,19,19,19,19,19,19,19,19,19,19,19,19,19,0,250,
	250,247,238,247,247,247,247,247,247,0,182,246,246,182,0,182,
	182,0,182,182,0,182,246,246,0,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,
	19,19,19,19,19,19,19,19,19,19,19,19,19,19,0,250,
	250,250,247,247,247,247,247,247,247,247,0,182,182,182,0,0,
	0,0,0,0,0,182,182,0,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	19,19,19,19,19,19,19,19,143,143,143,143,143,143,143,143,
	19,19,19,19,19,19,19,19,143,143,143,143,143,143,0,0,
	250,250,250,250,250,250,250,250,250,250,250,0,182,182,182,182,
	182,182,182,182,182,182,0,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	143,143,143,143,143,143,143,143,143,143,143,143,143,143,143,143,
	143,143,143,143,143,143,143,143,143,143,143,143,143,0,182,182,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	143,143,143,143,143,143,143,143,143,143,143,143,143,143,143,143,
	143,143,143,143,143,143,143,143,143,143,143,143,143,0,182,182,
	0,5,0,182,182,0,5,5,5,5,5,5,0,182,182,0,
	5,0,182,182,0,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	143,143,143,143,143,143,143,143,5,5,223,5,5,5,5,5,
	143,143,143,143,143,143,143,143,5,5,5,5,5,0,0,0,
	5,5,5,0,0,0,5,5,5,5,5,5,5,0,0,0,
	5,5,0,0,0,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,223,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,223,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,223,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	223,223,5,223,5,223,223,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,223,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,223,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
	};
