/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSMutableArray, UIViewController, UIView, NSString, UIPickerView, NSMutableDictionary, UIPopoverController;
@protocol MMPickerViewDelegate;

@interface MMPickerView : XXUnknownSuperclass <UIPopoverPresentationControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource> {
	UIPickerView* m_pickerView;
	id<MMPickerViewDelegate> m_delegate;
	int m_curSession;
	NSMutableArray* m_arrSessions;
	NSMutableArray* m_arrRows;
	NSMutableDictionary* m_dicSelectionIndex;
	float m_fLeftWidth;
	UIView* _contentView;
	UIView* _transparentView;
	UIPopoverController* _popoverController;
	UIViewController* _popoverControllerNew;
	int _lastOri;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int lastOri;
@property(retain, nonatomic) UIViewController* popoverControllerNew;
@property(retain, nonatomic) UIPopoverController* popoverController;
@property(retain, nonatomic) UIView* transparentView;
@property(retain, nonatomic) UIView* contentView;
@property(retain, nonatomic) NSMutableDictionary* m_dicSelectionIndex;
@property(assign, nonatomic) __weak id<MMPickerViewDelegate> m_delegate;
@property(retain, nonatomic) UIPickerView* m_pickerView;
+(CGSize)getPickerViewSize;
-(void).cxx_destruct;
-(void)setSelectedRowTitle:(id)title atSessionTitle:(id)sessionTitle;
-(void)setSelectedRows:(id)rows;
-(void)setSelectedRow:(int)row atSession:(int)session;
-(void)UIPickerViewDidFinish;
-(void)UIPickerViewDidCancel;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(float)pickerView:(id)view widthForComponent:(int)component;
-(void)setLeftWidth:(float)width;
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(id)pickerView:(id)view titleForRow:(int)row forComponent:(int)component;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(void)dismissWithAnimated:(BOOL)animated;
-(void)handleTap:(id)tap;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController;
-(void)showInView:(id)view;
-(void)didRotate:(id)rotate;
-(void)dealloc;
-(id)initWithRows:(id)rows;
-(id)initWithSessions:(id)sessions andRows:(id)rows;
-(void)initView;
@end
