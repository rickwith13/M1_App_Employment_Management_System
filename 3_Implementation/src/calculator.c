#include "calculatorhead.h"

// Function for Calculating Salary Per Month
int Sal_Cal(int n_d_a, int s_p_d)
{
  int s_p_m;
  if (n_d_a > 26)
  {
    return 0;
  }
  s_p_m = (n_d_a * s_p_d);

  return s_p_m;
}

// Function for Calculating Graduity
int Grat_Cal(long int d_m_s, int n_y)
{
  int w_d, g_r;

  w_d = (d_m_s / 26);
  //printf(" Working Days: %d ", w_d);

  g_r = (w_d * n_y);
  return g_r;
}

//Function for calculating Tax
int Tax_Cal(long int s_p_m)
{
  int t_a_x;

  long int l = 42000;
  if (s_p_m < l)
  {
    return 0;
  }
  t_a_x = (12.0 / 100.0) * s_p_m;

  return t_a_x;
}

// Function for Calculating PF
float pf_Cal(long int s_p_m)
{
  float p_f;
  double b = 5.0 / 100.0;

  p_f = b * s_p_m;

  return p_f;
}