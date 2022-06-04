#ifndef DATE_H
#define DATE_H

struct date {
    int month;
    int day;
    int year;
};

int compare_dates(struct date d1, struct date d2);

void print_date(struct date aDate);

#endif
