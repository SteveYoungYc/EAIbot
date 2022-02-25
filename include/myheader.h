
//////////////////////////////////////////////////////////////////////

#ifndef _MYHEADER_H_
#define _MYHEADER_H_


#define EAI_DEBUG                       1//1,为内部调试版本，0发布版

#define  BOT_VER_EGO                   0
#define  BOT_VER_GS                    1
#define  BOT_VER_ROSBOT                2

#define SOCK_ONRECEIVE                  WM_USER + 1200
#define SOCK_ONCLOSE                    WM_USER + 1201

#define ON_RECEIVE                      WM_USER + 1200
#define ON_CLOSE                        WM_USER + 1201
#define ON_ACCEPT                       WM_USER + 1202
#define ON_EAI_PointCloud               WM_USER + 1203//激光
#define ON_EAI_OccupancyGridMap         WM_USER + 1204//地图
#define ON_EAI_Pose                     WM_USER + 1205//机器人位置
#define ON_EAI_Path                     WM_USER + 1206////局部路径
#define ON_EAI_Points                   WM_USER + 1207
#define ON_EAI_Target                   WM_USER + 1208
#define ON_EAI_Command                  WM_USER + 1209
#define ON_EAI_CmdVel                   WM_USER + 1210
#define ON_EAI_SaveMap                  WM_USER + 1211
#define ON_EAI_Mission                  WM_USER + 1212
#define ON_EAI_Resp                     WM_USER + 1213
#define ON_EAI_VirPoints                WM_USER + 1214
#define ON_EAI_JOY                      WM_USER + 1215//手柄控制消息
#define ON_EAI_GLOBAL_Path              WM_USER + 1216//全局路径
#define ON_EAI_STAT_INFO                WM_USER + 1217//状态信息
#define ON_EAI_DEBUG_POINT              WM_USER + 1218//调试点信息
#if EAI_DEBUG
#define ON_EAI_GlobalCostMap            WM_USER + 1219//GlobalCostMap地图
#define ON_EAI_LocalCostMap             WM_USER + 1220//LocalCostMap地图
#endif
#define ON_EAI_Battery                  WM_USER + 1221//电池信息
#define ON_EAI_Emergency                WM_USER + 1222//急停信息
#define ON_EAI_ErrorCode                WM_USER + 1223//错误信息
#define ON_EAI_BOT_PARENT               WM_USER + 1224//机器人类消息
#define ON_EAI_InitStatus               WM_USER + 1225//机器人初始化状态消息
#define ON_EAI_Sonar                    WM_USER + 1226//超声
#define ON_EAI_DataBag                  WM_USER + 1227//数据包
#define ON_EAI_Download                 WM_USER + 1228//文件下载
#define ON_EAI_TASK_INFO                WM_USER + 1229//任务信息
#define ON_EAI_Particles                WM_USER + 1230//粒子滤波
#define ON_EAI_FirmwareUpdate           WM_USER + 1231//固件更新
#define ON_EAI_Other                    WM_USER + 1232//其它信息

#define OPERATE_SET_INIT_POSE           0
#define OPERATE_TWO_POINT_GEN_LINE      1// 2点生成线段
#define OPERATE_MULTI_LINE_GEN_PATH     2// 线段生成路径
#define OPERATE_GRAPH_PATH              3// 手画路径
#define OPERATE_VIR_POINTS              4// 虚拟墙
#define OPERATE_ADD_TARGET              5// 增加目标点


#define TCP_REQ_PORT                    9090
#define TCP_PUB_PORT                    9091
#define TCP_UPDATE_PORT                 9190
#define UDP_BROADCAST_PORT              9191
#define UDP_CNF_PORT                    9192


//#define GEN_LINE_BY_TWO_POINTS          1// 2点生成线段
//#define GEN_PATH_BY_MULTI_LINES         2// 线段生成路径

#define DATA_SWITCH_FILE_NAME           100

#define PORT		                    5555
#define FLAG		                    4
#define SIZEFILE	                    1024
#define DATA_LEN	                    1024
#define ZLIB_COM_BUF_LEN	            1024//ZLIB压缩使用缓冲区

#define TCPBUFFERSIZE                   4096

