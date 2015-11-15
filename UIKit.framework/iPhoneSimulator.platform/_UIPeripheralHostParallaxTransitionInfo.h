//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIPeripheralHostCustomTransition.h"

__attribute__((visibility("hidden")))
@interface _UIPeripheralHostParallaxTransitionInfo : NSObject <_UIPeripheralHostCustomTransition>
{
    double _parallaxOffset;
    double _gapBetweenViews;
    long long _style;
    long long _operation;
}

@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double gapBetweenViews; // @synthesize gapBetweenViews=_gapBetweenViews;
@property(nonatomic) double parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
- (void)computeTransition:(id)arg1 forHost:(id)arg2;

@end

