//
//  DebugViewController.h
//  LAttegotchi
//
//  Created by Christoph Eickhoff on 20.02.14.
//  Copyright (c) 2014 Alex Jahl. All rights reserved.
//


@interface DebugViewController : UIViewController


@property IBOutlet UILabel * levelLabel;
@property IBOutlet UIStepper * levelstepper;
@property IBOutlet UISwitch * debugsw;
@property IBOutlet UISwitch * switchWeather;
@property IBOutlet UIButton * buttonWeatherSkyisclear;
@property IBOutlet UIButton * buttonWeatherFewCloud;
@property IBOutlet UIButton * buttonWeatherCloud;
@property IBOutlet UIButton * buttonWeatherRain;
@property IBOutlet UIButton * buttonWeatherUnknown;

- (IBAction)buttonItem:(id)sender;
- (IBAction)buttonGPS:(id)sender;
- (IBAction)buttonMath:(id)sender;
- (IBAction)buttonPush:(id)sender;
- (IBAction)buttonShake:(id)sender;
- (IBAction)buttonBack:(id)sender;
- (IBAction)buttonStroke:(id)sender;
- (IBAction)buttonMoney:(id)sender;
- (IBAction)buttonHappyHealth:(id)sender;
- (IBAction)switchDebugMode:(id)sender;
- (IBAction)stepperLevel:(id)sender;
- (IBAction)switchWeather:(id)sender;
- (IBAction)buttonWeatherSkyisclear:(id)sender;
- (IBAction)buttonWeatherFewCloud:(id)sender;
- (IBAction)buttonWeatherCloud:(id)sender;
- (IBAction)buttonWeatherRain:(id)sender;
- (IBAction)buttonWeatherUnknown:(id)sender;

@end
