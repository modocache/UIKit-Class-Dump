//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol UIKeyboardRivenTransitionView
- (void)finishWithProgress:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateWithProgress:(float)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(int)arg3 orientation:(int)arg4;

@optional
- (void)rebuildControlKeys:(int)arg1;
- (BOOL)canDisplayTransition;
@end

