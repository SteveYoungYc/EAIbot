#ifndef LOADEAIDLL_H
#define LOADEAIDLL_H
#pragma once

#include <Windows.h>
#include <atltypes.h>

extern HMODULE				g_hEAIdll;//动态库句柄

///////////////////////////////////////////////////////////////////////////////////////
typedef bool(__stdcall* InitDll)(HWND parent, int iWorkMode, int iBeatPacketMs, char* strIP, int iVersion, int iPointCloudMs, int iPoseMs, int iScanMapMs);
extern InitDll					   VC_InitDll;

typedef bool(__stdcall* ReleaseDll)(void);
extern ReleaseDll				   VC_ReleaseDll;

typedef void(__stdcall* CallbackFun)(int  iMsgID, DWORD dwDataLen, char* pBuff);

typedef void(__stdcall* SetCallBackFun)(CallbackFun callbackfun);
extern SetCallBackFun              VC_CallBackFun;

///////////////////////////////////////////////////
typedef int(__stdcall* EAILogin)(char* chUserName, char* chPassword);
extern EAILogin						VC_EAILogin;

typedef int(__stdcall* ChangePwd)(char* chUserName, char* chPassword);
extern ChangePwd				    VC_ChangePwd;

typedef int(__stdcall* RecordData)(int iCmd, char* chName);
extern RecordData				    VC_RecordData;

typedef int(__stdcall* GetDataBagList)(void);
extern GetDataBagList				VC_GetDataBagList;

typedef int(__stdcall* GetMapList)(void);
extern GetMapList				    VC_GetMapList;

typedef int(__stdcall* GetMissionList)(void);
extern GetMissionList			    VC_GetMissionList;

typedef int(__stdcall* GetMapByName)(char* chMapName);
extern GetMapByName			        VC_GetMapByName;

typedef int(__stdcall* GetMapResourceByName)(char* chMapName);
extern GetMapResourceByName			VC_GetMapResourceByName;

typedef int(__stdcall* SaveMapByName)(int iMode, char* chMapName);
extern SaveMapByName			    VC_SaveMapByName;

typedef int(__stdcall* SaveMapByNameAndData)(int iMode, char* chMapName, char* pData, UINT32 u32DataLen);
extern SaveMapByNameAndData   	    VC_SaveMapByNameAndData;


typedef int(__stdcall* GetMissionByName)(char* chMissionName);
extern GetMissionByName			    VC_GetMissionByName;

typedef int(__stdcall* DirectionControl)(float fLinear_x, float fAngle_z);
extern DirectionControl				VC_DirectionControl;

typedef int(__stdcall* StatusControl)(int iStatus, char* pName);
extern StatusControl				VC_StatusControl;

typedef int(__stdcall* GetStatus)(void);
extern GetStatus				    VC_GetStatus;

typedef int(__stdcall* DeleteSourceByName)(int iMode, char* pName);
extern DeleteSourceByName			VC_DeleteSourceByName;


typedef int(__stdcall* SaveTargetByName)(char* chMapName, char* chTargetName, char* chData);
extern SaveTargetByName			    VC_SaveTargetByName;

typedef int(__stdcall* SavePathByName)(char* chMapName, char* chPathName, char* chData);
extern SavePathByName			    VC_SavePathByName;

typedef int(__stdcall* SaveVirPointsByName)(char* chMapName, char* chData);
extern SaveVirPointsByName			VC_SaveVirPointsByName;

typedef int(__stdcall* SaveMissionByName)(char* chMapName, char* chMissionName, char* chParaData, char* chActionData);
extern SaveMissionByName			VC_SaveMissionByName;


typedef int(__stdcall* SetBotPose)(float fX, float fY, float fPhi);
extern SetBotPose				    VC_SetBotPose;


typedef int(__stdcall* GetParameters)(void);
extern GetParameters				VC_GetParameters;

typedef int(__stdcall* SaveParameters)(char* chData);
extern SaveParameters			    VC_SaveParameters;


typedef int(__stdcall* GetSystemVersion)(char* chData);
extern GetSystemVersion    	        VC_GetSystemVersion;


#if EAI_DEBUG
typedef int(__stdcall* SetPubData)(int iGlobalCostMap, int iLocalCostMap, int iGlobalPath, int iLocalPath);
extern SetPubData					VC_SetPubData;
#endif

typedef int(__stdcall* EAIDownloadFile)(int iType, char* chName, BOOL bReDownload);
extern EAIDownloadFile			    VC_EAIDownloadFile;

typedef int(__stdcall* EAIUpdateFile)(char* chPath, BOOL bRollBack);
extern EAIUpdateFile				VC_EAIUpdateFile;
/////////////////////////////////////////////////////////////////


