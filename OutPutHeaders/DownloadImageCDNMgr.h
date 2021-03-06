/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ICdnComMgrExt.h"

@class CdnTaskInfo, NSMutableArray, NSString;

@interface DownloadImageCDNMgr : XXUnknownSuperclass <ICdnComMgrExt> {
	NSMutableArray* m_arrQueue;
	CdnTaskInfo* m_oCurTaskInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CdnTaskInfo* m_oCurTaskInfo;
-(void).cxx_destruct;
-(void)OnCdnDownload:(id)download;
-(void)OnCdnDownloadProgress:(id)progress;
-(void)OnSetCdnDnsInfo;
-(id)GetTempFilePath:(id)path;
-(id)GetFilePath:(id)path;
-(void)DownloadFail:(long)fail;
-(void)DownloadFail:(long)fail Expired:(BOOL)expired;
-(unsigned long)GetDownloadImageTotalLen:(id)len;
-(unsigned long)GetDownloadImagePartLen:(id)len;
-(void)StopDownloadImageByUsrName:(id)name FromDelMsg:(BOOL)delMsg;
-(void)StopCurDownload;
-(void)StartDownloadImage:(id)image HD:(BOOL)hd AutoDownload:(BOOL)download;
-(BOOL)IsDownloading:(id)downloading;
-(void)CheckQueue;
-(void)dealloc;
-(id)init;
@end

