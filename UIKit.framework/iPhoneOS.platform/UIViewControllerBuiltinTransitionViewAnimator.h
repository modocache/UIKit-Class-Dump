//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    int _transition;
    id <UIViewControllerContextTransitioning> _transitionContext;
    _Bool _removeFromView;
    id _delegate;
    UIView *_toView;
    UIView *_fromView;
}

@property(nonatomic) _Bool removeFromView; // @synthesize removeFromView=_removeFromView;
@property(nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (_Bool)transitionViewShouldUseViewControllerCallbacks;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;
- (struct CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (void)transitionViewDidStart:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransition:(int)arg1;

@end

