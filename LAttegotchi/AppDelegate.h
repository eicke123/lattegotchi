//
//  AppDelegate.h
//  LAttegotchi
//
//  Created by Alex Jahl on 17.02.14.
//  Copyright (c) 2014 Alex Jahl. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Player.h"

#import "InitModelViewController.h"

@class LAttegotchi;

@interface AppDelegate : UIResponder <UIApplicationDelegate, InitModelAlertViewControllerDelegate> {
    Player* player;
    NSArray* wishesMemory;
}
//test

@property (strong, nonatomic) UIWindow *window;

- (Player*) getPlayer;
- (NSString*) getDataFilePath;
- (void) updateUI;

@end