#define  SHARE_DATA_MAP                 1024*1024*10
#define  SHARE_DATA_POINT_CLOUD         1024*1024*2
#define  SHARE_DATA_POSE                100
#define  SHARE_DATA_TARGET              1024
#define  SHARE_DATA_PATH                1024*1024*1
#define  SHARE_DATA_VIR_POINT           1024*1024*2
#define  SHARE_DATA_STAT_INFO           500
#define  SHARE_DATA_BATTERY_INFO        100
#define  SHARE_DATA_VERSION             1024
#define  SHARE_DATA_DATABAG_INFO        300
#define  SHARE_DATA_TAST_INFO           1024*10
#define  SHARE_DATA_EMERGENCY           100
#define  SHARE_DATA_SONAR               100

#define  MAP_PIXEL_UNKONW                -1
#define  MAP_PIXEL_BLANK                 0
#define  MAP_PIXEL_OBSTACLE              100

////////////////////////////////////////color
#define COLOR_BLACK                    RGB(0, 0, 0) //黑色
#define COLOR_BLUE                     RGB(0, 0, 255) //蓝色
#define COLOR_GREEN                    RGB(0, 255, 0) //绿色
#define COLOR_CYAN                     RGB(0, 255, 255) //青色
#define COLOR_RED                      RGB(255, 0, 0)// 红色
#define COLOR_MAGENTA                  RGB(255, 0, 255) //品红色
#define COLOR_YELLOW                   RGB(255, 255, 0) //黄色
#define COLOR_WHITE                    RGB(255, 255, 255) //白色
#define COLOR_WHITE2                   RGB(240, 240, 240) //白色2
#define COLOR_MOCCASIN                 RGB(255, 228, 181) //
#define COLOR_SLATEBLUE                RGB(106, 90, 205) //
#define COLOR_GREEN4                   RGB(0, 139, 0) //
#define COLOR_GOLD2                    RGB(238, 201, 0) //
#define COLOR_RED2                     RGB(250, 10, 0)// 红色
#define COLOR_RED3                     RGB(250, 30, 0)// 红色
#define COLOR_GRAY1                    RGB(181, 181, 181)// 红色
////////////////////////////////////////////////////////////
#define EAI_JOY_NAME                   L"EAIJoy" //
#define EAI_MAP_FILE_NAME              L"EAIMap" //
#define EAI_MAP_FILE_NAMEC             "EAIMap" //
#define EAI_MISSION_FILE_NAME          L"EAIMission" //
#define EAI_DATABAG_FILE_NAME          L"EAIDataBag" //
#define EAI_DATABAG_FILE_NAMEC         "EAIDataBag" //
#define EAI_SERVER_IP                  L"EAIServerIP" //
#define EAI_PARAMETER_FILE_NAME        L"EAIParameter" //
#define EAI_PARAMETER_FILE_LIDAR       L"EAILidarParameter" //
#define EAI_APP_PARA                   L"EAIAppPara" //

#define  LIDAR_SECTION_NAME            L"ydlidar" //雷达SECTION
#define  LIDAR_SECTION_ENABLE          L"enable_lidars" //雷达数量参数
#define  EAI_PARAMETER_LIDAR           L"lidar" //

////////////////////////////////data switch type
#define DATA_PointCloud  		       "PointCloud"
#define DATA_OccupancyGridMap          "OccupancyGridMap"
#define DATA_Pose                      "Pose"
#define DATA_Path                      "Path"
#define DATA_Points                    "Points"
#define DATA_Target                    "Target"
#define DATA_Command                   "Command"
#define DATA_CmdVel                    "CmdVel"
#define DATA_SaveMap                   "SaveMap"
#define DATA_Mission                   "Mission"
#define DATA_Resp                      "Resp"
#define DATA_VirPoints                 "VirPoints"
#define DATA_SourceList                "SourceList"
#define DATA_Action                    "Action"
//
#define DIR_VER1_MAP_LIST               "OccupancyGridMap"//VER1 map list
#define DIR_VER1_GRAPH_PATH_LIST        "GraphPath"//VER1 Graph PATH list
#define F_VER1_PATH_LIST                "pathlist"//VER1 Path list
#define DIR_VER1_PATH_LIST              "Path"//VER1 Path list dir
#define F_VER1_PARAMETER                "EAIParameterVer1"//VER1 parameter

