//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _UIDynamicAnimationActiveValue : NSObject
{
    double _value;
    double _minimumActiveValue;
    double _maximumActiveValue;
    int _type;
    double _boundaryPull;
    id _applier;
    unsigned int _lowerBoundary:1;
    unsigned int _upperBoundary:1;
}

+ (id)activeValue:(double)arg1 ofType:(int)arg2;
+ (id)upperBoundary:(double)arg1 ofType:(int)arg2;
+ (id)lowerBoundary:(double)arg1 ofType:(int)arg2;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double maximumActiveValue; // @synthesize maximumActiveValue=_maximumActiveValue;
@property(nonatomic) double minimumActiveValue; // @synthesize minimumActiveValue=_minimumActiveValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (BOOL)_isUpperBoundary;
- (BOOL)_isLowerBoundary;
- (void)_setBoundaryPull:(double)arg1;
- (double)_boundaryPull;
- (CDUnknownBlockType)_applier;
- (void)dealloc;
- (id)init;

@end

