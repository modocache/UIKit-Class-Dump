//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAppearanceCustomizableClassInfo : NSObject
{
    _Bool _isGuideClassRoot;
    _Bool _isCustomizableViewClassRoot;
    NSString *_appearanceNodeKey;
    unsigned long long _hash;
    Class _customizableViewClass;
    Class _guideClass;
}

+ (id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;
@property(readonly, nonatomic) Class _customizableViewClass; // @synthesize _customizableViewClass;
@property(readonly, nonatomic) unsigned long long _hash; // @synthesize _hash;
@property(readonly, nonatomic) NSString *_appearanceNodeKey; // @synthesize _appearanceNodeKey;
- (void)dealloc;
- (id)description;
- (id)_superClassInfo;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) Class _guideClass; // @synthesize _guideClass;

@end

