#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = numberset[0];
    s.max = numberset[0];
    float sum = 0.0;
    
    if(numberset == NULL || setlength == 0 || numberset == 0)
    {
        s.average = NAN;
        s.min     = NAN;
        s.max     = NAN;
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


