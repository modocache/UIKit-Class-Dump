//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (Gestures_Internal)
- (float)_zoomAnimationProgress;
- (void)_animateZoomFailureToWindowPoint:(struct CGPoint)arg1 scale:(float)arg2 duration:(float)arg3;
- (void)_animateToScrollPoint:(struct CGPoint)arg1;
- (void)_zoomToWindowPoint:(struct CGPoint)arg1 scale:(float)arg2 duration:(float)arg3 constrainScrollPoint:(BOOL)arg4 event:(struct __GSEvent *)arg5;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (void)_zoomToScrollPoint:(struct CGPoint)arg1 scale:(float)arg2 duration:(float)arg3 event:(struct __GSEvent *)arg4;
- (struct CGPoint)_constrainedScrollPoint:(struct CGPoint)arg1 contentSize:(struct CGSize)arg2;
- (struct CGSize)_scrollerContentSize;
- (void)_gestureEnded:(struct __GSEvent *)arg1;
- (id)_gestureInfo;
@end

