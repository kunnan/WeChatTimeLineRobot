/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"
#import "ICdnComMgrExt.h"

@class NSString, FavoritesItem, FavoritesCDNInfo;
@protocol FavoritesAsyncUploaderDelegate;

@interface FavoritesAsyncUploader : MMObject <PBMessageObserverDelegate, ICdnComMgrExt> {
	FavoritesItem* _favItem;
	id<FavoritesAsyncUploaderDelegate> _delegate;
	int _runningState;
	FavoritesCDNInfo* _uploadingInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<FavoritesAsyncUploaderDelegate> delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleModifyFavItemResp:(id)resp Event:(unsigned long)event;
-(void)OnCdnUpload:(id)upload;
-(void)OnCdnUploadProgress:(id)progress;
-(void)BroadcastUploadFail:(int)fail;
-(void)tryStartNextData;
-(void)doModifyItemCGI:(id)cgi;
-(id)updateFavoritesItemCDNInfo;
-(id)getItem;
-(BOOL)stop;
-(void)run;
-(void)dealloc;
-(id)initWithFavoritesItem:(id)favoritesItem;
@end
