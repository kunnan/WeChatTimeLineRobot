/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSString;
@protocol WCDataProviderDelegate;

@interface WCHomepageDataProvider_Sns : MMObject <PBMessageObserverDelegate> {
	NSString* username;
	NSString* fpHash;
	BOOL isWorking;
	id<WCDataProviderDelegate> delegate;
}
@property(retain, nonatomic) NSString* username;
@property(assign, nonatomic) __weak id<WCDataProviderDelegate> delegate;
-(void).cxx_destruct;
-(void)forceUpdateWithReferID:(id)referID;
-(void)updateHeadWithSource:(int)source;
-(void)updateWithReferID:(id)referID bottomID:(id)anId;
-(void)updateWithReferID:(id)referID;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(BOOL)responseForSnsUserPageResponse:(id)snsUserPageResponse Event:(unsigned long)event;
-(void)saveResponseListForFutureList:(id)futureList;
-(void)internalSaveResponseListForFutureList:(id)futureList;
-(void)requestForSnsHomepageRequest:(id)snsHomepageRequest minID:(id)anId source:(int)source;
-(void)requestForSnsHomepageRequest:(id)snsHomepageRequest source:(int)source;
-(id)converListToList:(id)list;
-(void)dealloc;
@end

