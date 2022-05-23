#ifndef STATS_H
#define STATS_H

struct Stats compute_statistics(const float* numberset, int setlength);
//structure for Stats
struct Stats{
  float average, min , max;
};

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
extern void emailAlerter(void);
extern void ledAlerter(void);

#endif