#define VER1_M_PlayGraphPathTask        L"PlayGraphPathTask"
#define VER1_M_PlayPathTask             L"PlayPathTask"
#define VER1_M_PlayGraphPathGroupTask   L"PlayGraphPathGroupTask"
#define VER1_M_NavigationTask           L"NavigationTask"
/****************************************************************************
* message type code
****************************************************************************/
/* uplink code */
#define PUB_UNKNOWN          0
#define PUB_MAP              1  // set map;
#define PUB_ROBOT_POSE       2  // set pose;
#define PUB_LASER_POINTCLOUD 3  // set point_cloud
#define PUB_GLOBAL_COSTMAP   4  // set map;
#define PUB_LOCAL_COSTMAP    5  // set map;
#define PUB_GLOBAL_PATH      6  // set path;
#define PUB_LOCAL_PATH       7  // set path;
#define PUB_GLOBAL_FOOTPRINT 8  // set points;
#define PUB_LOCAL_FOOTPRINT  9  // set points;
#define PUB_EXCEPTION        10 // set exception;
#define PUB_APP_STAT_INFO    11 // set appstatinfo
#define PUB_BATTERY          12 // set battery;
#define PUB_EMERGENCY        13 // set yes;
#define PUB_ERROR            14 // set error_code;
#define PUB_SONAR_POINTCLOUD 15 // set point_cloud
#define PUB_DATABAG_STAT     16 // set databag_stat
#define PUB_PARTICLES        17 // set path

/* downlink req messe. */
#define REQ_LOGIN           49  // set user_login or login_resp;
#define REQ_INITIAL_POSE    50  // set pose;
#define REQ_STAT_CMD        51  // set command;
#define REQ_VEL_CMD         52  // set cmd_vel;
#define REQ_SAVE_MAP        53  // set save_map;
#define REQ_SAVE_TARGET     54  // set save_target;
#define REQ_SAVE_PATH       55  // set save_path;
#define REQ_SAVE_VIRPOINTS  56  // set save_virpoints;
#define REQ_SAVE_ACTIONS    57  // set mission;
#define REQ_GET_SOURCE_LIST 58  // set get_source_list;
#define REQ_GET_STAT        59  // req no value and resp returns command.
#define REQ_GET_MAP         60  // set get_map;
#define REQ_GET_TARGETS     61  // set get_targets;
#define REQ_GET_PATHS       62  // set get_paths;
#define REQ_GET_VIRPOINTS   63  // set get_virpoints;
#define REQ_GET_MISSION     64  // set mission;
#define REQ_DEL_SOURCE      65  // set del_source;
#define REQ_PUB_SETTING     66  // set pub_setting;
#define REQ_GET_PARAMETERS  67  // no value
#define REQ_SAVE_PARAMETERS 68  // set parameters
#define RESP                69
#define REQ_GET_VERSION     70 // set version 
#define REQ_CHANGE_PWD      71 // set change_pwd. 
#define REQ_DO_DATABAG      72 // set databag, record/play data. 
#define REQ_GET_MAP_RESOURCES 73 // set map_resources. 

//////////////////////////////////////////////APP CMD
#define CMD_TIMESTAMP_LEN	            8
#define CMD_MSGID_LEN	                1
#define CMD_HEAD_LEN	                CMD_TIMESTAMP_LEN+CMD_MSGID_LEN
#define CMD_USER_LEN    	            20
#define CMD_PWD_LEN    	                20

//////////////////////////////////////////////SDK返回码
#define CMD_SUCCESS     	            0
#define CMD_FAILED       	            1
#define CMD_NET_FAILED     	            2
#define CMD_LOGOUT      	            3
#define CMD_NO_AUTH      	            4

#define CMD_NOT_COMPELET      	        5//未完成
#define CMD_PATH_NOT_FOUND     	        6//没有找到路径
#define CMD_PATH_IS_NOT_SAFE   	        7//路径不安全
#define CMD_BATTERY_EMPTY   	        8//电量低

/////////////////////////////////////////////API返回错误码
#define RC_TIMEOUT                      101
#define RC_LOGIN_FAILED                 102  /* 用户名或密码错误. */
#define RC_NOT_FOUND                    103/* 未找到资源或者访问资源失败. */
#define RC_SAVE_FAILED                  104  /* 保存资源失败. */
#define RC_CONN_EXISTED                 105  /* 连接已存在. */
#define RC_SOURCE_EXISTED               106 /* 资源已存在. */
#define RC_NOT_PERMIT                   107 /* 无权操作. */
#define RC_RELATED_SOURCE               108  /* 有相关联的资源. */
#define RC_INVALID_DATA                 109  /* 无效数据. */
#define RC_IO_ERROR                     110  /* io操作失败. */

