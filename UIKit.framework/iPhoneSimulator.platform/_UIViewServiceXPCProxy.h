//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XPCProxy.h"

#import "_UIRemoteProtocolSettingViewServiceXPCProxyTarget.h"

@class NSObject<OS_dispatch_queue>, _UIQueueRedirectingProxy;

__attribute__((visibility("hidden")))
@interface _UIViewServiceXPCProxy : XPCProxy <_UIRemoteProtocolSettingViewServiceXPCProxyTarget>
{
    int _connectionPID;
    _UIQueueRedirectingProxy *_queueRedirectingProxy;
    NSObject<OS_dispatch_queue> *_queue;
    int _lock;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

+ (id)activeFencePort;
- (void)invalidate;
- (id)_withRemoteProtocol:(id)arg1 do:(CDUnknownBlockType)arg2;
- (void)forwardInvocation:(id)arg1 withRemoteProtocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1 withRemoteProtocol:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxyWithRemoteProtocol:(id)arg1;
- (void)restrictDecodingToWhitelistedClassNames:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 target:(id)arg3;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

