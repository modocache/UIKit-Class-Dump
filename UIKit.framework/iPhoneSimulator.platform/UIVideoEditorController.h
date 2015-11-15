//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSMutableDictionary, NSString;

@interface UIVideoEditorController : UINavigationController
{
    int _previousStatusBarStyle;
    NSMutableDictionary *_properties;
    struct {
        unsigned int visible:1;
        unsigned int isCleaningUp:1;
        unsigned int didRevertStatusBar:1;
    } _flags;
}

+ (BOOL)canEditVideoAtPath:(id)arg1;
- (id)_valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_properties;
- (void)_initializeProperties;
- (void)_setProperties:(id)arg1;
@property(nonatomic) unsigned int videoQuality;
@property(nonatomic) double videoMaximumDuration;
@property(copy, nonatomic) NSString *videoPath;
- (void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)_autoDismiss;
- (void)_setupControllers;
- (id)_createInitialController;
- (void)_removeAllChildren;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_didRevertStatusBar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillUnload;
- (id)init;

// Remaining properties
@property(nonatomic) id <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> delegate; // @dynamic delegate;

@end

