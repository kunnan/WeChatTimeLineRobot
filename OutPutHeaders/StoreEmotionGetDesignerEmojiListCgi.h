/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class SKBuiltinBuffer_t, NSMutableArray, NSArray, NSString;
@protocol StoreEmotionGetDesignerEmojiListCgiDelegate;

@interface StoreEmotionGetDesignerEmojiListCgi : MMObject <PBMessageObserverDelegate> {
	NSMutableArray* m_designerEmojiList;
	unsigned long m_designerUin;
	unsigned m_opCode;
	unsigned m_tagId;
	NSString* m_keyword;
	SKBuiltinBuffer_t* m_pageBuf;
	BOOL m_hasMore;
	unsigned long m_eventID;
	id<StoreEmotionGetDesignerEmojiListCgiDelegate> _delegate;
}
@property(readonly, assign, nonatomic) BOOL isRequesting;
@property(readonly, assign, nonatomic) NSArray* emojiList;
@property(readonly, assign, nonatomic) BOOL hasMore;
@property(assign, nonatomic) __weak id<StoreEmotionGetDesignerEmojiListCgiDelegate> delegate;
-(void).cxx_destruct;
-(void)callFailedDelegate;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(BOOL)startRequest;
-(void)initData;
-(id)initWithTagId:(unsigned)tagId;
-(id)initWithKeyword:(id)keyword;
-(id)initWithDesignerUin:(unsigned long)designerUin;
-(id)init;
@end

