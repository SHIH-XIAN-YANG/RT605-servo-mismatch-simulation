/*
 * HIWIN_arm.h
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

#ifndef RTW_HEADER_HIWIN_arm_h_
#define RTW_HEADER_HIWIN_arm_h_
#ifndef HIWIN_arm_COMMON_INCLUDES_
#define HIWIN_arm_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* HIWIN_arm_COMMON_INCLUDES_ */

#include "HIWIN_arm_types.h"
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T theta;                        /* '<S3>/Transfer Fcn1' */
  real_T IntegralGain;                 /* '<S87>/Integral Gain' */
  real_T Sum4;                         /* '<S3>/Sum4' */
  real_T thetadot;                     /* '<S4>/Transfer Fcn1' */
  real_T IntegralGain_l;               /* '<S185>/Integral Gain' */
  real_T Sum4_p;                       /* '<S4>/Sum4' */
  real_T thetadot_k;                   /* '<S5>/Transfer Fcn1' */
  real_T IntegralGain_o;               /* '<S283>/Integral Gain' */
  real_T Sum4_o;                       /* '<S5>/Sum4' */
  real_T theta_a;                      /* '<S6>/Transfer Fcn1' */
  real_T IntegralGain_j;               /* '<S381>/Integral Gain' */
  real_T Sum4_g;                       /* '<S6>/Sum4' */
  real_T thetadot_c;                   /* '<S7>/Transfer Fcn1' */
  real_T IntegralGain_i;               /* '<S479>/Integral Gain' */
  real_T Sum4_oh;                      /* '<S7>/Sum4' */
  real_T thetadot_ko;                  /* '<S8>/Transfer Fcn1' */
  real_T IntegralGain_o2;              /* '<S577>/Integral Gain' */
  real_T Sum4_k;                       /* '<S8>/Sum4' */
} B_HIWIN_arm_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<S3>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK_j;             /* '<S4>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK_e;             /* '<S5>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK_p;             /* '<S6>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK_pi;            /* '<S7>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK_i;             /* '<S8>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } q1_c_PWORK;                        /* '<Root>/q1_c' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } q2_c_PWORK;                        /* '<Root>/q2_c' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } q3_c_PWORK;                        /* '<Root>/q3_c' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } q4_c_PWORK;                        /* '<Root>/q4_c' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } q5_c_PWORK;                        /* '<Root>/q5_c' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } q6_c_PWORK;                        /* '<Root>/q6_c' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<S3>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK_e;             /* '<S4>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK_h;             /* '<S5>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK_k;             /* '<S6>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK_o;             /* '<S7>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK_b;             /* '<S8>/From Workspace' */

  struct {
    int_T PrevIndex;
  } q1_c_IWORK;                        /* '<Root>/q1_c' */

  struct {
    int_T PrevIndex;
  } q2_c_IWORK;                        /* '<Root>/q2_c' */

  struct {
    int_T PrevIndex;
  } q3_c_IWORK;                        /* '<Root>/q3_c' */

  struct {
    int_T PrevIndex;
  } q4_c_IWORK;                        /* '<Root>/q4_c' */

  struct {
    int_T PrevIndex;
  } q5_c_IWORK;                        /* '<Root>/q5_c' */

  struct {
    int_T PrevIndex;
  } q6_c_IWORK;                        /* '<Root>/q6_c' */
} DW_HIWIN_arm_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S3>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S4>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S5>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S6>/Integrator' */
  real_T Integrator_CSTATE_d;          /* '<S7>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S8>/Integrator' */
  real_T TransferFcn1_CSTATE;          /* '<S3>/Transfer Fcn1' */
  real_T Integrator_CSTATE_n;          /* '<S90>/Integrator' */
  real_T TransferFcn1_CSTATE_f;        /* '<S4>/Transfer Fcn1' */
  real_T Integrator_CSTATE_md;         /* '<S188>/Integrator' */
  real_T TransferFcn1_CSTATE_d;        /* '<S5>/Transfer Fcn1' */
  real_T Integrator_CSTATE_nu;         /* '<S286>/Integrator' */
  real_T TransferFcn1_CSTATE_a;        /* '<S6>/Transfer Fcn1' */
  real_T Integrator_CSTATE_f;          /* '<S384>/Integrator' */
  real_T TransferFcn1_CSTATE_n;        /* '<S7>/Transfer Fcn1' */
  real_T Integrator_CSTATE_k;          /* '<S482>/Integrator' */
  real_T TransferFcn1_CSTATE_dg;       /* '<S8>/Transfer Fcn1' */
  real_T Integrator_CSTATE_h;          /* '<S580>/Integrator' */
} X_HIWIN_arm_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S3>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S4>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S5>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S6>/Integrator' */
  real_T Integrator_CSTATE_d;          /* '<S7>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S8>/Integrator' */
  real_T TransferFcn1_CSTATE;          /* '<S3>/Transfer Fcn1' */
  real_T Integrator_CSTATE_n;          /* '<S90>/Integrator' */
  real_T TransferFcn1_CSTATE_f;        /* '<S4>/Transfer Fcn1' */
  real_T Integrator_CSTATE_md;         /* '<S188>/Integrator' */
  real_T TransferFcn1_CSTATE_d;        /* '<S5>/Transfer Fcn1' */
  real_T Integrator_CSTATE_nu;         /* '<S286>/Integrator' */
  real_T TransferFcn1_CSTATE_a;        /* '<S6>/Transfer Fcn1' */
  real_T Integrator_CSTATE_f;          /* '<S384>/Integrator' */
  real_T TransferFcn1_CSTATE_n;        /* '<S7>/Transfer Fcn1' */
  real_T Integrator_CSTATE_k;          /* '<S482>/Integrator' */
  real_T TransferFcn1_CSTATE_dg;       /* '<S8>/Transfer Fcn1' */
  real_T Integrator_CSTATE_h;          /* '<S580>/Integrator' */
} XDot_HIWIN_arm_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S3>/Integrator' */
  boolean_T Integrator_CSTATE_m;       /* '<S4>/Integrator' */
  boolean_T Integrator_CSTATE_g;       /* '<S5>/Integrator' */
  boolean_T Integrator_CSTATE_e;       /* '<S6>/Integrator' */
  boolean_T Integrator_CSTATE_d;       /* '<S7>/Integrator' */
  boolean_T Integrator_CSTATE_c;       /* '<S8>/Integrator' */
  boolean_T TransferFcn1_CSTATE;       /* '<S3>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_n;       /* '<S90>/Integrator' */
  boolean_T TransferFcn1_CSTATE_f;     /* '<S4>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_md;      /* '<S188>/Integrator' */
  boolean_T TransferFcn1_CSTATE_d;     /* '<S5>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_nu;      /* '<S286>/Integrator' */
  boolean_T TransferFcn1_CSTATE_a;     /* '<S6>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_f;       /* '<S384>/Integrator' */
  boolean_T TransferFcn1_CSTATE_n;     /* '<S7>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_k;       /* '<S482>/Integrator' */
  boolean_T TransferFcn1_CSTATE_dg;    /* '<S8>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_h;       /* '<S580>/Integrator' */
} XDis_HIWIN_arm_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Parameters (default storage) */
struct P_HIWIN_arm_T_ {
  real_T Kt1;                          /* Variable: Kt1
                                        * Referenced by: '<S3>/Kt'
                                        */
  real_T Kt2;                          /* Variable: Kt2
                                        * Referenced by: '<S4>/Torque_const_Kt'
                                        */
  real_T Kt3;                          /* Variable: Kt3
                                        * Referenced by: '<S5>/Kt'
                                        */
  real_T Kt4;                          /* Variable: Kt4
                                        * Referenced by: '<S6>/Kt'
                                        */
  real_T Kt5;                          /* Variable: Kt5
                                        * Referenced by: '<S7>/Torque_const_Kt'
                                        */
  real_T Kt6;                          /* Variable: Kt6
                                        * Referenced by: '<S8>/Kt'
                                        */
  real_T Kv_I;                         /* Mask Parameter: Kv_I
                                        * Referenced by: '<S87>/Integral Gain'
                                        */
  real_T Kv_I_k;                       /* Mask Parameter: Kv_I_k
                                        * Referenced by: '<S185>/Integral Gain'
                                        */
  real_T Kv_I_j;                       /* Mask Parameter: Kv_I_j
                                        * Referenced by: '<S283>/Integral Gain'
                                        */
  real_T Kv_I_d;                       /* Mask Parameter: Kv_I_d
                                        * Referenced by: '<S381>/Integral Gain'
                                        */
  real_T Kv_I_c;                       /* Mask Parameter: Kv_I_c
                                        * Referenced by: '<S479>/Integral Gain'
                                        */
  real_T Kv_I_l;                       /* Mask Parameter: Kv_I_l
                                        * Referenced by: '<S577>/Integral Gain'
                                        */
  real_T Kv_InitialConditionForIntegrato;
                              /* Mask Parameter: Kv_InitialConditionForIntegrato
                               * Referenced by: '<S90>/Integrator'
                               */
  real_T Kv_InitialConditionForIntegra_a;
                              /* Mask Parameter: Kv_InitialConditionForIntegra_a
                               * Referenced by: '<S188>/Integrator'
                               */
  real_T Kv_InitialConditionForIntegra_o;
                              /* Mask Parameter: Kv_InitialConditionForIntegra_o
                               * Referenced by: '<S286>/Integrator'
                               */
  real_T Kv_InitialConditionForIntegra_j;
                              /* Mask Parameter: Kv_InitialConditionForIntegra_j
                               * Referenced by: '<S384>/Integrator'
                               */
  real_T Kv_InitialConditionForIntegr_oa;
                              /* Mask Parameter: Kv_InitialConditionForIntegr_oa
                               * Referenced by: '<S482>/Integrator'
                               */
  real_T Kv_InitialConditionForIntegra_d;
                              /* Mask Parameter: Kv_InitialConditionForIntegra_d
                               * Referenced by: '<S580>/Integrator'
                               */
  real_T Kp_P;                         /* Mask Parameter: Kp_P
                                        * Referenced by: '<S47>/Proportional Gain'
                                        */
  real_T Kv_P;                         /* Mask Parameter: Kv_P
                                        * Referenced by: '<S88>/Proportional Gain'
                                        */
  real_T Kp_P_k;                       /* Mask Parameter: Kp_P_k
                                        * Referenced by: '<S145>/Proportional Gain'
                                        */
  real_T Kv_P_c;                       /* Mask Parameter: Kv_P_c
                                        * Referenced by: '<S186>/Proportional Gain'
                                        */
  real_T Kp_P_l;                       /* Mask Parameter: Kp_P_l
                                        * Referenced by: '<S243>/Proportional Gain'
                                        */
  real_T Kv_P_g;                       /* Mask Parameter: Kv_P_g
                                        * Referenced by: '<S284>/Proportional Gain'
                                        */
  real_T Kp_P_n;                       /* Mask Parameter: Kp_P_n
                                        * Referenced by: '<S341>/Proportional Gain'
                                        */
  real_T Kv_P_a;                       /* Mask Parameter: Kv_P_a
                                        * Referenced by: '<S382>/Proportional Gain'
                                        */
  real_T Kp_P_li;                      /* Mask Parameter: Kp_P_li
                                        * Referenced by: '<S439>/Proportional Gain'
                                        */
  real_T Kv_P_o;                       /* Mask Parameter: Kv_P_o
                                        * Referenced by: '<S480>/Proportional Gain'
                                        */
  real_T Kp_P_m;                       /* Mask Parameter: Kp_P_m
                                        * Referenced by: '<S537>/Proportional Gain'
                                        */
  real_T Kv_P_m;                       /* Mask Parameter: Kv_P_m
                                        * Referenced by: '<S578>/Proportional Gain'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S3>/Integrator'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Integrator_IC_k;              /* Expression: 0
                                        * Referenced by: '<S5>/Integrator'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 1
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T Integrator_IC_m;              /* Expression: 0
                                        * Referenced by: '<S6>/Integrator'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 1
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Integrator_IC_n;              /* Expression: 0
                                        * Referenced by: '<S7>/Integrator'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 1
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Integrator_IC_c;              /* Expression: 0
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<S3>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<S3>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_A_l;             /* Computed Parameter: TransferFcn1_A_l
                                        * Referenced by: '<S4>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C_p;             /* Computed Parameter: TransferFcn1_C_p
                                        * Referenced by: '<S4>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_A_f;             /* Computed Parameter: TransferFcn1_A_f
                                        * Referenced by: '<S5>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C_g;             /* Computed Parameter: TransferFcn1_C_g
                                        * Referenced by: '<S5>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_A_i;             /* Computed Parameter: TransferFcn1_A_i
                                        * Referenced by: '<S6>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C_e;             /* Computed Parameter: TransferFcn1_C_e
                                        * Referenced by: '<S6>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_A_a;             /* Computed Parameter: TransferFcn1_A_a
                                        * Referenced by: '<S7>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C_o;             /* Computed Parameter: TransferFcn1_C_o
                                        * Referenced by: '<S7>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_A_n;             /* Computed Parameter: TransferFcn1_A_n
                                        * Referenced by: '<S8>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C_gm;            /* Computed Parameter: TransferFcn1_C_gm
                                        * Referenced by: '<S8>/Transfer Fcn1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_HIWIN_arm_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  X_HIWIN_arm_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_HIWIN_arm_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[18];
  real_T odeF[4][18];
  ODE4_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_HIWIN_arm_T HIWIN_arm_P;

/* Block signals (default storage) */
extern B_HIWIN_arm_T HIWIN_arm_B;

/* Continuous states (default storage) */
extern X_HIWIN_arm_T HIWIN_arm_X;

/* Block states (default storage) */
extern DW_HIWIN_arm_T HIWIN_arm_DW;

/* Model entry point functions */
extern void HIWIN_arm_initialize(void);
extern void HIWIN_arm_step(void);
extern void HIWIN_arm_terminate(void);

/* Real-time Model object */
extern RT_MODEL_HIWIN_arm_T *const HIWIN_arm_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HIWIN_arm'
 * '<S1>'   : 'HIWIN_arm/Forwar kinematic'
 * '<S2>'   : 'HIWIN_arm/MATLAB Function'
 * '<S3>'   : 'HIWIN_arm/link1'
 * '<S4>'   : 'HIWIN_arm/link2'
 * '<S5>'   : 'HIWIN_arm/link3'
 * '<S6>'   : 'HIWIN_arm/link4'
 * '<S7>'   : 'HIWIN_arm/link5'
 * '<S8>'   : 'HIWIN_arm/link6'
 * '<S9>'   : 'HIWIN_arm/link1/Kp'
 * '<S10>'  : 'HIWIN_arm/link1/Kv'
 * '<S11>'  : 'HIWIN_arm/link1/Kp/Anti-windup'
 * '<S12>'  : 'HIWIN_arm/link1/Kp/D Gain'
 * '<S13>'  : 'HIWIN_arm/link1/Kp/Filter'
 * '<S14>'  : 'HIWIN_arm/link1/Kp/Filter ICs'
 * '<S15>'  : 'HIWIN_arm/link1/Kp/I Gain'
 * '<S16>'  : 'HIWIN_arm/link1/Kp/Ideal P Gain'
 * '<S17>'  : 'HIWIN_arm/link1/Kp/Ideal P Gain Fdbk'
 * '<S18>'  : 'HIWIN_arm/link1/Kp/Integrator'
 * '<S19>'  : 'HIWIN_arm/link1/Kp/Integrator ICs'
 * '<S20>'  : 'HIWIN_arm/link1/Kp/N Copy'
 * '<S21>'  : 'HIWIN_arm/link1/Kp/N Gain'
 * '<S22>'  : 'HIWIN_arm/link1/Kp/P Copy'
 * '<S23>'  : 'HIWIN_arm/link1/Kp/Parallel P Gain'
 * '<S24>'  : 'HIWIN_arm/link1/Kp/Reset Signal'
 * '<S25>'  : 'HIWIN_arm/link1/Kp/Saturation'
 * '<S26>'  : 'HIWIN_arm/link1/Kp/Saturation Fdbk'
 * '<S27>'  : 'HIWIN_arm/link1/Kp/Sum'
 * '<S28>'  : 'HIWIN_arm/link1/Kp/Sum Fdbk'
 * '<S29>'  : 'HIWIN_arm/link1/Kp/Tracking Mode'
 * '<S30>'  : 'HIWIN_arm/link1/Kp/Tracking Mode Sum'
 * '<S31>'  : 'HIWIN_arm/link1/Kp/Tsamp - Integral'
 * '<S32>'  : 'HIWIN_arm/link1/Kp/Tsamp - Ngain'
 * '<S33>'  : 'HIWIN_arm/link1/Kp/postSat Signal'
 * '<S34>'  : 'HIWIN_arm/link1/Kp/preSat Signal'
 * '<S35>'  : 'HIWIN_arm/link1/Kp/Anti-windup/Disabled'
 * '<S36>'  : 'HIWIN_arm/link1/Kp/D Gain/Disabled'
 * '<S37>'  : 'HIWIN_arm/link1/Kp/Filter/Disabled'
 * '<S38>'  : 'HIWIN_arm/link1/Kp/Filter ICs/Disabled'
 * '<S39>'  : 'HIWIN_arm/link1/Kp/I Gain/Disabled'
 * '<S40>'  : 'HIWIN_arm/link1/Kp/Ideal P Gain/Passthrough'
 * '<S41>'  : 'HIWIN_arm/link1/Kp/Ideal P Gain Fdbk/Disabled'
 * '<S42>'  : 'HIWIN_arm/link1/Kp/Integrator/Disabled'
 * '<S43>'  : 'HIWIN_arm/link1/Kp/Integrator ICs/Disabled'
 * '<S44>'  : 'HIWIN_arm/link1/Kp/N Copy/Disabled wSignal Specification'
 * '<S45>'  : 'HIWIN_arm/link1/Kp/N Gain/Disabled'
 * '<S46>'  : 'HIWIN_arm/link1/Kp/P Copy/Disabled'
 * '<S47>'  : 'HIWIN_arm/link1/Kp/Parallel P Gain/Internal Parameters'
 * '<S48>'  : 'HIWIN_arm/link1/Kp/Reset Signal/Disabled'
 * '<S49>'  : 'HIWIN_arm/link1/Kp/Saturation/Passthrough'
 * '<S50>'  : 'HIWIN_arm/link1/Kp/Saturation Fdbk/Disabled'
 * '<S51>'  : 'HIWIN_arm/link1/Kp/Sum/Passthrough_P'
 * '<S52>'  : 'HIWIN_arm/link1/Kp/Sum Fdbk/Disabled'
 * '<S53>'  : 'HIWIN_arm/link1/Kp/Tracking Mode/Disabled'
 * '<S54>'  : 'HIWIN_arm/link1/Kp/Tracking Mode Sum/Passthrough'
 * '<S55>'  : 'HIWIN_arm/link1/Kp/Tsamp - Integral/Disabled wSignal Specification'
 * '<S56>'  : 'HIWIN_arm/link1/Kp/Tsamp - Ngain/Passthrough'
 * '<S57>'  : 'HIWIN_arm/link1/Kp/postSat Signal/Forward_Path'
 * '<S58>'  : 'HIWIN_arm/link1/Kp/preSat Signal/Forward_Path'
 * '<S59>'  : 'HIWIN_arm/link1/Kv/Anti-windup'
 * '<S60>'  : 'HIWIN_arm/link1/Kv/D Gain'
 * '<S61>'  : 'HIWIN_arm/link1/Kv/Filter'
 * '<S62>'  : 'HIWIN_arm/link1/Kv/Filter ICs'
 * '<S63>'  : 'HIWIN_arm/link1/Kv/I Gain'
 * '<S64>'  : 'HIWIN_arm/link1/Kv/Ideal P Gain'
 * '<S65>'  : 'HIWIN_arm/link1/Kv/Ideal P Gain Fdbk'
 * '<S66>'  : 'HIWIN_arm/link1/Kv/Integrator'
 * '<S67>'  : 'HIWIN_arm/link1/Kv/Integrator ICs'
 * '<S68>'  : 'HIWIN_arm/link1/Kv/N Copy'
 * '<S69>'  : 'HIWIN_arm/link1/Kv/N Gain'
 * '<S70>'  : 'HIWIN_arm/link1/Kv/P Copy'
 * '<S71>'  : 'HIWIN_arm/link1/Kv/Parallel P Gain'
 * '<S72>'  : 'HIWIN_arm/link1/Kv/Reset Signal'
 * '<S73>'  : 'HIWIN_arm/link1/Kv/Saturation'
 * '<S74>'  : 'HIWIN_arm/link1/Kv/Saturation Fdbk'
 * '<S75>'  : 'HIWIN_arm/link1/Kv/Sum'
 * '<S76>'  : 'HIWIN_arm/link1/Kv/Sum Fdbk'
 * '<S77>'  : 'HIWIN_arm/link1/Kv/Tracking Mode'
 * '<S78>'  : 'HIWIN_arm/link1/Kv/Tracking Mode Sum'
 * '<S79>'  : 'HIWIN_arm/link1/Kv/Tsamp - Integral'
 * '<S80>'  : 'HIWIN_arm/link1/Kv/Tsamp - Ngain'
 * '<S81>'  : 'HIWIN_arm/link1/Kv/postSat Signal'
 * '<S82>'  : 'HIWIN_arm/link1/Kv/preSat Signal'
 * '<S83>'  : 'HIWIN_arm/link1/Kv/Anti-windup/Passthrough'
 * '<S84>'  : 'HIWIN_arm/link1/Kv/D Gain/Disabled'
 * '<S85>'  : 'HIWIN_arm/link1/Kv/Filter/Disabled'
 * '<S86>'  : 'HIWIN_arm/link1/Kv/Filter ICs/Disabled'
 * '<S87>'  : 'HIWIN_arm/link1/Kv/I Gain/Internal Parameters'
 * '<S88>'  : 'HIWIN_arm/link1/Kv/Ideal P Gain/Internal Parameters'
 * '<S89>'  : 'HIWIN_arm/link1/Kv/Ideal P Gain Fdbk/Disabled'
 * '<S90>'  : 'HIWIN_arm/link1/Kv/Integrator/Continuous'
 * '<S91>'  : 'HIWIN_arm/link1/Kv/Integrator ICs/Internal IC'
 * '<S92>'  : 'HIWIN_arm/link1/Kv/N Copy/Disabled wSignal Specification'
 * '<S93>'  : 'HIWIN_arm/link1/Kv/N Gain/Disabled'
 * '<S94>'  : 'HIWIN_arm/link1/Kv/P Copy/Disabled'
 * '<S95>'  : 'HIWIN_arm/link1/Kv/Parallel P Gain/Passthrough'
 * '<S96>'  : 'HIWIN_arm/link1/Kv/Reset Signal/Disabled'
 * '<S97>'  : 'HIWIN_arm/link1/Kv/Saturation/Passthrough'
 * '<S98>'  : 'HIWIN_arm/link1/Kv/Saturation Fdbk/Disabled'
 * '<S99>'  : 'HIWIN_arm/link1/Kv/Sum/Sum_PI'
 * '<S100>' : 'HIWIN_arm/link1/Kv/Sum Fdbk/Disabled'
 * '<S101>' : 'HIWIN_arm/link1/Kv/Tracking Mode/Disabled'
 * '<S102>' : 'HIWIN_arm/link1/Kv/Tracking Mode Sum/Passthrough'
 * '<S103>' : 'HIWIN_arm/link1/Kv/Tsamp - Integral/Passthrough'
 * '<S104>' : 'HIWIN_arm/link1/Kv/Tsamp - Ngain/Passthrough'
 * '<S105>' : 'HIWIN_arm/link1/Kv/postSat Signal/Forward_Path'
 * '<S106>' : 'HIWIN_arm/link1/Kv/preSat Signal/Forward_Path'
 * '<S107>' : 'HIWIN_arm/link2/Kp'
 * '<S108>' : 'HIWIN_arm/link2/Kv'
 * '<S109>' : 'HIWIN_arm/link2/Kp/Anti-windup'
 * '<S110>' : 'HIWIN_arm/link2/Kp/D Gain'
 * '<S111>' : 'HIWIN_arm/link2/Kp/Filter'
 * '<S112>' : 'HIWIN_arm/link2/Kp/Filter ICs'
 * '<S113>' : 'HIWIN_arm/link2/Kp/I Gain'
 * '<S114>' : 'HIWIN_arm/link2/Kp/Ideal P Gain'
 * '<S115>' : 'HIWIN_arm/link2/Kp/Ideal P Gain Fdbk'
 * '<S116>' : 'HIWIN_arm/link2/Kp/Integrator'
 * '<S117>' : 'HIWIN_arm/link2/Kp/Integrator ICs'
 * '<S118>' : 'HIWIN_arm/link2/Kp/N Copy'
 * '<S119>' : 'HIWIN_arm/link2/Kp/N Gain'
 * '<S120>' : 'HIWIN_arm/link2/Kp/P Copy'
 * '<S121>' : 'HIWIN_arm/link2/Kp/Parallel P Gain'
 * '<S122>' : 'HIWIN_arm/link2/Kp/Reset Signal'
 * '<S123>' : 'HIWIN_arm/link2/Kp/Saturation'
 * '<S124>' : 'HIWIN_arm/link2/Kp/Saturation Fdbk'
 * '<S125>' : 'HIWIN_arm/link2/Kp/Sum'
 * '<S126>' : 'HIWIN_arm/link2/Kp/Sum Fdbk'
 * '<S127>' : 'HIWIN_arm/link2/Kp/Tracking Mode'
 * '<S128>' : 'HIWIN_arm/link2/Kp/Tracking Mode Sum'
 * '<S129>' : 'HIWIN_arm/link2/Kp/Tsamp - Integral'
 * '<S130>' : 'HIWIN_arm/link2/Kp/Tsamp - Ngain'
 * '<S131>' : 'HIWIN_arm/link2/Kp/postSat Signal'
 * '<S132>' : 'HIWIN_arm/link2/Kp/preSat Signal'
 * '<S133>' : 'HIWIN_arm/link2/Kp/Anti-windup/Disabled'
 * '<S134>' : 'HIWIN_arm/link2/Kp/D Gain/Disabled'
 * '<S135>' : 'HIWIN_arm/link2/Kp/Filter/Disabled'
 * '<S136>' : 'HIWIN_arm/link2/Kp/Filter ICs/Disabled'
 * '<S137>' : 'HIWIN_arm/link2/Kp/I Gain/Disabled'
 * '<S138>' : 'HIWIN_arm/link2/Kp/Ideal P Gain/Passthrough'
 * '<S139>' : 'HIWIN_arm/link2/Kp/Ideal P Gain Fdbk/Disabled'
 * '<S140>' : 'HIWIN_arm/link2/Kp/Integrator/Disabled'
 * '<S141>' : 'HIWIN_arm/link2/Kp/Integrator ICs/Disabled'
 * '<S142>' : 'HIWIN_arm/link2/Kp/N Copy/Disabled wSignal Specification'
 * '<S143>' : 'HIWIN_arm/link2/Kp/N Gain/Disabled'
 * '<S144>' : 'HIWIN_arm/link2/Kp/P Copy/Disabled'
 * '<S145>' : 'HIWIN_arm/link2/Kp/Parallel P Gain/Internal Parameters'
 * '<S146>' : 'HIWIN_arm/link2/Kp/Reset Signal/Disabled'
 * '<S147>' : 'HIWIN_arm/link2/Kp/Saturation/Passthrough'
 * '<S148>' : 'HIWIN_arm/link2/Kp/Saturation Fdbk/Disabled'
 * '<S149>' : 'HIWIN_arm/link2/Kp/Sum/Passthrough_P'
 * '<S150>' : 'HIWIN_arm/link2/Kp/Sum Fdbk/Disabled'
 * '<S151>' : 'HIWIN_arm/link2/Kp/Tracking Mode/Disabled'
 * '<S152>' : 'HIWIN_arm/link2/Kp/Tracking Mode Sum/Passthrough'
 * '<S153>' : 'HIWIN_arm/link2/Kp/Tsamp - Integral/Disabled wSignal Specification'
 * '<S154>' : 'HIWIN_arm/link2/Kp/Tsamp - Ngain/Passthrough'
 * '<S155>' : 'HIWIN_arm/link2/Kp/postSat Signal/Forward_Path'
 * '<S156>' : 'HIWIN_arm/link2/Kp/preSat Signal/Forward_Path'
 * '<S157>' : 'HIWIN_arm/link2/Kv/Anti-windup'
 * '<S158>' : 'HIWIN_arm/link2/Kv/D Gain'
 * '<S159>' : 'HIWIN_arm/link2/Kv/Filter'
 * '<S160>' : 'HIWIN_arm/link2/Kv/Filter ICs'
 * '<S161>' : 'HIWIN_arm/link2/Kv/I Gain'
 * '<S162>' : 'HIWIN_arm/link2/Kv/Ideal P Gain'
 * '<S163>' : 'HIWIN_arm/link2/Kv/Ideal P Gain Fdbk'
 * '<S164>' : 'HIWIN_arm/link2/Kv/Integrator'
 * '<S165>' : 'HIWIN_arm/link2/Kv/Integrator ICs'
 * '<S166>' : 'HIWIN_arm/link2/Kv/N Copy'
 * '<S167>' : 'HIWIN_arm/link2/Kv/N Gain'
 * '<S168>' : 'HIWIN_arm/link2/Kv/P Copy'
 * '<S169>' : 'HIWIN_arm/link2/Kv/Parallel P Gain'
 * '<S170>' : 'HIWIN_arm/link2/Kv/Reset Signal'
 * '<S171>' : 'HIWIN_arm/link2/Kv/Saturation'
 * '<S172>' : 'HIWIN_arm/link2/Kv/Saturation Fdbk'
 * '<S173>' : 'HIWIN_arm/link2/Kv/Sum'
 * '<S174>' : 'HIWIN_arm/link2/Kv/Sum Fdbk'
 * '<S175>' : 'HIWIN_arm/link2/Kv/Tracking Mode'
 * '<S176>' : 'HIWIN_arm/link2/Kv/Tracking Mode Sum'
 * '<S177>' : 'HIWIN_arm/link2/Kv/Tsamp - Integral'
 * '<S178>' : 'HIWIN_arm/link2/Kv/Tsamp - Ngain'
 * '<S179>' : 'HIWIN_arm/link2/Kv/postSat Signal'
 * '<S180>' : 'HIWIN_arm/link2/Kv/preSat Signal'
 * '<S181>' : 'HIWIN_arm/link2/Kv/Anti-windup/Passthrough'
 * '<S182>' : 'HIWIN_arm/link2/Kv/D Gain/Disabled'
 * '<S183>' : 'HIWIN_arm/link2/Kv/Filter/Disabled'
 * '<S184>' : 'HIWIN_arm/link2/Kv/Filter ICs/Disabled'
 * '<S185>' : 'HIWIN_arm/link2/Kv/I Gain/Internal Parameters'
 * '<S186>' : 'HIWIN_arm/link2/Kv/Ideal P Gain/Internal Parameters'
 * '<S187>' : 'HIWIN_arm/link2/Kv/Ideal P Gain Fdbk/Disabled'
 * '<S188>' : 'HIWIN_arm/link2/Kv/Integrator/Continuous'
 * '<S189>' : 'HIWIN_arm/link2/Kv/Integrator ICs/Internal IC'
 * '<S190>' : 'HIWIN_arm/link2/Kv/N Copy/Disabled wSignal Specification'
 * '<S191>' : 'HIWIN_arm/link2/Kv/N Gain/Disabled'
 * '<S192>' : 'HIWIN_arm/link2/Kv/P Copy/Disabled'
 * '<S193>' : 'HIWIN_arm/link2/Kv/Parallel P Gain/Passthrough'
 * '<S194>' : 'HIWIN_arm/link2/Kv/Reset Signal/Disabled'
 * '<S195>' : 'HIWIN_arm/link2/Kv/Saturation/Passthrough'
 * '<S196>' : 'HIWIN_arm/link2/Kv/Saturation Fdbk/Disabled'
 * '<S197>' : 'HIWIN_arm/link2/Kv/Sum/Sum_PI'
 * '<S198>' : 'HIWIN_arm/link2/Kv/Sum Fdbk/Disabled'
 * '<S199>' : 'HIWIN_arm/link2/Kv/Tracking Mode/Disabled'
 * '<S200>' : 'HIWIN_arm/link2/Kv/Tracking Mode Sum/Passthrough'
 * '<S201>' : 'HIWIN_arm/link2/Kv/Tsamp - Integral/Passthrough'
 * '<S202>' : 'HIWIN_arm/link2/Kv/Tsamp - Ngain/Passthrough'
 * '<S203>' : 'HIWIN_arm/link2/Kv/postSat Signal/Forward_Path'
 * '<S204>' : 'HIWIN_arm/link2/Kv/preSat Signal/Forward_Path'
 * '<S205>' : 'HIWIN_arm/link3/Kp'
 * '<S206>' : 'HIWIN_arm/link3/Kv'
 * '<S207>' : 'HIWIN_arm/link3/Kp/Anti-windup'
 * '<S208>' : 'HIWIN_arm/link3/Kp/D Gain'
 * '<S209>' : 'HIWIN_arm/link3/Kp/Filter'
 * '<S210>' : 'HIWIN_arm/link3/Kp/Filter ICs'
 * '<S211>' : 'HIWIN_arm/link3/Kp/I Gain'
 * '<S212>' : 'HIWIN_arm/link3/Kp/Ideal P Gain'
 * '<S213>' : 'HIWIN_arm/link3/Kp/Ideal P Gain Fdbk'
 * '<S214>' : 'HIWIN_arm/link3/Kp/Integrator'
 * '<S215>' : 'HIWIN_arm/link3/Kp/Integrator ICs'
 * '<S216>' : 'HIWIN_arm/link3/Kp/N Copy'
 * '<S217>' : 'HIWIN_arm/link3/Kp/N Gain'
 * '<S218>' : 'HIWIN_arm/link3/Kp/P Copy'
 * '<S219>' : 'HIWIN_arm/link3/Kp/Parallel P Gain'
 * '<S220>' : 'HIWIN_arm/link3/Kp/Reset Signal'
 * '<S221>' : 'HIWIN_arm/link3/Kp/Saturation'
 * '<S222>' : 'HIWIN_arm/link3/Kp/Saturation Fdbk'
 * '<S223>' : 'HIWIN_arm/link3/Kp/Sum'
 * '<S224>' : 'HIWIN_arm/link3/Kp/Sum Fdbk'
 * '<S225>' : 'HIWIN_arm/link3/Kp/Tracking Mode'
 * '<S226>' : 'HIWIN_arm/link3/Kp/Tracking Mode Sum'
 * '<S227>' : 'HIWIN_arm/link3/Kp/Tsamp - Integral'
 * '<S228>' : 'HIWIN_arm/link3/Kp/Tsamp - Ngain'
 * '<S229>' : 'HIWIN_arm/link3/Kp/postSat Signal'
 * '<S230>' : 'HIWIN_arm/link3/Kp/preSat Signal'
 * '<S231>' : 'HIWIN_arm/link3/Kp/Anti-windup/Disabled'
 * '<S232>' : 'HIWIN_arm/link3/Kp/D Gain/Disabled'
 * '<S233>' : 'HIWIN_arm/link3/Kp/Filter/Disabled'
 * '<S234>' : 'HIWIN_arm/link3/Kp/Filter ICs/Disabled'
 * '<S235>' : 'HIWIN_arm/link3/Kp/I Gain/Disabled'
 * '<S236>' : 'HIWIN_arm/link3/Kp/Ideal P Gain/Passthrough'
 * '<S237>' : 'HIWIN_arm/link3/Kp/Ideal P Gain Fdbk/Disabled'
 * '<S238>' : 'HIWIN_arm/link3/Kp/Integrator/Disabled'
 * '<S239>' : 'HIWIN_arm/link3/Kp/Integrator ICs/Disabled'
 * '<S240>' : 'HIWIN_arm/link3/Kp/N Copy/Disabled wSignal Specification'
 * '<S241>' : 'HIWIN_arm/link3/Kp/N Gain/Disabled'
 * '<S242>' : 'HIWIN_arm/link3/Kp/P Copy/Disabled'
 * '<S243>' : 'HIWIN_arm/link3/Kp/Parallel P Gain/Internal Parameters'
 * '<S244>' : 'HIWIN_arm/link3/Kp/Reset Signal/Disabled'
 * '<S245>' : 'HIWIN_arm/link3/Kp/Saturation/Passthrough'
 * '<S246>' : 'HIWIN_arm/link3/Kp/Saturation Fdbk/Disabled'
 * '<S247>' : 'HIWIN_arm/link3/Kp/Sum/Passthrough_P'
 * '<S248>' : 'HIWIN_arm/link3/Kp/Sum Fdbk/Disabled'
 * '<S249>' : 'HIWIN_arm/link3/Kp/Tracking Mode/Disabled'
 * '<S250>' : 'HIWIN_arm/link3/Kp/Tracking Mode Sum/Passthrough'
 * '<S251>' : 'HIWIN_arm/link3/Kp/Tsamp - Integral/Disabled wSignal Specification'
 * '<S252>' : 'HIWIN_arm/link3/Kp/Tsamp - Ngain/Passthrough'
 * '<S253>' : 'HIWIN_arm/link3/Kp/postSat Signal/Forward_Path'
 * '<S254>' : 'HIWIN_arm/link3/Kp/preSat Signal/Forward_Path'
 * '<S255>' : 'HIWIN_arm/link3/Kv/Anti-windup'
 * '<S256>' : 'HIWIN_arm/link3/Kv/D Gain'
 * '<S257>' : 'HIWIN_arm/link3/Kv/Filter'
 * '<S258>' : 'HIWIN_arm/link3/Kv/Filter ICs'
 * '<S259>' : 'HIWIN_arm/link3/Kv/I Gain'
 * '<S260>' : 'HIWIN_arm/link3/Kv/Ideal P Gain'
 * '<S261>' : 'HIWIN_arm/link3/Kv/Ideal P Gain Fdbk'
 * '<S262>' : 'HIWIN_arm/link3/Kv/Integrator'
 * '<S263>' : 'HIWIN_arm/link3/Kv/Integrator ICs'
 * '<S264>' : 'HIWIN_arm/link3/Kv/N Copy'
 * '<S265>' : 'HIWIN_arm/link3/Kv/N Gain'
 * '<S266>' : 'HIWIN_arm/link3/Kv/P Copy'
 * '<S267>' : 'HIWIN_arm/link3/Kv/Parallel P Gain'
 * '<S268>' : 'HIWIN_arm/link3/Kv/Reset Signal'
 * '<S269>' : 'HIWIN_arm/link3/Kv/Saturation'
 * '<S270>' : 'HIWIN_arm/link3/Kv/Saturation Fdbk'
 * '<S271>' : 'HIWIN_arm/link3/Kv/Sum'
 * '<S272>' : 'HIWIN_arm/link3/Kv/Sum Fdbk'
 * '<S273>' : 'HIWIN_arm/link3/Kv/Tracking Mode'
 * '<S274>' : 'HIWIN_arm/link3/Kv/Tracking Mode Sum'
 * '<S275>' : 'HIWIN_arm/link3/Kv/Tsamp - Integral'
 * '<S276>' : 'HIWIN_arm/link3/Kv/Tsamp - Ngain'
 * '<S277>' : 'HIWIN_arm/link3/Kv/postSat Signal'
 * '<S278>' : 'HIWIN_arm/link3/Kv/preSat Signal'
 * '<S279>' : 'HIWIN_arm/link3/Kv/Anti-windup/Passthrough'
 * '<S280>' : 'HIWIN_arm/link3/Kv/D Gain/Disabled'
 * '<S281>' : 'HIWIN_arm/link3/Kv/Filter/Disabled'
 * '<S282>' : 'HIWIN_arm/link3/Kv/Filter ICs/Disabled'
 * '<S283>' : 'HIWIN_arm/link3/Kv/I Gain/Internal Parameters'
 * '<S284>' : 'HIWIN_arm/link3/Kv/Ideal P Gain/Internal Parameters'
 * '<S285>' : 'HIWIN_arm/link3/Kv/Ideal P Gain Fdbk/Disabled'
 * '<S286>' : 'HIWIN_arm/link3/Kv/Integrator/Continuous'
 * '<S287>' : 'HIWIN_arm/link3/Kv/Integrator ICs/Internal IC'
 * '<S288>' : 'HIWIN_arm/link3/Kv/N Copy/Disabled wSignal Specification'
 * '<S289>' : 'HIWIN_arm/link3/Kv/N Gain/Disabled'
 * '<S290>' : 'HIWIN_arm/link3/Kv/P Copy/Disabled'
 * '<S291>' : 'HIWIN_arm/link3/Kv/Parallel P Gain/Passthrough'
 * '<S292>' : 'HIWIN_arm/link3/Kv/Reset Signal/Disabled'
 * '<S293>' : 'HIWIN_arm/link3/Kv/Saturation/Passthrough'
 * '<S294>' : 'HIWIN_arm/link3/Kv/Saturation Fdbk/Disabled'
 * '<S295>' : 'HIWIN_arm/link3/Kv/Sum/Sum_PI'
 * '<S296>' : 'HIWIN_arm/link3/Kv/Sum Fdbk/Disabled'
 * '<S297>' : 'HIWIN_arm/link3/Kv/Tracking Mode/Disabled'
 * '<S298>' : 'HIWIN_arm/link3/Kv/Tracking Mode Sum/Passthrough'
 * '<S299>' : 'HIWIN_arm/link3/Kv/Tsamp - Integral/Passthrough'
 * '<S300>' : 'HIWIN_arm/link3/Kv/Tsamp - Ngain/Passthrough'
 * '<S301>' : 'HIWIN_arm/link3/Kv/postSat Signal/Forward_Path'
 * '<S302>' : 'HIWIN_arm/link3/Kv/preSat Signal/Forward_Path'
 * '<S303>' : 'HIWIN_arm/link4/Kp'
 * '<S304>' : 'HIWIN_arm/link4/Kv'
 * '<S305>' : 'HIWIN_arm/link4/Kp/Anti-windup'
 * '<S306>' : 'HIWIN_arm/link4/Kp/D Gain'
 * '<S307>' : 'HIWIN_arm/link4/Kp/Filter'
 * '<S308>' : 'HIWIN_arm/link4/Kp/Filter ICs'
 * '<S309>' : 'HIWIN_arm/link4/Kp/I Gain'
 * '<S310>' : 'HIWIN_arm/link4/Kp/Ideal P Gain'
 * '<S311>' : 'HIWIN_arm/link4/Kp/Ideal P Gain Fdbk'
 * '<S312>' : 'HIWIN_arm/link4/Kp/Integrator'
 * '<S313>' : 'HIWIN_arm/link4/Kp/Integrator ICs'
 * '<S314>' : 'HIWIN_arm/link4/Kp/N Copy'
 * '<S315>' : 'HIWIN_arm/link4/Kp/N Gain'
 * '<S316>' : 'HIWIN_arm/link4/Kp/P Copy'
 * '<S317>' : 'HIWIN_arm/link4/Kp/Parallel P Gain'
 * '<S318>' : 'HIWIN_arm/link4/Kp/Reset Signal'
 * '<S319>' : 'HIWIN_arm/link4/Kp/Saturation'
 * '<S320>' : 'HIWIN_arm/link4/Kp/Saturation Fdbk'
 * '<S321>' : 'HIWIN_arm/link4/Kp/Sum'
 * '<S322>' : 'HIWIN_arm/link4/Kp/Sum Fdbk'
 * '<S323>' : 'HIWIN_arm/link4/Kp/Tracking Mode'
 * '<S324>' : 'HIWIN_arm/link4/Kp/Tracking Mode Sum'
 * '<S325>' : 'HIWIN_arm/link4/Kp/Tsamp - Integral'
 * '<S326>' : 'HIWIN_arm/link4/Kp/Tsamp - Ngain'
 * '<S327>' : 'HIWIN_arm/link4/Kp/postSat Signal'
 * '<S328>' : 'HIWIN_arm/link4/Kp/preSat Signal'
 * '<S329>' : 'HIWIN_arm/link4/Kp/Anti-windup/Disabled'
 * '<S330>' : 'HIWIN_arm/link4/Kp/D Gain/Disabled'
 * '<S331>' : 'HIWIN_arm/link4/Kp/Filter/Disabled'
 * '<S332>' : 'HIWIN_arm/link4/Kp/Filter ICs/Disabled'
 * '<S333>' : 'HIWIN_arm/link4/Kp/I Gain/Disabled'
 * '<S334>' : 'HIWIN_arm/link4/Kp/Ideal P Gain/Passthrough'
 * '<S335>' : 'HIWIN_arm/link4/Kp/Ideal P Gain Fdbk/Disabled'
 * '<S336>' : 'HIWIN_arm/link4/Kp/Integrator/Disabled'
 * '<S337>' : 'HIWIN_arm/link4/Kp/Integrator ICs/Disabled'
 * '<S338>' : 'HIWIN_arm/link4/Kp/N Copy/Disabled wSignal Specification'
 * '<S339>' : 'HIWIN_arm/link4/Kp/N Gain/Disabled'
 * '<S340>' : 'HIWIN_arm/link4/Kp/P Copy/Disabled'
 * '<S341>' : 'HIWIN_arm/link4/Kp/Parallel P Gain/Internal Parameters'
 * '<S342>' : 'HIWIN_arm/link4/Kp/Reset Signal/Disabled'
 * '<S343>' : 'HIWIN_arm/link4/Kp/Saturation/Passthrough'
 * '<S344>' : 'HIWIN_arm/link4/Kp/Saturation Fdbk/Disabled'
 * '<S345>' : 'HIWIN_arm/link4/Kp/Sum/Passthrough_P'
 * '<S346>' : 'HIWIN_arm/link4/Kp/Sum Fdbk/Disabled'
 * '<S347>' : 'HIWIN_arm/link4/Kp/Tracking Mode/Disabled'
 * '<S348>' : 'HIWIN_arm/link4/Kp/Tracking Mode Sum/Passthrough'
 * '<S349>' : 'HIWIN_arm/link4/Kp/Tsamp - Integral/Disabled wSignal Specification'
 * '<S350>' : 'HIWIN_arm/link4/Kp/Tsamp - Ngain/Passthrough'
 * '<S351>' : 'HIWIN_arm/link4/Kp/postSat Signal/Forward_Path'
 * '<S352>' : 'HIWIN_arm/link4/Kp/preSat Signal/Forward_Path'
 * '<S353>' : 'HIWIN_arm/link4/Kv/Anti-windup'
 * '<S354>' : 'HIWIN_arm/link4/Kv/D Gain'
 * '<S355>' : 'HIWIN_arm/link4/Kv/Filter'
 * '<S356>' : 'HIWIN_arm/link4/Kv/Filter ICs'
 * '<S357>' : 'HIWIN_arm/link4/Kv/I Gain'
 * '<S358>' : 'HIWIN_arm/link4/Kv/Ideal P Gain'
 * '<S359>' : 'HIWIN_arm/link4/Kv/Ideal P Gain Fdbk'
 * '<S360>' : 'HIWIN_arm/link4/Kv/Integrator'
 * '<S361>' : 'HIWIN_arm/link4/Kv/Integrator ICs'
 * '<S362>' : 'HIWIN_arm/link4/Kv/N Copy'
 * '<S363>' : 'HIWIN_arm/link4/Kv/N Gain'
 * '<S364>' : 'HIWIN_arm/link4/Kv/P Copy'
 * '<S365>' : 'HIWIN_arm/link4/Kv/Parallel P Gain'
 * '<S366>' : 'HIWIN_arm/link4/Kv/Reset Signal'
 * '<S367>' : 'HIWIN_arm/link4/Kv/Saturation'
 * '<S368>' : 'HIWIN_arm/link4/Kv/Saturation Fdbk'
 * '<S369>' : 'HIWIN_arm/link4/Kv/Sum'
 * '<S370>' : 'HIWIN_arm/link4/Kv/Sum Fdbk'
 * '<S371>' : 'HIWIN_arm/link4/Kv/Tracking Mode'
 * '<S372>' : 'HIWIN_arm/link4/Kv/Tracking Mode Sum'
 * '<S373>' : 'HIWIN_arm/link4/Kv/Tsamp - Integral'
 * '<S374>' : 'HIWIN_arm/link4/Kv/Tsamp - Ngain'
 * '<S375>' : 'HIWIN_arm/link4/Kv/postSat Signal'
 * '<S376>' : 'HIWIN_arm/link4/Kv/preSat Signal'
 * '<S377>' : 'HIWIN_arm/link4/Kv/Anti-windup/Passthrough'
 * '<S378>' : 'HIWIN_arm/link4/Kv/D Gain/Disabled'
 * '<S379>' : 'HIWIN_arm/link4/Kv/Filter/Disabled'
 * '<S380>' : 'HIWIN_arm/link4/Kv/Filter ICs/Disabled'
 * '<S381>' : 'HIWIN_arm/link4/Kv/I Gain/Internal Parameters'
 * '<S382>' : 'HIWIN_arm/link4/Kv/Ideal P Gain/Internal Parameters'
 * '<S383>' : 'HIWIN_arm/link4/Kv/Ideal P Gain Fdbk/Disabled'
 * '<S384>' : 'HIWIN_arm/link4/Kv/Integrator/Continuous'
 * '<S385>' : 'HIWIN_arm/link4/Kv/Integrator ICs/Internal IC'
 * '<S386>' : 'HIWIN_arm/link4/Kv/N Copy/Disabled wSignal Specification'
 * '<S387>' : 'HIWIN_arm/link4/Kv/N Gain/Disabled'
 * '<S388>' : 'HIWIN_arm/link4/Kv/P Copy/Disabled'
 * '<S389>' : 'HIWIN_arm/link4/Kv/Parallel P Gain/Passthrough'
 * '<S390>' : 'HIWIN_arm/link4/Kv/Reset Signal/Disabled'
 * '<S391>' : 'HIWIN_arm/link4/Kv/Saturation/Passthrough'
 * '<S392>' : 'HIWIN_arm/link4/Kv/Saturation Fdbk/Disabled'
 * '<S393>' : 'HIWIN_arm/link4/Kv/Sum/Sum_PI'
 * '<S394>' : 'HIWIN_arm/link4/Kv/Sum Fdbk/Disabled'
 * '<S395>' : 'HIWIN_arm/link4/Kv/Tracking Mode/Disabled'
 * '<S396>' : 'HIWIN_arm/link4/Kv/Tracking Mode Sum/Passthrough'
 * '<S397>' : 'HIWIN_arm/link4/Kv/Tsamp - Integral/Passthrough'
 * '<S398>' : 'HIWIN_arm/link4/Kv/Tsamp - Ngain/Passthrough'
 * '<S399>' : 'HIWIN_arm/link4/Kv/postSat Signal/Forward_Path'
 * '<S400>' : 'HIWIN_arm/link4/Kv/preSat Signal/Forward_Path'
 * '<S401>' : 'HIWIN_arm/link5/Kp'
 * '<S402>' : 'HIWIN_arm/link5/Kv'
 * '<S403>' : 'HIWIN_arm/link5/Kp/Anti-windup'
 * '<S404>' : 'HIWIN_arm/link5/Kp/D Gain'
 * '<S405>' : 'HIWIN_arm/link5/Kp/Filter'
 * '<S406>' : 'HIWIN_arm/link5/Kp/Filter ICs'
 * '<S407>' : 'HIWIN_arm/link5/Kp/I Gain'
 * '<S408>' : 'HIWIN_arm/link5/Kp/Ideal P Gain'
 * '<S409>' : 'HIWIN_arm/link5/Kp/Ideal P Gain Fdbk'
 * '<S410>' : 'HIWIN_arm/link5/Kp/Integrator'
 * '<S411>' : 'HIWIN_arm/link5/Kp/Integrator ICs'
 * '<S412>' : 'HIWIN_arm/link5/Kp/N Copy'
 * '<S413>' : 'HIWIN_arm/link5/Kp/N Gain'
 * '<S414>' : 'HIWIN_arm/link5/Kp/P Copy'
 * '<S415>' : 'HIWIN_arm/link5/Kp/Parallel P Gain'
 * '<S416>' : 'HIWIN_arm/link5/Kp/Reset Signal'
 * '<S417>' : 'HIWIN_arm/link5/Kp/Saturation'
 * '<S418>' : 'HIWIN_arm/link5/Kp/Saturation Fdbk'
 * '<S419>' : 'HIWIN_arm/link5/Kp/Sum'
 * '<S420>' : 'HIWIN_arm/link5/Kp/Sum Fdbk'
 * '<S421>' : 'HIWIN_arm/link5/Kp/Tracking Mode'
 * '<S422>' : 'HIWIN_arm/link5/Kp/Tracking Mode Sum'
 * '<S423>' : 'HIWIN_arm/link5/Kp/Tsamp - Integral'
 * '<S424>' : 'HIWIN_arm/link5/Kp/Tsamp - Ngain'
 * '<S425>' : 'HIWIN_arm/link5/Kp/postSat Signal'
 * '<S426>' : 'HIWIN_arm/link5/Kp/preSat Signal'
 * '<S427>' : 'HIWIN_arm/link5/Kp/Anti-windup/Disabled'
 * '<S428>' : 'HIWIN_arm/link5/Kp/D Gain/Disabled'
 * '<S429>' : 'HIWIN_arm/link5/Kp/Filter/Disabled'
 * '<S430>' : 'HIWIN_arm/link5/Kp/Filter ICs/Disabled'
 * '<S431>' : 'HIWIN_arm/link5/Kp/I Gain/Disabled'
 * '<S432>' : 'HIWIN_arm/link5/Kp/Ideal P Gain/Passthrough'
 * '<S433>' : 'HIWIN_arm/link5/Kp/Ideal P Gain Fdbk/Disabled'
 * '<S434>' : 'HIWIN_arm/link5/Kp/Integrator/Disabled'
 * '<S435>' : 'HIWIN_arm/link5/Kp/Integrator ICs/Disabled'
 * '<S436>' : 'HIWIN_arm/link5/Kp/N Copy/Disabled wSignal Specification'
 * '<S437>' : 'HIWIN_arm/link5/Kp/N Gain/Disabled'
 * '<S438>' : 'HIWIN_arm/link5/Kp/P Copy/Disabled'
 * '<S439>' : 'HIWIN_arm/link5/Kp/Parallel P Gain/Internal Parameters'
 * '<S440>' : 'HIWIN_arm/link5/Kp/Reset Signal/Disabled'
 * '<S441>' : 'HIWIN_arm/link5/Kp/Saturation/Passthrough'
 * '<S442>' : 'HIWIN_arm/link5/Kp/Saturation Fdbk/Disabled'
 * '<S443>' : 'HIWIN_arm/link5/Kp/Sum/Passthrough_P'
 * '<S444>' : 'HIWIN_arm/link5/Kp/Sum Fdbk/Disabled'
 * '<S445>' : 'HIWIN_arm/link5/Kp/Tracking Mode/Disabled'
 * '<S446>' : 'HIWIN_arm/link5/Kp/Tracking Mode Sum/Passthrough'
 * '<S447>' : 'HIWIN_arm/link5/Kp/Tsamp - Integral/Disabled wSignal Specification'
 * '<S448>' : 'HIWIN_arm/link5/Kp/Tsamp - Ngain/Passthrough'
 * '<S449>' : 'HIWIN_arm/link5/Kp/postSat Signal/Forward_Path'
 * '<S450>' : 'HIWIN_arm/link5/Kp/preSat Signal/Forward_Path'
 * '<S451>' : 'HIWIN_arm/link5/Kv/Anti-windup'
 * '<S452>' : 'HIWIN_arm/link5/Kv/D Gain'
 * '<S453>' : 'HIWIN_arm/link5/Kv/Filter'
 * '<S454>' : 'HIWIN_arm/link5/Kv/Filter ICs'
 * '<S455>' : 'HIWIN_arm/link5/Kv/I Gain'
 * '<S456>' : 'HIWIN_arm/link5/Kv/Ideal P Gain'
 * '<S457>' : 'HIWIN_arm/link5/Kv/Ideal P Gain Fdbk'
 * '<S458>' : 'HIWIN_arm/link5/Kv/Integrator'
 * '<S459>' : 'HIWIN_arm/link5/Kv/Integrator ICs'
 * '<S460>' : 'HIWIN_arm/link5/Kv/N Copy'
 * '<S461>' : 'HIWIN_arm/link5/Kv/N Gain'
 * '<S462>' : 'HIWIN_arm/link5/Kv/P Copy'
 * '<S463>' : 'HIWIN_arm/link5/Kv/Parallel P Gain'
 * '<S464>' : 'HIWIN_arm/link5/Kv/Reset Signal'
 * '<S465>' : 'HIWIN_arm/link5/Kv/Saturation'
 * '<S466>' : 'HIWIN_arm/link5/Kv/Saturation Fdbk'
 * '<S467>' : 'HIWIN_arm/link5/Kv/Sum'
 * '<S468>' : 'HIWIN_arm/link5/Kv/Sum Fdbk'
 * '<S469>' : 'HIWIN_arm/link5/Kv/Tracking Mode'
 * '<S470>' : 'HIWIN_arm/link5/Kv/Tracking Mode Sum'
 * '<S471>' : 'HIWIN_arm/link5/Kv/Tsamp - Integral'
 * '<S472>' : 'HIWIN_arm/link5/Kv/Tsamp - Ngain'
 * '<S473>' : 'HIWIN_arm/link5/Kv/postSat Signal'
 * '<S474>' : 'HIWIN_arm/link5/Kv/preSat Signal'
 * '<S475>' : 'HIWIN_arm/link5/Kv/Anti-windup/Passthrough'
 * '<S476>' : 'HIWIN_arm/link5/Kv/D Gain/Disabled'
 * '<S477>' : 'HIWIN_arm/link5/Kv/Filter/Disabled'
 * '<S478>' : 'HIWIN_arm/link5/Kv/Filter ICs/Disabled'
 * '<S479>' : 'HIWIN_arm/link5/Kv/I Gain/Internal Parameters'
 * '<S480>' : 'HIWIN_arm/link5/Kv/Ideal P Gain/Internal Parameters'
 * '<S481>' : 'HIWIN_arm/link5/Kv/Ideal P Gain Fdbk/Disabled'
 * '<S482>' : 'HIWIN_arm/link5/Kv/Integrator/Continuous'
 * '<S483>' : 'HIWIN_arm/link5/Kv/Integrator ICs/Internal IC'
 * '<S484>' : 'HIWIN_arm/link5/Kv/N Copy/Disabled wSignal Specification'
 * '<S485>' : 'HIWIN_arm/link5/Kv/N Gain/Disabled'
 * '<S486>' : 'HIWIN_arm/link5/Kv/P Copy/Disabled'
 * '<S487>' : 'HIWIN_arm/link5/Kv/Parallel P Gain/Passthrough'
 * '<S488>' : 'HIWIN_arm/link5/Kv/Reset Signal/Disabled'
 * '<S489>' : 'HIWIN_arm/link5/Kv/Saturation/Passthrough'
 * '<S490>' : 'HIWIN_arm/link5/Kv/Saturation Fdbk/Disabled'
 * '<S491>' : 'HIWIN_arm/link5/Kv/Sum/Sum_PI'
 * '<S492>' : 'HIWIN_arm/link5/Kv/Sum Fdbk/Disabled'
 * '<S493>' : 'HIWIN_arm/link5/Kv/Tracking Mode/Disabled'
 * '<S494>' : 'HIWIN_arm/link5/Kv/Tracking Mode Sum/Passthrough'
 * '<S495>' : 'HIWIN_arm/link5/Kv/Tsamp - Integral/Passthrough'
 * '<S496>' : 'HIWIN_arm/link5/Kv/Tsamp - Ngain/Passthrough'
 * '<S497>' : 'HIWIN_arm/link5/Kv/postSat Signal/Forward_Path'
 * '<S498>' : 'HIWIN_arm/link5/Kv/preSat Signal/Forward_Path'
 * '<S499>' : 'HIWIN_arm/link6/Kp'
 * '<S500>' : 'HIWIN_arm/link6/Kv'
 * '<S501>' : 'HIWIN_arm/link6/Kp/Anti-windup'
 * '<S502>' : 'HIWIN_arm/link6/Kp/D Gain'
 * '<S503>' : 'HIWIN_arm/link6/Kp/Filter'
 * '<S504>' : 'HIWIN_arm/link6/Kp/Filter ICs'
 * '<S505>' : 'HIWIN_arm/link6/Kp/I Gain'
 * '<S506>' : 'HIWIN_arm/link6/Kp/Ideal P Gain'
 * '<S507>' : 'HIWIN_arm/link6/Kp/Ideal P Gain Fdbk'
 * '<S508>' : 'HIWIN_arm/link6/Kp/Integrator'
 * '<S509>' : 'HIWIN_arm/link6/Kp/Integrator ICs'
 * '<S510>' : 'HIWIN_arm/link6/Kp/N Copy'
 * '<S511>' : 'HIWIN_arm/link6/Kp/N Gain'
 * '<S512>' : 'HIWIN_arm/link6/Kp/P Copy'
 * '<S513>' : 'HIWIN_arm/link6/Kp/Parallel P Gain'
 * '<S514>' : 'HIWIN_arm/link6/Kp/Reset Signal'
 * '<S515>' : 'HIWIN_arm/link6/Kp/Saturation'
 * '<S516>' : 'HIWIN_arm/link6/Kp/Saturation Fdbk'
 * '<S517>' : 'HIWIN_arm/link6/Kp/Sum'
 * '<S518>' : 'HIWIN_arm/link6/Kp/Sum Fdbk'
 * '<S519>' : 'HIWIN_arm/link6/Kp/Tracking Mode'
 * '<S520>' : 'HIWIN_arm/link6/Kp/Tracking Mode Sum'
 * '<S521>' : 'HIWIN_arm/link6/Kp/Tsamp - Integral'
 * '<S522>' : 'HIWIN_arm/link6/Kp/Tsamp - Ngain'
 * '<S523>' : 'HIWIN_arm/link6/Kp/postSat Signal'
 * '<S524>' : 'HIWIN_arm/link6/Kp/preSat Signal'
 * '<S525>' : 'HIWIN_arm/link6/Kp/Anti-windup/Disabled'
 * '<S526>' : 'HIWIN_arm/link6/Kp/D Gain/Disabled'
 * '<S527>' : 'HIWIN_arm/link6/Kp/Filter/Disabled'
 * '<S528>' : 'HIWIN_arm/link6/Kp/Filter ICs/Disabled'
 * '<S529>' : 'HIWIN_arm/link6/Kp/I Gain/Disabled'
 * '<S530>' : 'HIWIN_arm/link6/Kp/Ideal P Gain/Passthrough'
 * '<S531>' : 'HIWIN_arm/link6/Kp/Ideal P Gain Fdbk/Disabled'
 * '<S532>' : 'HIWIN_arm/link6/Kp/Integrator/Disabled'
 * '<S533>' : 'HIWIN_arm/link6/Kp/Integrator ICs/Disabled'
 * '<S534>' : 'HIWIN_arm/link6/Kp/N Copy/Disabled wSignal Specification'
 * '<S535>' : 'HIWIN_arm/link6/Kp/N Gain/Disabled'
 * '<S536>' : 'HIWIN_arm/link6/Kp/P Copy/Disabled'
 * '<S537>' : 'HIWIN_arm/link6/Kp/Parallel P Gain/Internal Parameters'
 * '<S538>' : 'HIWIN_arm/link6/Kp/Reset Signal/Disabled'
 * '<S539>' : 'HIWIN_arm/link6/Kp/Saturation/Passthrough'
 * '<S540>' : 'HIWIN_arm/link6/Kp/Saturation Fdbk/Disabled'
 * '<S541>' : 'HIWIN_arm/link6/Kp/Sum/Passthrough_P'
 * '<S542>' : 'HIWIN_arm/link6/Kp/Sum Fdbk/Disabled'
 * '<S543>' : 'HIWIN_arm/link6/Kp/Tracking Mode/Disabled'
 * '<S544>' : 'HIWIN_arm/link6/Kp/Tracking Mode Sum/Passthrough'
 * '<S545>' : 'HIWIN_arm/link6/Kp/Tsamp - Integral/Disabled wSignal Specification'
 * '<S546>' : 'HIWIN_arm/link6/Kp/Tsamp - Ngain/Passthrough'
 * '<S547>' : 'HIWIN_arm/link6/Kp/postSat Signal/Forward_Path'
 * '<S548>' : 'HIWIN_arm/link6/Kp/preSat Signal/Forward_Path'
 * '<S549>' : 'HIWIN_arm/link6/Kv/Anti-windup'
 * '<S550>' : 'HIWIN_arm/link6/Kv/D Gain'
 * '<S551>' : 'HIWIN_arm/link6/Kv/Filter'
 * '<S552>' : 'HIWIN_arm/link6/Kv/Filter ICs'
 * '<S553>' : 'HIWIN_arm/link6/Kv/I Gain'
 * '<S554>' : 'HIWIN_arm/link6/Kv/Ideal P Gain'
 * '<S555>' : 'HIWIN_arm/link6/Kv/Ideal P Gain Fdbk'
 * '<S556>' : 'HIWIN_arm/link6/Kv/Integrator'
 * '<S557>' : 'HIWIN_arm/link6/Kv/Integrator ICs'
 * '<S558>' : 'HIWIN_arm/link6/Kv/N Copy'
 * '<S559>' : 'HIWIN_arm/link6/Kv/N Gain'
 * '<S560>' : 'HIWIN_arm/link6/Kv/P Copy'
 * '<S561>' : 'HIWIN_arm/link6/Kv/Parallel P Gain'
 * '<S562>' : 'HIWIN_arm/link6/Kv/Reset Signal'
 * '<S563>' : 'HIWIN_arm/link6/Kv/Saturation'
 * '<S564>' : 'HIWIN_arm/link6/Kv/Saturation Fdbk'
 * '<S565>' : 'HIWIN_arm/link6/Kv/Sum'
 * '<S566>' : 'HIWIN_arm/link6/Kv/Sum Fdbk'
 * '<S567>' : 'HIWIN_arm/link6/Kv/Tracking Mode'
 * '<S568>' : 'HIWIN_arm/link6/Kv/Tracking Mode Sum'
 * '<S569>' : 'HIWIN_arm/link6/Kv/Tsamp - Integral'
 * '<S570>' : 'HIWIN_arm/link6/Kv/Tsamp - Ngain'
 * '<S571>' : 'HIWIN_arm/link6/Kv/postSat Signal'
 * '<S572>' : 'HIWIN_arm/link6/Kv/preSat Signal'
 * '<S573>' : 'HIWIN_arm/link6/Kv/Anti-windup/Passthrough'
 * '<S574>' : 'HIWIN_arm/link6/Kv/D Gain/Disabled'
 * '<S575>' : 'HIWIN_arm/link6/Kv/Filter/Disabled'
 * '<S576>' : 'HIWIN_arm/link6/Kv/Filter ICs/Disabled'
 * '<S577>' : 'HIWIN_arm/link6/Kv/I Gain/Internal Parameters'
 * '<S578>' : 'HIWIN_arm/link6/Kv/Ideal P Gain/Internal Parameters'
 * '<S579>' : 'HIWIN_arm/link6/Kv/Ideal P Gain Fdbk/Disabled'
 * '<S580>' : 'HIWIN_arm/link6/Kv/Integrator/Continuous'
 * '<S581>' : 'HIWIN_arm/link6/Kv/Integrator ICs/Internal IC'
 * '<S582>' : 'HIWIN_arm/link6/Kv/N Copy/Disabled wSignal Specification'
 * '<S583>' : 'HIWIN_arm/link6/Kv/N Gain/Disabled'
 * '<S584>' : 'HIWIN_arm/link6/Kv/P Copy/Disabled'
 * '<S585>' : 'HIWIN_arm/link6/Kv/Parallel P Gain/Passthrough'
 * '<S586>' : 'HIWIN_arm/link6/Kv/Reset Signal/Disabled'
 * '<S587>' : 'HIWIN_arm/link6/Kv/Saturation/Passthrough'
 * '<S588>' : 'HIWIN_arm/link6/Kv/Saturation Fdbk/Disabled'
 * '<S589>' : 'HIWIN_arm/link6/Kv/Sum/Sum_PI'
 * '<S590>' : 'HIWIN_arm/link6/Kv/Sum Fdbk/Disabled'
 * '<S591>' : 'HIWIN_arm/link6/Kv/Tracking Mode/Disabled'
 * '<S592>' : 'HIWIN_arm/link6/Kv/Tracking Mode Sum/Passthrough'
 * '<S593>' : 'HIWIN_arm/link6/Kv/Tsamp - Integral/Passthrough'
 * '<S594>' : 'HIWIN_arm/link6/Kv/Tsamp - Ngain/Passthrough'
 * '<S595>' : 'HIWIN_arm/link6/Kv/postSat Signal/Forward_Path'
 * '<S596>' : 'HIWIN_arm/link6/Kv/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_HIWIN_arm_h_ */
