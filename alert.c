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

check_and_alert(float maxThreshold, alerter_funcptr alerters, const float* computedStats)
{
  if(computedStats.max > maxThreshold_l)
  {
    alerters_1[0]();
    alerters_1[1](); 
  }
}

