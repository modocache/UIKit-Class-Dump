//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject
{
    NSArray *_viewAnimations;
    int _animationCount;
}

@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSArray *viewAnimations; // @synthesize viewAnimations=_viewAnimations;
- (void)dealloc;

@end

