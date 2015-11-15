//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, UITraitCollection, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding>
{
    _UIAssetManager *_assetManager;
    _Bool _cacheContents;
    UITraitCollection *_defaultTraitCollection;
    struct {
        unsigned int hasRegisteredImages:1;
        unsigned int supportsBlockGeneration:1;
        unsigned int disconnectedFromAssetManager:1;
    } _assetFlags;
    NSString *_assetName;
    CDUnknownBlockType _creationBlock;
}

+ (_Bool)supportsSecureCoding;
+ (id)_assetGeneratingImagesWithDrawingBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(readonly, nonatomic) _UIAssetManager *_assetManager; // @synthesize _assetManager;
- (void)_disconnectFromAssetManager;
- (_Bool)_containsImagesInPath:(id)arg1;
- (void)_clearResolvedImageResources;
- (id)_defaultTraitCollection;
- (id)_mutableCatalog;
- (id)_updateAssetFromBlockGenerationWithTraitCollection:(id)arg1 resolvedCatalogImage:(id)arg2;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 cache:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (id)imageWithTraitCollection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)init;

@end

