//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScroller.h>

@interface UIScroller (Static)
- (struct CGRect)contentFrameForView:(id)arg1;
- (struct CGPoint)autoscrollContentOffset;
- (void)setAutoscrollContentOffset:(struct CGPoint)arg1;
- (void)_disableScrollingIfEntirelyVisible;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (void)_doContentHighlight;
- (BOOL)_dragging;
- (void)_adjustEndOffset;
- (void)_startTimer:(BOOL)arg1;
- (void)_runLoopModePopped:(id)arg1;
- (BOOL)_continueScrollingAtOffset:(struct CGPoint)arg1;
- (void)_smoothScroll:(id)arg1;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlMouseDragged:(struct __GSEvent *)arg1;
- (void)_controlMouseUp:(struct __GSEvent *)arg1;
- (void)_controlMouseDown:(struct __GSEvent *)arg1;
- (BOOL)_passControlEvents;
- (void)_notifyDidScroll;
- (void)_hideScrollIndicators;
@end

