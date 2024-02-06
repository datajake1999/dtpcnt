/*
 ***********************************************************************
 *
 *                           Coryright (c)
 *    © Digital Equipment Corporation 1995. All rights reserved.
 *
 *    Restricted Rights: Use, duplication, or disclosure by the U.S.
 *    Government is subject to restrictions as set forth in subparagraph
 *    (c) (1) (ii) of DFARS 252.227-7013, or in FAR 52.227-19, or in FAR
 *    52.227-14 Alt. III, as applicable.
 *
 *    This software is proprietary to and embodies the confidential
 *    technology of Digital Equipment Corporation and other parties.
 *    Possession, use, or copying of this software and media is authorized
 *    only pursuant to a valid written license from Digital or an
 *    authorized sublicensor.
 *
 ***********************************************************************
 *    File Name:	dll_prot.h
 *    Author:
 *    Creation Date:
 *
 *    Functionality:
 *  File \dtpc\dll\src\protos.h
 *  Created on : 08/17/92 at 09:43:01
 *
 ***********************************************************************
 *    Revision History:
 */ 

extern	int dtpcInitDll(void);
extern	int dtpcCloseDll(void);
extern	void _dtpcSetTimeoutTicks(int ticks);
extern	void _dtpcSetTimeout(int secs);
extern	int _dtpcCheckTimeout(void);
extern	void _dtpcWaitTicks(int ticks);
extern	int _dtpcDllEntry(int mod,int boot_check);
extern	int _dtpcDllExit(int status);
extern	void _dtpcCenter(HWND hWnd);
extern	int _dtpcAllocMem(int paras,unsigned long *addr);
extern	int _dtpcLoadMem(unsigned long addr,char *buff,int count);
extern	int _dtpcReadMem(unsigned long addr,char *buff,int count);
extern	int _dtpcSetDic(unsigned long addr,unsigned long entries,int type);
extern	int _dtpcStartTask(unsigned int cs,unsigned int ip);
extern	int _dtpcDoImmd(unsigned int cmd,unsigned int data);
extern	int _dtpcDoImmdGet(unsigned int cmd,unsigned int *data);
extern	void _dtpcSetStatus(void);
extern	int _dtpcDoCommand(unsigned int cmd);
extern	int _dtpcWaitDstat(unsigned int ticks);
extern	int _dtpcCheckDstat(void);
extern	int _dtpcWaitCstat(int ticks);
extern	int _dtpcWaitFlush(void);
extern	int _dtpcWaitBit(int secs,unsigned int bit);
extern	int _dtpcWaitPattern(int secs,unsigned int pattern);
extern	unsigned int _dtpcGetStatus(void);
extern	void _dtpcPutCommand(unsigned int cmd);
extern	unsigned int _dtpcGetData(void);
extern	void _dtpcPutData(int data);
extern	int _dtpcLoadFile( char *fname, char *path);
extern	int _dtpcLoadExe(void);
extern	int _dtpcLoadDic(int kind);
extern	int _dtpcKernelLoad(void);
extern	int _dtpcWaitInit(int retry,int reset);
extern	int _dtpcFileResources(void);
extern	void _dtpcFreeResources(void);
extern	int _dtpcErrorLoad(int status);
extern	int dtpcVolumeUp(int mod,int vol);
extern	int dtpcVolumeDown(int mod,int vol);
extern	int dtpcVolumeSet(int mod,int vol);
extern	int dtpcPause(int mod);
extern	int dtpcResume(int mod);
extern	int dtpcResumeSpc(int mod);
extern	int dtpcFlushText(int mod);
extern	int dtpcFlushChar(int mod, char c);
extern	int dtpcFlushSpeech(int mod);
extern	int dtpcImmdVoice(int mod,int voice);
extern	int dtpcImmdRate(int mod,int rate);
extern	int dtpcImmdRateDelta(int mod,int rate);
extern	int dtpcImmdPeriod(int mod,int pause);
extern	int dtpcImmdComma(int mod,int pause);
extern	int dtpcBuffFree(int mod,int *bytes);
extern	int dtpcLastIndex(int mod,int *index);
extern	int dtpcBuffUsed(int mod,int *bytes);
extern	int dtpcFreeMem(int mod,int *paras);
extern	int dtpcIoPriority(int mod,int priority);
extern	int dtpcDigitizedMode(int mod);
extern	int dtpcTextMode(int mod);
extern	int dtpcReset(int mod);
extern	int dtpcGetStatus(int mod,unsigned int *mod_status,int *number,int *mode);
extern	int dtpcSendChar(int mod, char c);
extern	int dtpcGetChar(int mod, char *c);
extern	int dtpcSendBuff(int mod, char *buff,int *count);
extern	int dtpcGetBuff(int mod, char *buff,unsigned int *count);
extern	int dtpcSendDigitized(int mod, char *buff, int frames);
extern	int dtpcLoadModule(int mod);
extern	int dtpcSetup(int mod, HWND wnd);
extern	int dtpcGetSetting(int mod,int setting,unsigned int *rvalue);
extern	void _dtpcMessageWindow(HINSTANCE hinst);
extern	void _dtpcKillMessageWindow(void);
extern	void _dtpcOutMessWindow(int x,int y, char *text);
extern	void _dtpcClearMessWindow(void);
extern	unsigned int _dtpcLoadSettings(void);
extern	unsigned int _dtpcSaveSettings(void);
extern	int _dtpcSendSetString(int value, char *str[] );
extern	int _dtpcSendInitBuff( char *buff);
extern	int _dtpcSayWelcome(void);
extern	int _dtpcSayTest(void);
extern	int _dtpcSendInitChar( char c);
extern	BOOL WINAPI _dtpcConfigDlg(HWND hWndDlg,UINT Message,WPARAM wParam,LPARAM lParam);
extern	BOOL WINAPI _dtpcSpeechDlg(HWND hWndDlg,UINT Message,WPARAM wParam,LPARAM lParam);
extern	BOOL WINAPI _dtpcSettingsDlg(HWND hWndDlg,UINT Message,WPARAM wParam,LPARAM lParam);
extern	BOOL WINAPI _dtpcOutputDlg(HWND hWndDlg,UINT Message,WPARAM wParam,LPARAM lParam);
extern	BOOL WINAPI _dtpcStringsDlg(HWND hWndDlg,UINT Message,WPARAM wParam,LPARAM lParam);
extern	BOOL WINAPI _dtpcFilesDlg(HWND hWndDlg,UINT Message,WPARAM wParam,LPARAM lParam);
extern	void _dtpcReadOkValue(HWND dlg,int ctrlv,int ctrls,int *param,int min,int max,int def,int invert);
extern	void _dtpcSetScroll(HWND dlg,int ctrlv,int ctrls,int action,int value,int *param,int min,int max,int invert);
extern	int _dtpcGetStringDlg(HWND dlg,int ctrl, char *ns, char *ds,int size);
extern	BOOL WINAPI _dtpcCustomDlg(HWND hWndDlg,UINT Message,WPARAM wParam,LPARAM lParam);
extern	void _dtpcLoadVal(void);
extern	void _dtpcSaveVal(void);
extern	void _dtpcSetVal(void);
extern	int _dtpcSetValDlg(HWND hWndDlg,int param);
extern	int _dtpcFindModules(void);
