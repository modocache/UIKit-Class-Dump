//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategory : NSObject
{
    NSString *_name;
    NSArray *_emoji;
    int _lastViewedPage;
}

@property int lastViewedPage; // @synthesize lastViewedPage=_lastViewedPage;
@property(retain) NSArray *emoji; // @synthesize emoji=_emoji;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