#define ROSBOT_ERR_FILE_NOT_FOUND       0x0A
#define ROSBOT_ERR_MAP_NAME_EXIST       0x0B
#define ROSBOT_ERR_TARGET_NAME_EXIST    0x0C

#define LEN_NAME_MAP      	            40
#define LEN_NAME_MISSION   	            80
#define LEN_NAME_TARGETS   	            120
#define LEN_NAME_VIRPOINTS 	            80
#define LEN_NAME_PATHS   	            120
#define LEN_NAME_DATABAG  	            40
#define LEN_NAME_DATABAG_DOWNLOAD       140
#define LEN_MD5_BUFF                    16
////////////////////////////////////////////app cmd
#define CMD_LOGIN                      0x01
#define CMD_SerivceControl             0x02
#define CMD_DirectionControl           0x03


#define ROSBOT_TASK_SPLIT              "=========="



#define ROSBOT_ERR_PROCESS_TIMEOUT        0x09
#define ROSBOT_ERR_FILE_NOT_FOUND         0x0A
#define ROSBOT_ERR_MAP_NAME_EXIST         0x0B
#define ROSBOT_ERR_TARGET_NAME_EXIST      0x0C
#define ROSBOT_ERR_DELETE_UNKOWN          0x0D
#define ROSBOT_ERR_TARGET_NOT_FOUND       0x0E
#define ROSBOT_ERR_SAVE                   0x0F
#define ROSBOT_ERR_DATA                   0x10
#define ROSBOT_ERR_STATUS_NOT_ALLOW       0x11
#define ROSBOT_ERR_FILE_CONTENT           0x12
#define ROSBOT_ERR_YAML_NOT_FOUND         0x13
#define ROSBOT_ERR_MISSION_TYPE           0x14
#define ROSBOT_ERR_TARGET_USED            0x15
#define ROSBOT_ERR_HAD_CONTROLLER         0x16
/////////////////////////////文件类型
#define EAI_FILE_BAG                   1

typedef union
{
	UINT   u32;
	UCHAR  byte[4];
}CONVERT_DATA_U32;

typedef union
{
	UINT64   u64;
	UCHAR    byte[8];
}CONVERT_DATA_U64;

typedef struct  
{
	char cMsgID[FLAG];
	UINT iSN;
	char cData[DATA_LEN];
}tsPacket;

typedef struct
{
	int         iJoyTxIntevalMS;
	float       fAngle;
	int         iBeatMS;
}tsAppPara;


enum UpdateCode {
	UPDATE_OK = 0,
	UPDATE_MD5FAILED ,
	UPDATE_FAILED ,
	UPDATE_TXING,
	UPDATE_NAMEERROR,
	UPDATE_FILENOTFOUND,
	UPDATE_ING,
	UPDATE_OTHER
};


enum RecordCmd {
	RECORD_MANNPING = 1,
	RECORD_NAVIGATION = 2,
	PLAY = 3,
	STOP_RECORD = 4,
	STOP_PLAY = 5
};

enum DownloadStatus {
	EAI_DOWNLOADING       = 0,
	EAI_DOWNLOADFAILED    = 1,
	EAI_DOWNLOADOK        = 2
};

enum SourceType {
	MapList = 1,
	MissionList = 2,
	DataBagList = 3
};

enum battery_status
{
	STATUS_UNKNOWN = 0,
	STATUS_CHARGING = 1,
	STATUS_DISCHARGING = 2,
	STATUS_NOT_CHARGING = 3,
	STATUS_FULL = 4
};

enum battery_health
{
	HEALTH_UNKNOWN = 0,
	HEALTH_GOOD = 1,
	HEALTH_OVERHEAT = 2,
	HEALTH_DEAD = 3,
	HEALTH_OVERVOLTAGE = 4,
	HEALTH_UNSPEC_FAILURE = 5,
	HEALTH_COLD = 6,
	HEALTH_WATCHDOG_TIMER_EXPIRE = 7,
	HEALTH_SAFETY_TIMER_EXPIRE = 8
};

