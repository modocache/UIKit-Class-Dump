//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAutoRotatingWindow.h>

@interface UITextEffectsWindow : UIAutoRotatingWindow
{
    unsigned long _activeEffectsCount;
    BOOL _inDealloc;
}

+ (void)_releaseSharedInstances;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)sharedTextEffectsWindow;
- (BOOL)isInternalWindow;
- (void)matchDeviceOrientation;
- (void)updateSubviewOrdering;
- (void)updateForOrientation:(int)arg1;
- (void)sortSubviews;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)delayHideWindow;
- (BOOL)_disableViewScaling;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

