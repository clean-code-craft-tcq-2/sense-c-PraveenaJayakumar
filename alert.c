#include "stats.h"
#include "alert.h"

void emailAlerter(void)
{
  emailAlertCallCount = 1;
}
void ledAlerter(void)
{
  ledAlertCallCount = 1;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters, const float* computedStats)
{
  if(computedStats.max > maxThreshold)
  {
    alerters[0]();
    alerters[1](); 
  }
}

