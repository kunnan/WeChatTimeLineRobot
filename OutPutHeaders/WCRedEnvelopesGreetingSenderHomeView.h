/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class MMUILabel, UIImageView, UILabel;
@protocol WCRedEnvelopesGreetingSenderHomeViewDelegate;

@interface WCRedEnvelopesGreetingSenderHomeView : MMUIView {
	id<WCRedEnvelopesGreetingSenderHomeViewDelegate> m_delegate;
	UIImageView* m_backgroundView;
	MMUILabel* numLable;
	UILabel* m_descTitleLable;
	UILabel* m_statusLabel;
	UIImageView* m_receivedIconView;
	BOOL m_bEndAnmation;
}
-(void).cxx_destruct;
-(void)removeView;
-(void)endAnimation;
-(void)showAnimation;
-(void)OnCancelButtonDone;
-(id)initWithFrame:(CGRect)frame delegate:(id)delegate TotalFee:(long)fee Wish:(id)wish StatusMess:(id)mess NotShowIcon:(BOOL)icon;
@end

