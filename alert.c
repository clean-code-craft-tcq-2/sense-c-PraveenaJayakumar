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

check_and_alert(maxThreshold, alerters, computedStats)
{
  if(s.max > maxThreshold)
  {
    emailAlerter();
    ledAlerter();
  }
  
}

