//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UILocalNotification.h>

@class NSCalendar, NSData, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification
{
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned int repeatInterval;
    NSCalendar *repeatCalendar;
    int totalRepeatCount;
    int remainingRepeatCount;
    NSString *alertBody;
    BOOL hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *soundName;
    int applicationIconBadgeNumber;
    NSData *userInfoData;
    BOOL hideAlertTitle;
    BOOL allowSnooze;
    BOOL soundNameIsARingtone;
    BOOL interruptAudioAndLockDevice;
    BOOL resumeApplicationInBackground;
    BOOL fireNotificationsWhenAppRunning;
    BOOL showAlarmStatusBarItem;
    NSString *customLockSliderLabel;
    BOOL isSystemAlert;
}

- (void)setIsSystemAlert:(BOOL)arg1;
- (BOOL)isSystemAlert;
- (void)setCustomLockSliderLabel:(id)arg1;
- (id)customLockSliderLabel;
- (void)setShowAlarmStatusBarItem:(BOOL)arg1;
- (BOOL)showAlarmStatusBarItem;
- (void)setFireNotificationsWhenAppRunning:(BOOL)arg1;
- (BOOL)fireNotificationsWhenAppRunning;
- (void)setResumeApplicationInBackground:(BOOL)arg1;
- (BOOL)resumeApplicationInBackground;
- (void)setInterruptAudioAndLockDevice:(BOOL)arg1;
- (BOOL)interruptAudioAndLockDevice;
- (void)setSoundNameIsARingtone:(BOOL)arg1;
- (BOOL)soundNameIsARingtone;
- (void)setAllowSnooze:(BOOL)arg1;
- (BOOL)allowSnooze;
- (void)setHideAlertTitle:(BOOL)arg1;
- (BOOL)hideAlertTitle;
- (void)setRemainingRepeatCount:(int)arg1;
- (int)remainingRepeatCount;
- (int)totalRepeatCount;
- (void)setApplicationIconBadgeNumber:(int)arg1;
- (int)applicationIconBadgeNumber;
- (void)setSoundName:(id)arg1;
- (id)soundName;
- (void)setAlertLaunchImage:(id)arg1;
- (id)alertLaunchImage;
- (void)setAlertAction:(id)arg1;
- (id)alertAction;
- (void)setHasAction:(BOOL)arg1;
- (BOOL)hasAction;
- (void)setAlertBody:(id)arg1;
- (id)alertBody;
- (void)setRepeatCalendar:(id)arg1;
- (id)repeatCalendar;
- (void)setRepeatInterval:(unsigned int)arg1;
- (unsigned int)repeatInterval;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)setFireDate:(id)arg1;
- (id)fireDate;
- (void)clearNonSystemProperties;
- (BOOL)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)description;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)_setUserInfoData:(id)arg1;
- (int)compareFireDates:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setTotalRepeatCount:(int)arg1;

@end

