//
//  ViewController.h
//  MobileRTCSample
//
//  Created by Robust Hu on 16/5/18.
//  Copyright © 2016年 Zoom Video Communications, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomMeetingViewController.h"
#import "IntroViewController.h"
#import "InviteViewController.h"
#import "SplashViewController.h"

#define kSDKUserID      @""
#define kSDKUserName    @""
#define kSDKUserToken   @""
#define kSDKMeetNumber  @""
#define kZAK @""
//the following parameters are optional, just for login user
#define kParticipantID  @""
#define kWebinarToken   @""

@interface MainViewController : UIViewController

@property (retain, nonatomic) UIButton *meetButton;
@property (retain, nonatomic) UIButton *joinButton;

@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) UIButton *settingButton;

@property (retain, nonatomic) IntroViewController  *introVC;
@property (retain, nonatomic) SplashViewController *splashVC;

@property (assign, nonatomic) BOOL isSharing;

@property (copy, nonatomic) RTCJoinMeetingActionBlock  joinMeetingBlock;

@end

