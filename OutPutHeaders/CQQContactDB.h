/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class CMMDB;

@interface CQQContactDB : XXUnknownSuperclass {
	CMMDB* m_oMMDB;
}
-(void).cxx_destruct;
-(void)getQQContactValue:(id)value fromDBObject:(id)dbobject;
-(void)setQueryProperty:(vector<WCDBConditionBase, std::__1::allocator<WCDBConditionBase> >*)property;
-(BOOL)updateContact:(id)contact;
-(BOOL)deleteContact:(id)contact;
-(BOOL)addContact:(id)contact;
-(BOOL)getAllContactList:(id)list;
-(id)getContact:(id)contact;
-(void)initDB:(id)db;
-(void)convertQQContact:(id)contact toDBObject:(id)dbobject andProperty:(vector<WCDBConditionBase, std::__1::allocator<WCDBConditionBase> >*)property;
-(void)saveUserImage:(id)image;
-(id)init;
@end

