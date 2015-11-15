//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class ABPeoplePickerNavigationController, UIImage, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIImage *_image;
    ABPeoplePickerNavigationController *_peoplePicker;
    void *_person;
    UIImagePickerController *_imagePickerController;
}

@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) void *person; // @synthesize person=_person;
@property(retain, nonatomic) ABPeoplePickerNavigationController *peoplePicker; // @synthesize peoplePicker=_peoplePicker;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)_cleanup;
- (id)activityViewController;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;
- (void)dealloc;

@end

