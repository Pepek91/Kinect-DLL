#pragma once
class Camera
{
public:
	Camera(void);
	~Camera(void);
	void getCamera();
	void changeRadius(float val);
	void changeLatitude(float val);
	void changeLongitude(float val);
private:
	float* eye;							//pozycja oka 
	float* center;						//na co oko patrzy
	float* up;							//wektor w gor� dla kamery
	float latitude;							//szeroko�� geograficzna dla kamery
	float longitude;						//d�ugo�� geograficzna dla kamery
	float radius;
};

