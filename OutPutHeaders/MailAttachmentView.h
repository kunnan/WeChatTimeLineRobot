/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class UIActivityIndicatorView, UIButton, NSString, UILabel;
@protocol MailAttachmentViewDelegate;

@interface MailAttachmentView : MMUIView {
	UIActivityIndicatorView* m_loadingView;
	UILabel* m_labelName;
	UILabel* m_labelPercent;
	UILabel* m_labelUploadFail;
	UIButton* m_btnDelete;
	UIButton* m_btnResend;
	unsigned long m_uiPercent;
	unsigned long m_uiSize;
	NSString* m_nsAttachmentName;
	NSString* m_nsName;
	id<MailAttachmentViewDelegate> m_delegate;
}
@property(assign, nonatomic) unsigned long m_uiSize;
@property(assign, nonatomic) __weak id<MailAttachmentViewDelegate> m_delegate;
@property(retain, nonatomic) NSString* m_nsName;
-(void).cxx_destruct;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame name:(id)name;
-(void)initView;
-(void)OnResend:(id)resend;
-(void)OnDelete:(id)aDelete;
-(void)setUploadingStatus;
-(void)updateUploadPercent:(unsigned long)percent;
-(void)setUploadSuccessStatus;
-(void)setUploadFailStatus;
-(BOOL)isUploadSuccess;
-(void)initData;
@end

