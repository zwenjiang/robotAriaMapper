#include "Sonar.h"


CSonar::CSonar()
{
	//TODO set offset no construtor
	SonarOffsetPosition = {0.0,0.0};
	RelativeAngle = 0.0;
	SonarCone = {15, 0, 3};
}


CSonar::~CSonar()
{
}
