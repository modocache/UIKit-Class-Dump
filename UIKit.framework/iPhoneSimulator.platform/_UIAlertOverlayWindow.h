//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

__attribute__((visibility("hidden")))
@interface _UIAlertOverlayWindow : UIWindow
{
}

+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (void)_updateTransformLayerForClassicPresentation;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)isInternalWindow;
- (id)representation;
- (void)_handleMouseUp:(struct __GSEvent *)arg1;

@end