enum battery_tech
{
	TECH_UNKNOWN = 0,
	TECH_NIMH = 1,
	TECH_LION = 2,
	TECH_LIPO = 3,
	TECH_LIFE = 4,
	TECH_NICD = 5,
	TECH_LIMN = 6
};

enum _ParameterType {
	PBUNKNOWN        = 0,
	PBBOOL           = 1,
	PBINTEGER        = 2,
	PBFLOAT          = 3,
	PBSTRING         = 4
}ParameterType;

typedef enum _ActionType {
	//Unknown         = 0,
	WAITING			= 1,//秒s
	GOTOTARGET		= 2,//target
	MOVING			= 3,
	TRACKING		= 4,//path
	GOCHARGE        = 5,//target
	CHARGING		= 6//float duration ;  // minutes. float percent ;
}ActionType;

typedef enum _ActionState {
	TODO			= 0,
	DOING			= 1,
	DONE			= 2,
	PAUSE           = 3
}ActionState;

typedef enum _VirPointsType {
	VP_PREFER   = 0,
	VP_UNPREFER = 1,
	VP_FORBID   = 2
}VirPointsType;

typedef enum _StatType
{
	Idle            = 0, 
	Mapping         = 1,
	CreateMission   = 2,
	GoToTarget      = 3,
	ExecuteMission  = 4,
	Execute         = 5,
	Exception       = 6,
	PauseMission	= 7,
	ResumeMission   = 8,
	Extend          = 9,
	Searching       = 10,
	ReCharging      = 11
}StatType;

typedef enum _RespC
{
	OK              = 0,
	Failed          = 1
}RespC;

typedef enum _DelSourceType {
	Unknown         = 0,
	DelMap          = 1,  // name 为地图名称。
    DelMission      = 2,  // name 为任务名称。
	DelTarget       = 3,  // name 为 "mission_name:target_name"。
    DelPath         = 4,  // name 为 "mission_name:path_name"。
	DelVirPoints    = 5,  // name 为 mission_name.
	DelDataBag      = 6
}DelSourceType;

#pragma pack(push,1) 
typedef struct tsDATA_SonarC
{
	UCHAR                   u8SonarID;
	UCHAR                   u8RadiationType;
	float                   fFieldOfView;
	float                   fMinRange;
	float                   fMaxRange;
	float                   fRange;
}tsDATA_SonarC;

typedef struct
{
	UINT64                   timestamp ;
	int                      iStatus;
	int                      iHealth;
	int                      iTech;
	float                    fVoltage;
	float                    fCurrent;
	float                    fCharge;
	float                    fCapacity;
	float                    fDesign_capacity;
	float                    fPercentage;
	BOOL                     bPresent;
	int                      iNavigationSpeedLevel;
	int                      iPlayPathSpeedLevel;
}tsDATA_Battery;

typedef struct{
	UINT64					 timestamp;
	int     				 cmd ;
	char                     chName[LEN_NAME_DATABAG];
	UINT64                   start_time = 4;  // ms
}tsDataBagStat;

typedef struct
{
	UINT                     u32Status;
	UINT                     u32TotalFrame;
	UINT                     u32CurFrame;
	char                     chName[LEN_NAME_DATABAG_DOWNLOAD];
}tsDATA_DownloadStatus;

typedef struct
{
	UINT64                   timestamp;
	int                      iBool;
}tsDATA_Emergency;

typedef struct
{
	float                    fX;
	float                    fY;
	float                    fPhi;
}tsDATA_Pose2D;

typedef struct
{
	float                    fX;
	float                    fY;
}tsDATA_Point2D;


typedef struct
{
	int                      iX;
	int                      iY;
}tsDATA_Point2D_B;//栅格化的座标


typedef struct
{	
	int                      iPoints;
	CPoint                   *pCPoints;
	CStringArray             strArrayCPName;
	CStringArray             strArrayLines;
	CStringArray             strArrayLineStart;
	CStringArray             strArrayLineEnd;
}tsDATA_GraphPathData;//

typedef struct
{
	CPoint                   cp;
	float                    fAngle;
	char                     chName[LEN_NAME_TARGETS];
}tsDATA_Target_B;//栅格化的座标
typedef CList<tsDATA_Target_B*, tsDATA_Target_B*> CDATA_TargetBLst;

