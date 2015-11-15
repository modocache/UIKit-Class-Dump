//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIRemoteWindow;

@interface UIRemoteView : UIView
{
    NSString *_remoteViewIdentifier;
    UIRemoteWindow *_remoteWindow;
    BOOL _captureAllWindows;
    BOOL _remoteViewOpaque;
}

- (id)remoteViewIdentifier;
- (void)unregister;
- (void)dealloc;
- (void)registerWithIdentifier:(id)arg1;
- (void)setRemoteViewOpaque:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 captureAllWindows:(BOOL)arg2;

@end

