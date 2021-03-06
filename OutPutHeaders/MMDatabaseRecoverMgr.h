/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"
#import "ReportStrategyExt.h"
#import "WCDBCorruptReportExt.h"

@class MMDBRConfig, NSString, NSMutableDictionary, NSObject;
@protocol MMDatabaseRecoverMgrDelegate, OS_dispatch_queue;

@interface MMDatabaseRecoverMgr : MMService <WCDBCorruptReportExt, ReportStrategyExt, MMService> {
	BOOL m_isUserLogon;
	BOOL m_isRecovering;
	BOOL _m_isGlobalSceneCanPop;
	NSMutableDictionary* m_dicAssistWithDBID;
	NSMutableDictionary* m_dicAssistWithScene;
	NSMutableDictionary* m_dicSceneStatus;
	id<MMDatabaseRecoverMgrDelegate> m_delegate;
	MMDBRConfig* m_config;
	NSObject<OS_dispatch_queue>* m_workQueue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* m_workQueue;
@property(assign, nonatomic) BOOL m_isRecovering;
@property(assign, nonatomic) BOOL m_isUserLogon;
@property(retain, nonatomic) MMDBRConfig* m_config;
@property(retain, nonatomic) NSMutableDictionary* m_dicSceneStatus;
@property(retain, nonatomic) NSMutableDictionary* m_dicAssistWithScene;
@property(retain, nonatomic) NSMutableDictionary* m_dicAssistWithDBID;
@property(assign, nonatomic) BOOL m_isGlobalSceneCanPop;
@property(assign, nonatomic) __weak id<MMDatabaseRecoverMgrDelegate> m_delegate;
+(void)SetupMMDatabaseRecoverMgr;
-(void).cxx_destruct;
-(void)onReceiveStrategy:(int)strategy withContene:(id)contene;
-(void)resetAllContextInScene;
-(void)resetAllCorruptInfo;
-(void)reportStatistic:(id)statistic repairer:(id)repairer ret:(BOOL)ret errorCode:(int)code;
-(void)internalRunRecover:(id)recover;
-(void)runRecover:(id)recover;
-(void)onRecoverEnd:(id)end ret:(BOOL)ret errorMsg:(id)msg;
-(void)onRecoverStart:(id)start;
-(void)recoverDatabase:(id)database;
-(void)callbackUIWithRet:(BOOL)ret errorMsg:(id)msg;
-(id)popRecoverContextOnScene:(unsigned)scene;
-(BOOL)hasAutoRecoverOnScene:(unsigned)scene getRecoverContext:(id*)context;
-(void)checkAutoRecoverOnScene:(unsigned)scene withName:(id)name;
-(void)generateAssistWithScene:(id)scene;
-(void)generateAssistWithDBID:(id)dbid;
-(void)clearAssistConfig;
-(void)clearConfig;
-(void)loadConfig;
-(void)setup;
-(void)ReportDatabaseCorrupt:(id)corrupt;
-(void)RebootWechat;
-(void)OnUIClickCancelWithContext:(id)context;
-(void)OnUIClickConfirmWithContext:(id)context;
-(id)UIDBRecoverTip:(id)tip;
-(BOOL)IsDiskSpaceLowWithContext:(id)context andGetRestSize:(unsigned long long*)size suggustSize:(unsigned long long*)size3;
-(void)ReceiveServerConfig:(id)config;
-(id)PopRecoverContextOnSceneCardPkg;
-(id)PopRecoverContextOnSceneGame;
-(id)PopRecoverContextOnSceneFavorite;
-(id)PopRecoverContextOnSceneTimeline;
-(id)PopRecoverContextOnSceneGlobal;
-(void)CheckAutoRecoverOnAllScene;
-(void)OnUserLogOut;
-(void)OnUserLogon;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
-(void)internalRebootWechat;
@end