typedef struct
{
	UINT64                   u64Timestamp;
	UINT32                   u32ID;	
	tsDATA_Pose2D            sOriginPose2d;
	UINT                     u32Number;
	tsDATA_Point2D           *psDataPoint2d;
}tsDATA_PointCloud;
typedef CList<tsDATA_PointCloud*, tsDATA_PointCloud*> CDATA_PointCloudLst;

/////VER1
typedef struct
{
	UINT64                   u64Timestamp;
	UINT32                   u32ID;
	UINT32                   u32Width;
	UINT32                   u32Heigth;
	float                    fResolution;
	UINT                     u32Number;
	tsDATA_Pose2D            sOriginPose2d;
	tsDATA_Point2D_B         *psDataPoint2d;
}tsDATA_PointCloudVer1;
typedef CList<tsDATA_PointCloudVer1*, tsDATA_PointCloudVer1*> CDATA_PointCloudVer1Lst;

typedef struct
{
	UINT64                   u64Timestamp;
	float                    fResolution;
	UINT                     u32Width ;
	UINT                     u32Height;
	tsDATA_Pose2D            sOriginPose2d;
	char                     *p8Data;
}tsDATA_OccupancyGridMap;

typedef struct
{
	UINT64                   u64Timestamp;
	tsDATA_Pose2D            sPose2d;
}tsDATA_Pose;


typedef struct tsDATA_Other
{
	UINT                     u32MainCotrol;
	UINT                     u32Reserve1;
	UINT                     u32Reserve2;
	UINT                     u32Reserve3;
	UINT                     u32Reserve4;
}tsDATA_Other;


typedef struct
{
	UINT64                   u64Timestamp;
	char                     chName[LEN_NAME_PATHS];
	UINT32                   u32Pose2dNum;
	tsDATA_Pose2D            *psPoses2d;
}tsDATA_Path;

typedef struct
{
	UINT64                   u64Uptime;
	UINT64                   u64Memfree;
	UINT64                   u64Memtotal;
	float                    fCpu;
}tsDATA_SysInfo;


typedef struct
{
	UINT64                   u64Timestamp;
	char                     chMapName[LEN_NAME_MAP];
	char                     chMissionName[LEN_NAME_MISSION];
	UINT32                   u32Stat;
	UINT32                   u32Action_id;
	UINT32                   u32Action_type;
	UINT32                   u32Action_state;
	UINT32                   u32Mission_state;
	char                     chTargetName[LEN_NAME_TARGETS];
	tsDATA_SysInfo           sSysInfo;
}tsDATA_Stat_Info;

typedef struct
{
	UINT64                   u64Timestamp;
	tsDATA_Point2D           *psPoints2d;
}tsDATA_Points;

typedef struct
{
	UINT64                   u64Timestamp;
	tsDATA_Pose2D            sPose2d;
	char                     chName[LEN_NAME_TARGETS];
}tsDATA_Target;

//typedef struct
//{
//	UINT64                   u64Timestamp;
//	CmdType                  eCmdType;
//	char                     *pString;
//}tsDATA_Command; 

typedef struct
{
	UINT64                   u64Timestamp;
	float                    fLinear_x;
	float                    fLinear_y;
	float                    fLinear_z;
	float                    fAngular_x;
	float                    fAngular_y;
	float                    fAngular_z;
}tsDATA_CmdVel; 


typedef struct
{
	UINT64                   u64Timestamp;
	RespC                    eRC;
	char                     *pString;
}tsDATA_Resp;

typedef struct
{
	UINT64                   u64Timestamp;
	char                     *pString;
	tsDATA_OccupancyGridMap  sMap;
}tsDATA_SaveMap;

typedef struct
{
	UINT64                   u64Timestamp;
	float                    fResolution;
	UINT                     u32Width;
	UINT                     u32Heigth;
	tsDATA_Pose2D            sOriginPose2d;
	UINT                     *pu32Prefer;
	UINT                     *pu32UnPrefer;
	UINT                     *pu32Forbid;
}tsDATA_VirPoints;

typedef struct
{
	float                    fDistance;//距离  单位为米
	float                    fAngle;   //角速度
	float                    fMax_v;    //最大线速度
	float                    fMax_w;   //最大角速度
}tsDATA_Moving;


typedef struct{
	float                    duration;
}tsDATA_Waiting;

typedef struct{
	char			         chName[LEN_NAME_TARGETS];
}tsDATA_GoToTarget;

