#include "LoadEAIDll.h"
#include <iostream>

HMODULE g_hEAIdll = NULL;

/***************通用函数******************/
InitDll						    VC_InitDll = NULL;
SetCallBackFun                  VC_CallBackFun = NULL;
ReleaseDll				        VC_ReleaseDll = NULL;
EAILogin						VC_EAILogin = NULL;
ChangePwd						VC_ChangePwd = NULL;
GetMapList				        VC_GetMapList = NULL;
GetMissionList			        VC_GetMissionList = NULL;
GetMapByName                    VC_GetMapByName = NULL;
GetMapResourceByName			VC_GetMapResourceByName = NULL;
SaveMapByName                   VC_SaveMapByName = NULL;
SaveMapByNameAndData            VC_SaveMapByNameAndData = NULL;
GetMissionByName			    VC_GetMissionByName = NULL;
DirectionControl			    VC_DirectionControl = NULL;
StatusControl     			    VC_StatusControl = NULL;

GetStatus        			    VC_GetStatus = NULL;
DeleteSourceByName			    VC_DeleteSourceByName = NULL;
SaveTargetByName			    VC_SaveTargetByName = NULL;
SavePathByName			        VC_SavePathByName = NULL;
SaveVirPointsByName			    VC_SaveVirPointsByName = NULL;
SaveMissionByName			    VC_SaveMissionByName = NULL;
SetBotPose					    VC_SetBotPose = NULL;

GetParameters				    VC_GetParameters = NULL;
SaveParameters			        VC_SaveParameters = NULL;
GetSystemVersion    	        VC_GetSystemVersion = NULL;
RecordData				        VC_RecordData = NULL;
GetDataBagList				    VC_GetDataBagList = NULL;
EAIDownloadFile				    VC_EAIDownloadFile = NULL;
EAIUpdateFile				    VC_EAIUpdateFile = NULL;
EAIGetRosbotIP				    VC_EAIGetRosbotIP = NULL;


#if EAI_DEBUG
SetPubData					    VC_SetPubData = NULL;
#endif


//////////////////////////////////////////////VER2  rosbot
EAIMappingControl   	        VC_EAIMappingControl = NULL;
EAIAddTarget                    VC_EAIAddTarget = NULL;
EAISaveTarget                   VC_EAISaveTarget = NULL;
EAIStopNavigation               VC_EAIStopNavigation = NULL;
EAIGotoTarget                   VC_EAIGotoTarget = NULL;
EAIMissionControl    	        VC_EAIMissionControl = NULL;
EAIDriverControl    	        VC_EAIDriverControl = NULL;
EAIGoRecharge                   VC_EAIGoRecharge = NULL;
EAINavigateAnyPose              VC_EAINavigateAnyPose = NULL;
EAIGoLine                       VC_EAIGoLine = NULL;
EAIGoRotate                     VC_EAIGoRotate = NULL;
EAIDobotControl                 VC_EAIDobotControl = NULL;
EAIDobotAddTarget               VC_EAIDobotAddTarget = NULL;
EAIDobotGetTarget               VC_EAIDobotGetTarget = NULL;
EAITxSmallFile                  VC_EAITxSmallFile = NULL;
EAIRebootRosServer              VC_EAIRebootRosServer = NULL;


