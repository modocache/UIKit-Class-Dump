//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIActivity : NSObject
{
    CDUnknownBlockType _activityCompletionHandler;
}

+ (long long)activityCategory;
@property(copy, nonatomic) CDUnknownBlockType activityCompletionHandler; // @synthesize activityCompletionHandler=_activityCompletionHandler;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;

@end

