//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface UIKBAttributeList : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    NSMutableDictionary *m_dict;
    BOOL m_explicitlySpecified;
}

@property(nonatomic) BOOL explicitlySpecified; // @synthesize explicitlySpecified=m_explicitlySpecified;
@property(readonly, nonatomic) NSDictionary *dict; // @synthesize dict=m_dict;
@property(copy, nonatomic) NSString *name; // @synthesize name=m_name;
- (id)arrayValueForName:(id)arg1;
- (int)intValueForName:(id)arg1;
- (BOOL)boolValueForName:(id)arg1;
- (id)stringValueForName:(id)arg1;
- (id)valueForName:(id)arg1;
- (void)mergeAttributes:(id)arg1;
- (void)setIntValueForName:(int)arg1 forName:(id)arg2;
- (void)setBoolValueForName:(BOOL)arg1 forName:(id)arg2;
- (void)setValue:(id)arg1 forName:(id)arg2;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) NSArray *names;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

