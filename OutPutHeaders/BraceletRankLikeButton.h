/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIButton.h"

@class DeviceRankInfo;

@interface BraceletRankLikeButton : MMUIButton {
	DeviceRankInfo* m_rankInfo;
}
@property(retain) DeviceRankInfo* m_rankInfo;
-(void).cxx_destruct;
-(void)animatChangeToLikeState:(BOOL)likeState;
-(void)initView;
-(id)initWithDeviceRankInfo:(id)deviceRankInfo;
@end