////////////////////////////////////////////////VER2
//////////////////////////////////////////////VER2
typedef int(__stdcall* EAIMappingControl)(char* chName, int iMode);//0,开始建图，1关闭建图，2保存地图
extern EAIMappingControl    	        VC_EAIMappingControl;

typedef int(__stdcall* EAIAddTarget)(char* chName, float fX, float fY, float fPhi, int iType);
extern EAIAddTarget                     VC_EAIAddTarget;

typedef int(__stdcall* EAISaveTarget)(char* chName, int iType);
extern EAISaveTarget                    VC_EAISaveTarget;

typedef int(__stdcall* EAIStopNavigation)(void);
extern EAIStopNavigation                VC_EAIStopNavigation;

typedef int(__stdcall* EAIGotoTarget)(char* chName);
extern EAIGotoTarget                    VC_EAIGotoTarget;

typedef int(__stdcall* EAIMissionControl)(char* chName, int iMode);//0开始建图，1关闭建图，2保存地图
extern EAIMissionControl    	        VC_EAIMissionControl;

typedef int(__stdcall* EAIDriverControl)(int iMode);//0关闭驱动，1打开驱动，2强制关闭驱动
extern EAIDriverControl    	            VC_EAIDriverControl;

typedef int(__stdcall* EAIGoRecharge)(void);
extern EAIGoRecharge                    VC_EAIGoRecharge;

typedef int(__stdcall* EAINavigateAnyPose)(float fX, float fY, float fPhi);
extern EAINavigateAnyPose               VC_EAINavigateAnyPose;

typedef int(__stdcall* EAIGoLine)(float fDistance, float fLineX, float fError);
extern EAIGoLine                        VC_EAIGoLine;

typedef int(__stdcall* EAIGoRotate)(float fAngule, float fAngZ, float fError);
extern EAIGoRotate                      VC_EAIGoRotate;

typedef int(__stdcall* EAIDobotControl)(int iMode, char* pBuff);
extern EAIDobotControl                 VC_EAIDobotControl;

typedef int(__stdcall* EAIDobotAddTarget)(const char* chName, const char* chData);
extern EAIDobotAddTarget               VC_EAIDobotAddTarget;

typedef int(__stdcall* EAIDobotGetTarget)(const char* chName);
extern EAIDobotGetTarget               VC_EAIDobotGetTarget;

typedef int(__stdcall* EAITxSmallFile)(int iFileType, const char* chData);
extern EAITxSmallFile                  VC_EAITxSmallFile;

typedef int(__stdcall* EAIRebootRosServer)(void);
extern EAIRebootRosServer              VC_EAIRebootRosServer;


////////////////////////////////////////////////VER1
//////////////////////////////////////////////VER1
typedef int(__stdcall* SetBotPoseB)(int  iX, int  iY, float  fPhi);
extern SetBotPoseB    	               VC_SetBotPoseB;

typedef int(__stdcall* SetBotInitPoseB)(char* chTargetName);
extern SetBotInitPoseB 	               VC_SetBotInitPoseB;

typedef int(__stdcall* StopBotInitPoseB)(void);
extern StopBotInitPoseB                VC_StopBotInitPoseB;

typedef int(__stdcall* GetBotInitPoseStatusB)(void);
extern GetBotInitPoseStatusB           VC_GetBotInitPoseStatusB;

typedef int(__stdcall* SelectMapByName)(char* chMapName);
extern SelectMapByName                 VC_SelectMapByName;

typedef int(__stdcall* SaveTargetByNameB)(char* chName, int iType);
extern SaveTargetByNameB               VC_SaveTargetByNameB;

typedef int(__stdcall* GetTargetsB)(void);
extern GetTargetsB                     VC_GetTargetsB;

typedef int(__stdcall* AddTargetB)(char* chName, int iX, int iY, float fPhi, int iType);
extern AddTargetB                      VC_AddTargetB;

typedef int(__stdcall* NavigateTargetB)(char* chTargetName);
extern NavigateTargetB                 VC_NavigateTargetB;

typedef int(__stdcall* NavigateTargetAnyB)(int iX, int iY, float fPhi);
extern NavigateTargetAnyB              VC_NavigateTargetAnyB;

typedef int(__stdcall* NavigateTargetControlB)(int iMode);
extern NavigateTargetControlB          VC_NavigateTargetControlB;

typedef int(__stdcall* PathAcitionListB)(void);
extern PathAcitionListB                VC_PathAcitionListB;


