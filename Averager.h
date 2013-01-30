#ifndef AVERAGER_H
#define AVERAGER_H

#include "AccelerationData.h"

#define SAMPLES_TO_AVERAGE 8

class Averager {

public:
  Averager();
  void reset(void);

  void addMotionData(AccelerationData& accelerationData);
  bool isFull(void);

  AccelerationData& getAverages(void);

private:
  AccelerationData buffer[SAMPLES_TO_AVERAGE];
  unsigned int totalSamplesInBuffer;

  AccelerationData averages;

};
#endif