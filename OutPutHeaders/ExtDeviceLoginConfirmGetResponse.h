/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class ExtDeviceLoginConfirmOKRet, ExtDeviceLoginConfirmErrorRet, ExtDeviceLoginConfirmExpiredRet, BaseResponse;

@interface ExtDeviceLoginConfirmGetResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) ExtDeviceLoginConfirmExpiredRet* expiredRet;
@property(retain, nonatomic) ExtDeviceLoginConfirmErrorRet* errorRet;
@property(retain, nonatomic) ExtDeviceLoginConfirmOKRet* okret;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

