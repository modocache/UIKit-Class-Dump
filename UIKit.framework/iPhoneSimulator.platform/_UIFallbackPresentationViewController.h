//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _UIFallbackPresentationViewController : UIViewController
{
    UIWindow *_rotationDecider;
}

@property(retain, nonatomic) UIWindow *rotationDecider; // @synthesize rotationDecider=_rotationDecider;
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

