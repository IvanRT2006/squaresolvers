#include <stdio.h>
#include "utils.h"
#include "TxLib.h"
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool CompareEqual(double a, double b)
{
    if (fabs(a - b) < EPS)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CompareMore(double a, double b)
{
    if ((a - b) > EPS)
    {
        return true;
    }
    else
    {
        return false;
    }
}
