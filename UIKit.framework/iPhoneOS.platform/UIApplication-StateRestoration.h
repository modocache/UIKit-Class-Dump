//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (StateRestoration)
- (void)_restoreApplicationPreservationStateWithSessionIdentifier:(id)arg1 beginHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)ignoreSnapshotOnNextApplicationLaunch;
- (void)completeStateRestoration;
- (void)extendStateRestoration;
- (void)_saveApplicationPreservationState:(id)arg1 viewController:(id)arg2 sessionIdentifier:(id)arg3 beginHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeApplicationPreservationStateWithSessionIdentifier:(id)arg1;
- (void)restoreApplicationPreservationStateWithSessionIdentifier:(id)arg1 viewController:(id)arg2 beginHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveApplicationPreservationStateWithSessionIdentifier:(id)arg1 viewController:(id)arg2 beginHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_saveApplicationPreservationStateIfSupported;
- (_Bool)_doRestorationIfNecessary;
@end
