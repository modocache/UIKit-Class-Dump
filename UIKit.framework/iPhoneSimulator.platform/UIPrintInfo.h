//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_printerID;
    NSString *_jobName;
    int _outputType;
    int _orientation;
    int _duplex;
    int _copies;
    BOOL _scaleUp;
}

+ (void)_saveDuplex:(int)arg1;
+ (void)_savePrinter:(id)arg1;
+ (id)printInfoWithDictionary:(id)arg1;
+ (id)printInfo;
@property(nonatomic) BOOL scaleUp; // @synthesize scaleUp=_scaleUp;
@property(nonatomic) int copies; // @synthesize copies=_copies;
@property(nonatomic) int duplex; // @synthesize duplex=_duplex;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int outputType; // @synthesize outputType=_outputType;
@property(copy, nonatomic) NSString *jobName; // @synthesize jobName=_jobName;
@property(copy, nonatomic) NSString *printerID; // @synthesize printerID=_printerID;
- (void)dealloc;
- (id)_createPrintSettingsForPrinter:(id)arg1;
- (void)_updateWithPrinter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_initWithDictionary:(id)arg1;
- (id)init;

@end