typedef struct
{
	char			         chName[LEN_NAME_PATHS];
}tsDATA_Tracking;

typedef struct 
{
	char			         chName[LEN_NAME_TARGETS];
}tsDATA_Docking;

typedef struct
{
	BOOL                     bCharge;
}tsDATA_Charging;

typedef struct
{
	UINT64                   u64Timestamp;
	char                     chMissionName[LEN_NAME_MISSION];
	BOOL                     bLoop;
	BOOL                     bAuto_charge;
	float                    fCharge_threshold;//自动回充门限值
	float                    fMin_charge_time;//自动回充门限值
	float                    fMin_charge_percent;//自动回充门限值
	char                     chMapName[LEN_NAME_MAP];
	BOOL                     bInstant_nav;
}tsDATA_Mission;




typedef struct
{
	UINT32                   u32FileSize;
	UINT32                   u32Total;
	char			         chMD5[LEN_MD5_BUFF];
}tsUpdate_FileInfo;


#pragma pack(pop) 



//CString strGetStatusCodeMsg(int iCode);
//unsigned char CHAR_TO_HEX(unsigned char ch);
//std::string URLEncode(const char* pSrc);
//int File_Create_Dir(std::string strPath);
//UINT64 StringToTimeStamp(std::string strTime);
//char* UTF8ToGBK(char *szUtf8);
//CString UTF8ToUnicodeCString(char* pUTF8Text);
//CString MBCStringToUnicodeCString(char * szAnsi, int len);
//CString Utf8ToStringT(LPSTR str);
//std::string UTF8_To_string(const std::string & str);
//std::string string_To_UTF8(const std::string & str);
//UINT64 GetCurrentSysTimeStampMS(void);
//UINT64 GetPresentUnixTime();
//std::vector<std::string> StringSplit2(const  std::string& s, const std::string& delim);
//std::string&   replace_all_distinct(std::string& str, const  std::string& old_value, const std::string&  new_value);
//CString UTF8ToUnicode(const char* UTF8);
//size_t g_f_wctou8(char * dest_str, const wchar_t src_wchar);
//int g_f_wcs_to_pchar(CString& wstr,char * p);
//CString strGetCurrWorkingDir(void);
//BOOL  CreateDir(LPCTSTR   dirName);
//void vWriteDataToFile(CString strData, CString strFile);
//void vWriteLog(CString strData, CString strFile);
//CString strGetCurrWorkingDir();
//int iSplitString0A(CString str, char split, CStringArray& strArray);
//int iSplitStringFlag(CString &str, char split, CStringArray& strArray);
//int iSplitStringForStrLine(CString &str, CStringArray& strArray);
//int iSplitStringForStrFlag(CString &str, CString split, CStringArray& strArray);
//void   vDeleteDirFile(CString strDir, CString strFileType);
//CString   strGetCurrentDateTime();
//int iMaxComp(int a, int b);
//int iMinComp(int a, int b);
//
//CString strGetFileTitleFromFileName(CString strFileName, CString& strExtendName);
//char * pGetFileTitleFromFileName(CString strFileName);
//
//
//inline int bCheckCPULittleEndian(void)
//{
//	union w
//	{
//		int a;
//		char b;
//	}c;
//	c.a = 1;
//	return(c.b == 1);
//}
//inline UINT64 SwapDword64(UINT64 value)
//{
//	return ((value & 0x00000000000000FF) << 56) |
//		((value & 0x000000000000FF00) << 48) |
//		((value & 0x0000000000FF0000) << 40) |
//		((value & 0x00000000FF000000) << 32) |
//		((value & 0x000000FF00000000) >> 32) |
//		((value & 0x0000FF0000000000) >> 40) |
//		((value & 0x00FF000000000000) >> 48) |
//		((value & 0xFF00000000000000) >> 56);
//}
//inline UINT SwapInt32(UINT value)
//{
//	return ((value & 0x000000FF) << 24) |
//		((value & 0x0000FF00) << 8) |
//		((value & 0x00FF0000) >> 8) |
//		((value & 0xFF000000) >> 24);
//}
//
//inline unsigned short SwapInt16(USHORT value)
//{
//	return ((value & 0x00FF) << 8) | ((value & 0xFF00) >> 8);
//}
#endif	//_MYHEADER_H_
