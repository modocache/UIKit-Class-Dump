//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject
{
    UIViewController *_viewController;
    NSString *_name;
    BOOL _animated;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 name:(id)arg2 animated:(BOOL)arg3;

@end

