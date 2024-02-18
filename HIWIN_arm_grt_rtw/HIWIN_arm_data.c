/*
 * HIWIN_arm_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "HIWIN_arm".
 *
 * Model version              : 4.59
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Tue May 16 20:35:24 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HIWIN_arm.h"

/* Block parameters (default storage) */
P_HIWIN_arm_T HIWIN_arm_P = {
  /* Variable: Kt1
   * Referenced by: '<S3>/Kt'
   */
  0.524,

  /* Variable: Kt2
   * Referenced by: '<S4>/Torque_const_Kt'
   */
  0.524,

  /* Variable: Kt3
   * Referenced by: '<S5>/Kt'
   */
  0.476,

  /* Variable: Kt4
   * Referenced by: '<S6>/Kt'
   */
  0.424,

  /* Variable: Kt5
   * Referenced by: '<S7>/Torque_const_Kt'
   */
  0.246,

  /* Variable: Kt6
   * Referenced by: '<S8>/Kt'
   */
  0.246,

  /* Mask Parameter: Kv_I
   * Referenced by: '<S87>/Integral Gain'
   */
  118.274932378856,

  /* Mask Parameter: Kv_I_k
   * Referenced by: '<S185>/Integral Gain'
   */
  97.1931773311546,

  /* Mask Parameter: Kv_I_j
   * Referenced by: '<S283>/Integral Gain'
   */
  125.311873193367,

  /* Mask Parameter: Kv_I_d
   * Referenced by: '<S381>/Integral Gain'
   */
  107.694728820868,

  /* Mask Parameter: Kv_I_c
   * Referenced by: '<S479>/Integral Gain'
   */
  141.862383720105,

  /* Mask Parameter: Kv_I_l
   * Referenced by: '<S577>/Integral Gain'
   */
  151.095812250567,

  /* Mask Parameter: Kv_InitialConditionForIntegrato
   * Referenced by: '<S90>/Integrator'
   */
  0.0,

  /* Mask Parameter: Kv_InitialConditionForIntegra_a
   * Referenced by: '<S188>/Integrator'
   */
  0.0,

  /* Mask Parameter: Kv_InitialConditionForIntegra_o
   * Referenced by: '<S286>/Integrator'
   */
  0.0,

  /* Mask Parameter: Kv_InitialConditionForIntegra_j
   * Referenced by: '<S384>/Integrator'
   */
  0.0,

  /* Mask Parameter: Kv_InitialConditionForIntegr_oa
   * Referenced by: '<S482>/Integrator'
   */
  0.0,

  /* Mask Parameter: Kv_InitialConditionForIntegra_d
   * Referenced by: '<S580>/Integrator'
   */
  0.0,

  /* Mask Parameter: Kp_P
   * Referenced by: '<S47>/Proportional Gain'
   */
  80.2055451888304,

  /* Mask Parameter: Kv_P
   * Referenced by: '<S88>/Proportional Gain'
   */
  616.548992522347,

  /* Mask Parameter: Kp_P_k
   * Referenced by: '<S145>/Proportional Gain'
   */
  69.3379543977804,

  /* Mask Parameter: Kv_P_c
   * Referenced by: '<S186>/Proportional Gain'
   */
  705.566561922296,

  /* Mask Parameter: Kp_P_l
   * Referenced by: '<S243>/Proportional Gain'
   */
  86.7193824271727,

  /* Mask Parameter: Kv_P_g
   * Referenced by: '<S284>/Proportional Gain'
   */
  223.180008027707,

  /* Mask Parameter: Kp_P_n
   * Referenced by: '<S341>/Proportional Gain'
   */
  73.0021625203534,

  /* Mask Parameter: Kv_P_a
   * Referenced by: '<S382>/Proportional Gain'
   */
  109.852894160334,

  /* Mask Parameter: Kp_P_li
   * Referenced by: '<S439>/Proportional Gain'
   */
  93.2213006687449,

  /* Mask Parameter: Kv_P_o
   * Referenced by: '<S480>/Proportional Gain'
   */
  47.8284953974644,

  /* Mask Parameter: Kp_P_m
   * Referenced by: '<S537>/Proportional Gain'
   */
  92.74685480639,

  /* Mask Parameter: Kv_P_m
   * Referenced by: '<S578>/Proportional Gain'
   */
  21.6698338640267,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S3>/Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S5>/Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S5>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S6>/Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S7>/Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S7>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S8>/Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S8>/Gain'
   */
  1.0,

  /* Computed Parameter: TransferFcn1_A
   * Referenced by: '<S3>/Transfer Fcn1'
   */
  -16.135724261832056,

  /* Computed Parameter: TransferFcn1_C
   * Referenced by: '<S3>/Transfer Fcn1'
   */
  0.41831762690083524,

  /* Computed Parameter: TransferFcn1_A_l
   * Referenced by: '<S4>/Transfer Fcn1'
   */
  -9.3990603166566586,

  /* Computed Parameter: TransferFcn1_C_p
   * Referenced by: '<S4>/Transfer Fcn1'
   */
  0.32880676026699107,

  /* Computed Parameter: TransferFcn1_A_f
   * Referenced by: '<S5>/Transfer Fcn1'
   */
  -15.289692638149509,

  /* Computed Parameter: TransferFcn1_C_g
   * Referenced by: '<S5>/Transfer Fcn1'
   */
  1.3947157011514772,

  /* Computed Parameter: TransferFcn1_A_i
   * Referenced by: '<S6>/Transfer Fcn1'
   */
  -14.692314032698169,

  /* Computed Parameter: TransferFcn1_C_e
   * Referenced by: '<S6>/Transfer Fcn1'
   */
  2.641979377290216,

  /* Computed Parameter: TransferFcn1_A_a
   * Referenced by: '<S7>/Transfer Fcn1'
   */
  -22.33417643034516,

  /* Computed Parameter: TransferFcn1_C_o
   * Referenced by: '<S7>/Transfer Fcn1'
   */
  13.064381270903009,

  /* Computed Parameter: TransferFcn1_A_n
   * Referenced by: '<S8>/Transfer Fcn1'
   */
  -30.001740093270065,

  /* Computed Parameter: TransferFcn1_C_gm
   * Referenced by: '<S8>/Transfer Fcn1'
   */
  27.285129604365618
};