typedef int(__stdcall* PathVerifyTwoPointGenLineB)(int iX1, int iY1, int iX2, int iY2, float fRadius);
extern PathVerifyTwoPointGenLineB      VC_PathVerifyTwoPointGenLineB;

typedef int(__stdcall* PathVerifyMultiLinesGenPathB)(char* chMultiLines);
extern PathVerifyMultiLinesGenPathB    VC_PathVerifyMultiLinesGenPathB;

typedef int(__stdcall* PathGenGraphPathB)(char* chName, char* chData);
extern PathGenGraphPathB               VC_PathGenGraphPathB;

typedef int(__stdcall* PathUpdateGraphPathB)(char* chName, char* chData);
extern PathUpdateGraphPathB            VC_PathUpdateGraphPathB;


typedef int(__stdcall* PathVerifyGraphPathB)(char* chName, char* chData);
extern PathVerifyGraphPathB            VC_PathVerifyGraphPathB;

typedef int(__stdcall* PathGetGraphPathB)(void);
extern PathGetGraphPathB               VC_PathGetGraphPathB;

typedef int(__stdcall* PathDeleteGraphPathB)(char* chName);
extern PathDeleteGraphPathB            VC_PathDeleteGraphPathB;

typedef int(__stdcall* PathRenameGraphPathB)(char* chName, char* chNewName);
extern PathRenameGraphPathB            VC_PathRenameGraphPathB;

typedef int(__stdcall* PathGetPathB)(void);
extern PathGetPathB                    VC_PathGetPathB;

typedef int(__stdcall* PathDeletePathB)(char* chName);
extern PathDeletePathB                 VC_PathDeletePathB;

typedef int(__stdcall* PathRenamePathB)(char* chName, char* chNewName);
extern PathRenamePathB                 VC_PathRenamePathB;

typedef int(__stdcall* PathStartRecordPathB)(char* chName, int iMode);
extern PathStartRecordPathB            VC_PathStartRecordPathB;

typedef int(__stdcall* PathControlRecordPathB)(int iMode, int iStatus);
extern PathControlRecordPathB          VC_PathControlRecordPathB;

typedef int(__stdcall* PathAddPathActionPointB)(char* chData);
extern PathAddPathActionPointB         VC_PathAddPathActionPointB;

typedef int(__stdcall* PathGetPathInfoB)(char* chName);
extern PathGetPathInfoB                VC_PathGetPathInfoB;

typedef int(__stdcall* GetVirPointInfoB)(void);
extern GetVirPointInfoB                VC_GetVirPointInfoB;

typedef int(__stdcall* UpdateVirPointInfoB)(char* chData);
extern UpdateVirPointInfoB             VC_UpdateVirPointInfoB;



typedef int(__stdcall* AddMissionB)(char* chName, char* chData, int iLoop);
extern AddMissionB                     VC_AddMissionB;

typedef int(__stdcall* StartMissionB)(char* chName, int iLoop, int iLoopCount);
extern StartMissionB                   VC_StartMissionB;

typedef int(__stdcall* MotorControl)(int iMode);
extern MotorControl                    VC_MotorControl;

typedef int(__stdcall* SpeedControl)(int iMode, int iLevel);
extern SpeedControl                    VC_SpeedControl;

typedef int(__stdcall* MissionControl)(int iStatus);
extern MissionControl                  VC_MissionControl;

typedef int(__stdcall* CloseSystem)(void);
extern CloseSystem                     VC_CloseSystem;

typedef int(__stdcall* GetMissionIsFinished)(void);
extern GetMissionIsFinished            VC_GetMissionIsFinished;

typedef int(__stdcall* MoveTo)(float fDistance, float fLinear_x);
extern MoveTo                          VC_MoveTo;

typedef int(__stdcall* StopMoveTo)(void);
extern StopMoveTo                      VC_StopMoveTo;

typedef int(__stdcall* IsMoveToFinished)(void);
extern IsMoveToFinished                VC_IsMoveToFinished;

typedef int(__stdcall* RotateBot)(float fAngle, float  fAngle_z);
extern RotateBot                       VC_RotateBot;

typedef int(__stdcall* StopRotate)(void);
extern StopRotate                      VC_StopRotate;

typedef int(__stdcall* IsRotateFinished)(void);
extern IsRotateFinished                VC_IsRotateFinished;

typedef int(__stdcall* IsNetWorkConnected)(void);
extern IsNetWorkConnected              VC_IsNetWorkConnected;

typedef char* (__stdcall* EAIGetRosbotIP)(void);
extern EAIGetRosbotIP				   VC_EAIGetRosbotIP;

/****************加载和卸载动态库**************************/
bool LoadEAIdll(void);

bool UnloadEAIdll(void);

#endif
