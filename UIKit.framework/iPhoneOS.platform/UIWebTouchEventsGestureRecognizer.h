//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer
{
    id _touchTarget;
    SEL _touchAction;
    id <UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
    unsigned int _passedHitTest:1;
    unsigned int _defaultPrevented:1;
    unsigned int _inJavaScriptGesture:1;
    unsigned int _type:2;
    double _originalGestureDistance;
    double _originalGestureAngle;
    struct CGPoint _locationInWindow;
    NSMutableArray *_touchLocations;
    NSMutableArray *_touchIdentifiers;
    NSMutableArray *_touchPhases;
    double _scale;
    double _rotation;
}

@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) _Bool inJavaScriptGesture; // @synthesize inJavaScriptGesture=_inJavaScriptGesture;
@property(retain, nonatomic) NSMutableArray *touchPhases; // @synthesize touchPhases=_touchPhases;
@property(retain, nonatomic) NSMutableArray *touchIdentifiers; // @synthesize touchIdentifiers=_touchIdentifiers;
@property(retain, nonatomic) NSMutableArray *touchLocations; // @synthesize touchLocations=_touchLocations;
@property(readonly, nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow=_locationInWindow;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic, getter=isDefaultPrevented) _Bool defaultPrevented; // @synthesize defaultPrevented=_defaultPrevented;
- (id).cxx_construct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (unsigned int)_getNextTouchIdentifier;
- (void)_resetGestureRecognizer;
- (void)_reset;
- (id)description;
- (id)_phasesDescription;
- (id)_phaseDescription:(long long)arg1;
- (id)_identifiersDescription;
- (id)_locationsDescription;
- (id)_typeDescription;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3;

@end

