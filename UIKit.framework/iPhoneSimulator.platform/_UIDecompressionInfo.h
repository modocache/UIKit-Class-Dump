//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_semaphore>, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface _UIDecompressionInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *syncSemaphore;
    NSObject<OS_dispatch_semaphore> *metadataSemaphore;
    NSData *imageData;
    struct CGSize maxSize;
    int renderingIntent;
    _UIAsyncInvocation *terminationInvocation;
    _Bool decompressionComplete;
    _Bool metadataComplete;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 maxSize:(struct CGSize)arg2 renderingIntent:(int)arg3;

@end

