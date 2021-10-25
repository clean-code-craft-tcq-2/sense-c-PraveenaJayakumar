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

check_and_alert(float maxThreshold_l, alerter_funcptr alerters_l, const float* computedStats_l)
{
  if(computedStats_l.max > maxThreshold_l)
  {
    alerters[0]();
    alerters[1]();  
}

