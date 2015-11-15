//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIRemoteApplication : NSObject
{
    NSString *_machServiceName;
    unsigned int _port;
}

- (void)wakeTimerFired;
- (void)backgroundContinuationEnabledDidChange:(BOOL)arg1;
- (void)localNotificationDidSnooze:(id)arg1;
- (void)localNotificationMessageDelivered:(id)arg1;
- (void)remoteNotificationMessageDelivered;
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)arg1;
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1;
- (void)simpleRemoteActionDidOccur:(int)arg1;
- (void)statusBarWillChangeOrientation:(int)arg1 duration:(float)arg2;
- (void)showTopMostMiniAlert;
- (void)hideTopMostMiniAlert:(int)arg1;
- (void)updatePort;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end