//////////////////////////////////////////////VER1
SetBotPoseB    	                VC_SetBotPoseB = NULL;
SetBotInitPoseB 	            VC_SetBotInitPoseB = NULL;
StopBotInitPoseB 	            VC_StopBotInitPoseB = NULL;
GetBotInitPoseStatusB           VC_GetBotInitPoseStatusB = NULL;
SelectMapByName                 VC_SelectMapByName = NULL;
SaveTargetByNameB               VC_SaveTargetByNameB = NULL;
GetTargetsB                     VC_GetTargetsB = NULL;
MissionControl                  VC_MissionControl = NULL;
CloseSystem                     VC_CloseSystem = NULL;
GetMissionIsFinished            VC_GetMissionIsFinished = NULL;
NavigateTargetB                 VC_NavigateTargetB = NULL;
NavigateTargetAnyB              VC_NavigateTargetAnyB = NULL;
NavigateTargetControlB          VC_NavigateTargetControlB = NULL;
PathAcitionListB                VC_PathAcitionListB = NULL;
PathVerifyTwoPointGenLineB      VC_PathVerifyTwoPointGenLineB = NULL;
PathVerifyMultiLinesGenPathB    VC_PathVerifyMultiLinesGenPathB = NULL;
PathGenGraphPathB               VC_PathGenGraphPathB = NULL;
PathUpdateGraphPathB            VC_PathUpdateGraphPathB = NULL;
PathVerifyGraphPathB            VC_PathVerifyGraphPathB = NULL;
PathGetGraphPathB               VC_PathGetGraphPathB = NULL;
PathDeleteGraphPathB            VC_PathDeleteGraphPathB = NULL;
PathRenameGraphPathB            VC_PathRenameGraphPathB = NULL;
PathGetPathB                    VC_PathGetPathB = NULL;
PathDeletePathB                 VC_PathDeletePathB = NULL;
PathRenamePathB                 VC_PathRenamePathB = NULL;
PathStartRecordPathB            VC_PathStartRecordPathB = NULL;
PathControlRecordPathB          VC_PathControlRecordPathB = NULL;
PathAddPathActionPointB         VC_PathAddPathActionPointB = NULL;
PathGetPathInfoB                VC_PathGetPathInfoB = NULL;
GetVirPointInfoB                VC_GetVirPointInfoB = NULL;
UpdateVirPointInfoB             VC_UpdateVirPointInfoB = NULL;
AddTargetB                      VC_AddTargetB = NULL;
AddMissionB                     VC_AddMissionB = NULL;
StartMissionB                   VC_StartMissionB = NULL;
MotorControl                    VC_MotorControl = NULL;
SpeedControl                    VC_SpeedControl = NULL;
MoveTo                          VC_MoveTo = NULL;
StopMoveTo                      VC_StopMoveTo = NULL;
IsMoveToFinished                VC_IsMoveToFinished = NULL;
RotateBot                       VC_RotateBot = NULL;
StopRotate                      VC_StopRotate = NULL;
IsRotateFinished                VC_IsRotateFinished = NULL;
IsNetWorkConnected              VC_IsNetWorkConnected = NULL;
/***********加载动态库****************/

