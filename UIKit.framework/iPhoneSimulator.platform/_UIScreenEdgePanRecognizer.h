//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UISettingsKeyObserver.h"

@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver>
{
    struct CGRect _screenBounds;
    _Bool _useGrapeFlags;
    _Bool _hasRecordedData;
    _Bool _hasDoneInitialBackProjectionTest;
    double _gestureRestrictionFactor;
    struct CGPoint _initialTouchLocation;
    double _initialTouchTimestamp;
    long long _initialInterfaceOrientation;
    unsigned long long _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    struct CGPoint _lastTouchLocation;
    double _lastTouchTimestamp;
    long long _type;
    _Bool _requiresLongPress;
    _Bool _requiresFlatThumb;
    unsigned long long _targetEdges;
    long long _state;
    unsigned long long _recognizedRegion;
    id <_UIScreenEdgePanRecognizerDelegate> _delegate;
    _UIScreenEdgePanRecognizerSettings *_settings;
}

+ (_Bool)_edgeSwipeNavigationGestureEnabled;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings; // @synthesize settings=_settings;
@property id <_UIScreenEdgePanRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long recognizedRegion; // @synthesize recognizedRegion=_recognizedRegion;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool requiresFlatThumb; // @synthesize requiresFlatThumb=_requiresFlatThumb;
@property(nonatomic) unsigned long long targetEdges; // @synthesize targetEdges=_targetEdges;
@property(nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
- (unsigned long long)_targetEdges;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
@property(readonly, nonatomic, getter=isRequiringLongPress) _Bool requiringLongPress;
- (long long)_type;
- (void)_setState:(long long)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end
