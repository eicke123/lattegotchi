//
//  Item.h
//  LAttegotchi
//
//  Created by Alex Jahl on 17.02.14.
//  Copyright (c) 2014 Alex Jahl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ListItem.h"

@interface Item : NSObject <NSCoding, ListItem>

@property NSString * name;
@property int happiness;
@property int health;
@property int value;
@property int amount;

@end
