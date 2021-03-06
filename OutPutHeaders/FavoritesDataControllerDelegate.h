/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FavoritesDataControllerDelegate <NSObject>
-(BOOL)onResponseForSelectFavItem:(id)selectFavItem;
-(void)onSelectCountChanged:(unsigned)changed;
-(void)reloadTableAtIndexPath:(id)indexPath;
-(void)reloadTableView;
-(void)showEmptyView;
-(void)onLoadingMore;
-(id)getCurrentViewController;
@optional
-(void)forwardItem:(id)item;
-(void)onBtnEdit;
@end

