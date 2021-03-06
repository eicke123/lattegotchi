//
//  DotImageView.h
//  LAttegotchi
//
//  Created by Alex Jahl on 18.02.14.
//  Copyright (c) 2014 Alex Jahl. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
*   dot matrix view
*/

@interface DotImageView : UIView <UIGestureRecognizerDelegate>{
    // 
    UIImage * image;
    UIImage * heart;
    UIImage * emotion;
    UIImage * scull;
    UIImage * aBC;
    NSString * aBCString;
    NSArray * emotions;
    UIImage * wishLamp;
    UIImage * sun;
    UIImage * cloud;
    UIImage * cloudsun;
    UIImage * rain;
    int debugTouchCount;
}

- (void) setImage : (UIImage *) img;
- (void) setEmotion : (UIImage *) img;
- (void) setEmotions : (NSArray *) emos;
- (void) setHeart : (UIImage *) img;
- (void) setABC : (UIImage *) img;
- (void) setABCString : (NSString *) string;
- (void) setScull : (UIImage *) img;
- (void) setWishLamp : (UIImage *) img;
- (void) setSun : (UIImage *) img;
- (void) setCloud : (UIImage *) img;
- (void) setCloudSun : (UIImage *) img;
- (void) setRain : (UIImage *) img;


@end
