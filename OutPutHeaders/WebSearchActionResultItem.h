/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WebSearchActionResultItem : MMObject {
	BOOL _hasResult;
	BOOL _hasClicked;
	NSString* _query;
	unsigned long _type;
}
@property(assign, nonatomic) BOOL hasClicked;
@property(assign, nonatomic) BOOL hasResult;
@property(assign, nonatomic) unsigned long type;
@property(retain, nonatomic) NSString* query;
-(void).cxx_destruct;
-(int)getActionType;
-(id)init;
@end
