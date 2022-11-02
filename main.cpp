#include <iostream>
#include <assert.h>
#include "extra-task-1.h"

int main()
{
    // ==== test seconds_difference ====
    assert(fabs(seconds_difference(1800.0, 3600.0) - 1800.0) <= DBL_EPSILON);
    assert(fabs(seconds_difference(3600.0, 1800.0) + 1800.0) <= DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 2160.0) - 360.0) <= DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 1800.0) - 0.0) <= DBL_EPSILON);

    // ==== test hours_difference ====
    assert(fabs(hours_difference(1800.0, 3600.0) - 0.5) <= DBL_EPSILON);
    assert(fabs(hours_difference(3600.0, 1800.0) + 0.5) <= DBL_EPSILON);
    assert(fabs(hours_difference(1800.0, 2160.0) - 0.1) <= DBL_EPSILON);
    assert(fabs(hours_difference(1800.0, 1800.0) - 0.0) <= DBL_EPSILON);

    // ==== test to_float_hours ====
    assert(fabs(to_float_hours(0, 15, 0) - 0.25) <= DBL_EPSILON);
    assert(fabs(to_float_hours(2, 45, 9) - 2.7525) <= DBL_EPSILON);
    assert(fabs(to_float_hours(1, 0, 36) - 1.01) <= DBL_EPSILON);
}