/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IAppDataExt.h"
#import "MMObject.h"
#import "IPreEnterWechatLogicExt.h"
#import "MMWebViewDelegate.h"
#import "MMKernelExt.h"

@class NSURL, UINavigationController, NSString;

@interface NewAuthHandler : MMObject <IAppDataExt, MMWebViewDelegate, MMKernelExt, IPreEnterWechatLogicExt> {
	NSString* m_nsAppid;
	NSURL* m_url;
	UINavigationController* m_oAuthViewController;
	BOOL m_isDoing;
	NSString* _m_nsScope;
	NSString* _m_nsState;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_nsState;
@property(retain, nonatomic) NSString* m_nsScope;
-(void).cxx_destruct;
-(void)onPostQuit;
-(void)onPreQuit;
-(void)onKickQuit;
-(void)OnGotListAppSettingItem:(id)item errType:(int)type;
-(id)webViewFailToLoad:(id)load;
-(void)onWebViewDidFinishLoad:(id)onWebView;
-(void)onWebViewDidStartLoad:(id)onWebView;
-(void)OnOAuthCancel;
-(void)onPreEnterWechatDone;
-(void)removeOAuthView;
-(void)onRetry:(id)retry;
-(void)createOAuthView;
-(void)cancelAllHandleAndReturn3rdApp;
-(void)clearAllHandle;
-(void)cancelAllHandle;
-(id)parseURLParams;
-(void)cancelWechatConnect;
-(void)startWechatConnect:(id)connect authInfo:(id)info;
-(void)dealloc;
-(void)viewDidLoad;
-(id)init;
@end