bool LoadEAIdll(void)
{
	g_hEAIdll = LoadLibrary(L"EAIDll.dll");
	if (!g_hEAIdll)
	{
		std::cout << "????????????" << std::endl;
		return false;
	}
	/***************加载通用函数******************/


	VC_InitDll = (InitDll)GetProcAddress(g_hEAIdll, "InitDll");
	if (VC_InitDll == NULL)
	{
		return false;
	}

	VC_ReleaseDll = (ReleaseDll)GetProcAddress(g_hEAIdll, "ReleaseDll");
	if (VC_ReleaseDll == NULL)
	{
		return false;
	}


	VC_CallBackFun = (SetCallBackFun)GetProcAddress(g_hEAIdll, "SetCallBackFun");
	if (VC_CallBackFun == NULL)
	{
		return false;
	}

	VC_EAIRebootRosServer = (EAIRebootRosServer)GetProcAddress(g_hEAIdll, "EAIRebootRosServer");
	if (VC_EAIRebootRosServer == NULL)
	{
		return false;
	}
	VC_EAITxSmallFile = (EAITxSmallFile)GetProcAddress(g_hEAIdll, "EAITxSmallFile");
	if (VC_EAITxSmallFile == NULL)
	{
		return false;
	}
	VC_EAIDobotGetTarget = (EAIDobotGetTarget)GetProcAddress(g_hEAIdll, "EAIDobotGetTarget");
	if (VC_EAIDobotGetTarget == NULL)
	{
		return false;
	}
	VC_EAIDobotAddTarget = (EAIDobotAddTarget)GetProcAddress(g_hEAIdll, "EAIDobotAddTarget");
	if (VC_EAIDobotAddTarget == NULL)
	{
		return false;
	}
	VC_EAIDobotControl = (EAIDobotControl)GetProcAddress(g_hEAIdll, "EAIDobotControl");
	if (VC_EAIDobotControl == NULL)
	{
		return false;
	}

	VC_EAIGoRecharge = (EAIGoRecharge)GetProcAddress(g_hEAIdll, "EAIGoRecharge");
	if (VC_EAIGoRecharge == NULL)
	{
		return false;
	}

	VC_EAINavigateAnyPose = (EAINavigateAnyPose)GetProcAddress(g_hEAIdll, "EAINavigateAnyPose");
	if (VC_EAINavigateAnyPose == NULL)
	{
		return false;
	}

	VC_EAIGoLine = (EAIGoLine)GetProcAddress(g_hEAIdll, "EAIGoLine");
	if (VC_EAIGoLine == NULL)
	{
		return false;
	}

	VC_EAIGoRotate = (EAIGoRotate)GetProcAddress(g_hEAIdll, "EAIGoRotate");
	if (VC_EAIGoRotate == NULL)
	{
		return false;
	}

	VC_EAIDriverControl = (EAIDriverControl)GetProcAddress(g_hEAIdll, "EAIDriverControl");
	if (VC_EAIDriverControl == NULL)
	{
		return false;
	}

	VC_EAIMissionControl = (EAIMissionControl)GetProcAddress(g_hEAIdll, "EAIMissionControl");
	if (VC_EAIMissionControl == NULL)
	{
		return false;
	}

	VC_EAIGotoTarget = (EAIGotoTarget)GetProcAddress(g_hEAIdll, "EAIGotoTarget");
	if (VC_EAIGotoTarget == NULL)
	{
		return false;
	}

	VC_EAIStopNavigation = (EAIStopNavigation)GetProcAddress(g_hEAIdll, "EAIStopNavigation");
	if (VC_EAIStopNavigation == NULL)
	{
		return false;
	}

	VC_EAIMappingControl = (EAIMappingControl)GetProcAddress(g_hEAIdll, "EAIMappingControl");
	if (VC_EAIMappingControl == NULL)
	{
		return false;
	}

	VC_EAIAddTarget = (EAIAddTarget)GetProcAddress(g_hEAIdll, "EAIAddTarget");
	if (VC_EAIAddTarget == NULL)
	{
		return false;
	}

	VC_EAISaveTarget = (EAISaveTarget)GetProcAddress(g_hEAIdll, "EAISaveTarget");
	if (VC_EAISaveTarget == NULL)
	{
		return false;
	}

	VC_EAIGetRosbotIP = (EAIGetRosbotIP)GetProcAddress(g_hEAIdll, "EAIGetRosbotIP");
	if (VC_EAIGetRosbotIP == NULL)
	{
		return false;
	}

	VC_GetMapResourceByName = (GetMapResourceByName)GetProcAddress(g_hEAIdll, "GetMapResourceByName");
	if (VC_GetMapResourceByName == NULL)
	{
		return false;
	}

	VC_EAIUpdateFile = (EAIUpdateFile)GetProcAddress(g_hEAIdll, "EAIUpdateFile");
	if (VC_EAIUpdateFile == NULL)
	{
		return false;
	}

	VC_IsNetWorkConnected = (IsNetWorkConnected)GetProcAddress(g_hEAIdll, "IsNetWorkConnected");
	if (VC_IsNetWorkConnected == NULL)
	{
		return false;
	}

	VC_IsRotateFinished = (IsRotateFinished)GetProcAddress(g_hEAIdll, "IsRotateFinished");
	if (VC_IsRotateFinished == NULL)
	{
		return false;
	}

	VC_StopRotate = (StopRotate)GetProcAddress(g_hEAIdll, "StopRotate");
	if (VC_StopRotate == NULL)
	{
		return false;
	}

	VC_IsMoveToFinished = (IsMoveToFinished)GetProcAddress(g_hEAIdll, "IsMoveToFinished");
	if (VC_IsMoveToFinished == NULL)
	{
		return false;
	}


	VC_MoveTo = (MoveTo)GetProcAddress(g_hEAIdll, "MoveTo");
	if (VC_MoveTo == NULL)
	{
		return false;
	}

	VC_StopMoveTo = (StopMoveTo)GetProcAddress(g_hEAIdll, "StopMoveTo");
	if (VC_StopMoveTo == NULL)
	{
		return false;
	}


	VC_EAIDownloadFile = (EAIDownloadFile)GetProcAddress(g_hEAIdll, "EAIDownloadFile");
	if (VC_EAIDownloadFile == NULL)
	{
		return false;
	}

	VC_ChangePwd = (ChangePwd)GetProcAddress(g_hEAIdll, "ChangePwd");
	if (VC_ChangePwd == NULL)
	{
		return false;
	}

	VC_RecordData = (RecordData)GetProcAddress(g_hEAIdll, "RecordData");
	if (VC_RecordData == NULL)
	{
		return false;
	}

	VC_GetDataBagList = (GetDataBagList)GetProcAddress(g_hEAIdll, "GetDataBagList");
	if (VC_GetDataBagList == NULL)
	{
		return false;
	}



	VC_GetMapList = (GetMapList)GetProcAddress(g_hEAIdll, "GetMapList");
	if (VC_GetMapList == NULL)
	{
		return false;
	}

	VC_GetMissionList = (GetMissionList)GetProcAddress(g_hEAIdll, "GetMissionList");
	if (VC_GetMissionList == NULL)
	{
		return false;
	}

	VC_GetMapByName = (GetMapByName)GetProcAddress(g_hEAIdll, "GetMapByName");
	if (VC_GetMapByName == NULL)
	{
		return false;
	}

	VC_SaveMapByName = (SaveMapByName)GetProcAddress(g_hEAIdll, "SaveMapByName");
	if (VC_SaveMapByName == NULL)
	{
		return false;
	}

	VC_SaveMapByNameAndData = (SaveMapByNameAndData)GetProcAddress(g_hEAIdll, "SaveMapByNameAndData");
	if (VC_SaveMapByNameAndData == NULL)
	{
		return false;
	}

	VC_SaveMissionByName = (SaveMissionByName)GetProcAddress(g_hEAIdll, "SaveMissionByName");
	if (VC_SaveMissionByName == NULL)
	{
		return false;
	}


	VC_GetMissionByName = (GetMissionByName)GetProcAddress(g_hEAIdll, "GetMissionByName");
	if (VC_GetMissionByName == NULL)
	{
		return false;
	}

	VC_DeleteSourceByName = (DeleteSourceByName)GetProcAddress(g_hEAIdll, "DeleteSourceByName");
	if (VC_DeleteSourceByName == NULL)
	{
		return false;
	}

	VC_DirectionControl = (DirectionControl)GetProcAddress(g_hEAIdll, "DirectionControl");
	if (VC_DirectionControl == NULL)
	{
		return false;
	}

	VC_SetBotPose = (SetBotPose)GetProcAddress(g_hEAIdll, "SetBotPose");
	if (VC_SetBotPose == NULL)
	{
		return false;
	}


#if EAI_DEBUG
	VC_SetPubData = (SetPubData)GetProcAddress(g_hEAIdll, "SetPubData");
	if (VC_SetPubData == NULL)
	{
		return false;
	}
#endif

	VC_EAILogin = (EAILogin)GetProcAddress(g_hEAIdll, "EAILogin");
	if (VC_EAILogin == NULL)
	{
		return false;
	}

	VC_StatusControl = (StatusControl)GetProcAddress(g_hEAIdll, "StatusControl");
	if (VC_StatusControl == NULL)
	{
		return false;
	}

	VC_GetStatus = (GetStatus)GetProcAddress(g_hEAIdll, "GetStatus");
	if (VC_GetStatus == NULL)
	{
		return false;
	}

	VC_SaveTargetByName = (SaveTargetByName)GetProcAddress(g_hEAIdll, "SaveTargetByName");
	if (VC_SaveTargetByName == NULL)
	{
		return false;
	}

	VC_SavePathByName = (SavePathByName)GetProcAddress(g_hEAIdll, "SavePathByName");
	if (VC_SavePathByName == NULL)
	{
		return false;
	}


	VC_GetParameters = (GetParameters)GetProcAddress(g_hEAIdll, "GetParameters");
	if (VC_GetParameters == NULL)
	{
		return false;
	}


	VC_SaveParameters = (SaveParameters)GetProcAddress(g_hEAIdll, "SaveParameters");
	if (VC_SaveParameters == NULL)
	{
		return false;
	}

	VC_GetSystemVersion = (GetSystemVersion)GetProcAddress(g_hEAIdll, "GetSystemVersion");
	if (VC_GetSystemVersion == NULL)
	{
		return false;
	}

	VC_SaveVirPointsByName = (SaveVirPointsByName)GetProcAddress(g_hEAIdll, "SaveVirPointsByName");
	if (VC_SaveVirPointsByName == NULL)
	{
		return false;
	}

	////////////////////////////////////////VER1
	VC_SpeedControl = (SpeedControl)GetProcAddress(g_hEAIdll, "SpeedControl");
	if (VC_SpeedControl == NULL)
	{
		return false;
	}

	VC_MotorControl = (MotorControl)GetProcAddress(g_hEAIdll, "MotorControl");
	if (VC_MotorControl == NULL)
	{
		return false;
	}

	VC_StartMissionB = (StartMissionB)GetProcAddress(g_hEAIdll, "StartMissionB");
	if (VC_StartMissionB == NULL)
	{
		return false;
	}

	VC_AddMissionB = (AddMissionB)GetProcAddress(g_hEAIdll, "AddMissionB");
	if (VC_AddMissionB == NULL)
	{
		return false;
	}

	VC_AddTargetB = (AddTargetB)GetProcAddress(g_hEAIdll, "AddTargetB");
	if (VC_AddTargetB == NULL)
	{
		return false;
	}


	VC_UpdateVirPointInfoB = (UpdateVirPointInfoB)GetProcAddress(g_hEAIdll, "UpdateVirPointInfoB");
	if (VC_UpdateVirPointInfoB == NULL)
	{
		return false;
	}

	VC_GetVirPointInfoB = (GetVirPointInfoB)GetProcAddress(g_hEAIdll, "GetVirPointInfoB");
	if (VC_GetVirPointInfoB == NULL)
	{
		return false;
	}

	VC_PathGetPathInfoB = (PathGetPathInfoB)GetProcAddress(g_hEAIdll, "PathGetPathInfoB");
	if (VC_PathGetPathInfoB == NULL)
	{
		return false;
	}

	VC_PathAddPathActionPointB = (PathAddPathActionPointB)GetProcAddress(g_hEAIdll, "PathAddPathActionPointB");
	if (VC_PathAddPathActionPointB == NULL)
	{
		return false;
	}

	VC_PathControlRecordPathB = (PathControlRecordPathB)GetProcAddress(g_hEAIdll, "PathControlRecordPathB");
	if (VC_PathControlRecordPathB == NULL)
	{
		return false;
	}

	VC_PathStartRecordPathB = (PathStartRecordPathB)GetProcAddress(g_hEAIdll, "PathStartRecordPathB");
	if (VC_PathStartRecordPathB == NULL)
	{
		return false;
	}

	VC_PathRenamePathB = (PathRenamePathB)GetProcAddress(g_hEAIdll, "PathRenamePathB");
	if (VC_PathRenamePathB == NULL)
	{
		return false;
	}

	VC_PathDeletePathB = (PathDeletePathB)GetProcAddress(g_hEAIdll, "PathDeletePathB");
	if (VC_PathDeletePathB == NULL)
	{
		return false;
	}

	VC_PathGetPathB = (PathGetPathB)GetProcAddress(g_hEAIdll, "PathGetPathB");
	if (VC_PathGetPathB == NULL)
	{
		return false;
	}

	VC_PathRenameGraphPathB = (PathRenameGraphPathB)GetProcAddress(g_hEAIdll, "PathRenameGraphPathB");
	if (VC_PathRenameGraphPathB == NULL)
	{
		return false;
	}

	VC_PathDeleteGraphPathB = (PathDeleteGraphPathB)GetProcAddress(g_hEAIdll, "PathDeleteGraphPathB");
	if (VC_PathDeleteGraphPathB == NULL)
	{
		return false;
	}

	VC_PathGetGraphPathB = (PathGetGraphPathB)GetProcAddress(g_hEAIdll, "PathGetGraphPathB");
	if (VC_PathGetGraphPathB == NULL)
	{
		return false;
	}


	VC_PathVerifyGraphPathB = (PathVerifyGraphPathB)GetProcAddress(g_hEAIdll, "PathVerifyGraphPathB");
	if (VC_PathVerifyGraphPathB == NULL)
	{
		return false;
	}

	VC_PathUpdateGraphPathB = (PathUpdateGraphPathB)GetProcAddress(g_hEAIdll, "PathUpdateGraphPathB");
	if (VC_PathUpdateGraphPathB == NULL)
	{
		return false;
	}


	VC_PathGenGraphPathB = (PathGenGraphPathB)GetProcAddress(g_hEAIdll, "PathGenGraphPathB");
	if (VC_PathGenGraphPathB == NULL)
	{
		return false;
	}

	VC_PathVerifyMultiLinesGenPathB = (PathVerifyMultiLinesGenPathB)GetProcAddress(g_hEAIdll, "PathVerifyMultiLinesGenPathB");
	if (VC_PathVerifyMultiLinesGenPathB == NULL)
	{
		return false;
	}

	VC_PathVerifyTwoPointGenLineB = (PathVerifyTwoPointGenLineB)GetProcAddress(g_hEAIdll, "PathVerifyTwoPointGenLineB");
	if (VC_PathVerifyTwoPointGenLineB == NULL)
	{
		return false;
	}

	VC_PathAcitionListB = (PathAcitionListB)GetProcAddress(g_hEAIdll, "PathAcitionListB");
	if (VC_PathAcitionListB == NULL)
	{
		return false;
	}

	VC_NavigateTargetControlB = (NavigateTargetControlB)GetProcAddress(g_hEAIdll, "NavigateTargetControlB");
	if (VC_NavigateTargetControlB == NULL)
	{
		return false;
	}

	VC_NavigateTargetAnyB = (NavigateTargetAnyB)GetProcAddress(g_hEAIdll, "NavigateTargetAnyB");
	if (VC_NavigateTargetAnyB == NULL)
	{
		return false;
	}

	VC_NavigateTargetB = (NavigateTargetB)GetProcAddress(g_hEAIdll, "NavigateTargetB");
	if (VC_NavigateTargetB == NULL)
	{
		return false;
	}

	VC_GetMissionIsFinished = (GetMissionIsFinished)GetProcAddress(g_hEAIdll, "GetMissionIsFinished");
	if (VC_GetMissionIsFinished == NULL)
	{
		return false;
	}

	VC_CloseSystem = (CloseSystem)GetProcAddress(g_hEAIdll, "CloseSystem");
	if (VC_CloseSystem == NULL)
	{
		return false;
	}

	VC_MissionControl = (MissionControl)GetProcAddress(g_hEAIdll, "MissionControl");
	if (VC_MissionControl == NULL)
	{
		return false;
	}

	VC_GetTargetsB = (GetTargetsB)GetProcAddress(g_hEAIdll, "GetTargetsB");
	if (VC_GetTargetsB == NULL)
	{
		return false;
	}

	VC_SaveTargetByNameB = (SaveTargetByNameB)GetProcAddress(g_hEAIdll, "SaveTargetByNameB");
	if (VC_SaveTargetByNameB == NULL)
	{
		return false;
	}

	VC_SelectMapByName = (SelectMapByName)GetProcAddress(g_hEAIdll, "SelectMapByName");
	if (VC_SelectMapByName == NULL)
	{
		return false;
	}

	VC_GetBotInitPoseStatusB = (GetBotInitPoseStatusB)GetProcAddress(g_hEAIdll, "GetBotInitPoseStatusB");
	if (VC_GetBotInitPoseStatusB == NULL)
	{
		return false;
	}

	VC_StopBotInitPoseB = (StopBotInitPoseB)GetProcAddress(g_hEAIdll, "StopBotInitPoseB");
	if (VC_StopBotInitPoseB == NULL)
	{
		return false;
	}

	VC_SetBotInitPoseB = (SetBotInitPoseB)GetProcAddress(g_hEAIdll, "SetBotInitPoseB");
	if (VC_SetBotInitPoseB == NULL)
	{
		return false;
	}


	VC_SetBotPoseB = (SetBotPoseB)GetProcAddress(g_hEAIdll, "SetBotPoseB");
	if (VC_SetBotPoseB == NULL)
	{
		return false;
	}
	return true;
}


bool UnloadEAIdll(void)
{
	if (NULL == g_hEAIdll)
	{
		return false;
	}

	FreeLibrary(g_hEAIdll);

	return true;
}