#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = numberset[0];
    s.max = numberset[0];
    float sum = 0.0;
    
    if(numberset = = NULL && setlength == NULL)
    {
        s.average = NaN;
    }
    else
    {
    for(int i = 0;i<setlength;i++)
    {
        if(s.min > numberset[i])
        {
            s.min = numberset[i];
        }
        if(s.max < numberset[i])
        {
            s.max = numberset[i];
        }
        sum += numberset[i];
    }
    s.average = sum / setlength;
    }
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
