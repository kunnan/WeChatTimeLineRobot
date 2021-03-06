/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class FavoritesItemDB, FavoritesSearchDB;
@protocol FavoritesSearchMgrDelegate;

@interface FavoritesSearchMgr : MMObject {
	FavoritesItemDB* _favItemDB;
	FavoritesSearchDB* _favSearchDB;
	BOOL _isStop;
	id<FavoritesSearchMgrDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<FavoritesSearchMgrDelegate> delegate;
-(void).cxx_destruct;
-(void)stopSearch;
-(void)search:(id)search byType:(int)type;
-(id)syncSearch:(id)search byType:(int)type tags:(id)tags;
-(void)search:(id)search byType:(int)type tags:(id)tags;
-(BOOL)deleteSearchItemByLocalFavId:(unsigned long)anId;
-(BOOL)insertOrUpdateSearchItem:(id)item;
-(void)broadcastGetSearchResult:(id)result;
-(void)initDB:(id)db;
-(id)init;
@end

